import time
import multiprocessing as mp
from random import randint

CLEARSCR="\x1B[2J\x1B[;H"        #  Clear SCReen
CURSOFF  = "\x1B[?25l"             #  Curseur invisible
print(CURSOFF,end='')

serveurs=[]
cmd_cuisine=mp.Manager().list()
for i in range(5):
    cmd_cuisine.append('')
L_affichage=mp.Manager().list()


cmd_clients=mp.Queue(20)


def effacer_ecran() : 
    print(CLEARSCR,end='')

def move_to(lig, col) : # No work print("\033[%i;%if"%(lig, col)) # print(GOTOYX%(x,y))
    print("\033[" + str(lig) + ";" + str(col) + "f",end='')


def fonc_clients():
    id_client=1
    while True:
        delai=randint(2,5)
        menu=chr(randint(65,90)) #génération aléatoire de la commande en code ASCII
        cmd_clients.put((id_client,menu))
        L_affichage.append((id_client,menu))
        id_client+=1
        time.sleep(delai)

def fonc_serveurs(num_serveur):
    while True:
        cuisson=randint(10,20)
        if cmd_cuisine[num_serveur] == '':
            cmd=cmd_clients.get()
            L_affichage.remove(cmd)
            cmd_cuisine[num_serveur]=cmd
        time.sleep(cuisson)
        move_to(20,0)
        cmd_cuisine[num_serveur]=''
        print('Commande ', cmd, ' est servie au client')
        
        

def fonc_affichage():
    effacer_ecran()
    move_to(0,0)
    while True:    
        for i in range(17):
            move_to(i,0)
            print(' '*100)
        move_to(0,0)
        for i in range(len(serveurs)):
            print('Le serveur ', i+1, ' traite la commande', cmd_cuisine[i] ,'\n' )
        print('Les commandes clients en attente: ', L_affichage)  
        move_to(16,0)
        print('Nombre de commandes en attente: ', len(L_affichage))
        time.sleep(1)


#création des processus
clients=mp.Process(target=fonc_clients)
major_dHomme=mp.Process(target=fonc_affichage)
for i in range(5):
    serveurs.append(mp.Process(target=fonc_serveurs, args=(i,)))

#démarrage des processus
clients.start()
for i in range(5):
    serveurs[i].start()
major_dHomme.start()


for i in range(5):
    serveurs[i].join()
clients.join()








