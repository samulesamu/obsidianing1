---
tags:
  - sys/cm1
---
ring 0 : tous les jobs + de permissions
ring 3 : user mode - de permissions

pour accéder au ring 0 on utilise des interfaces “proposés” par le kernel

interruptions pour stopper exec :
- logiciel quand error dans le code (div par 0, seg fault,…)
- vient des périphériques, du réseau, …
kernel monolythique
microkernel
kernel modulaire (linux)
kernel hybride 

---
abi = document pour appeler fonction asm en c

elf = format de fichier pour organiser résultat de compilation → spécifique à une abi
- plein de segments
	- plein de sections
	
regroupement de différents sections → SEGMENT
file header : écris à la compilation pour donner des infos sur type de fichier
section utiles pour linkage 
section dans elf :
- .text = code
- .bss = uninintialized read-wxrite data
- .rodata initialized read-only data
- .data initilized read-write data6

got/plt pour gérer les offsets des segments

## Mémoire ~~vive~~
mmu : composante du processeur pour gérer la mémoire 

pagination :
si on accède à une page qui n’est pas alloué : si “faute” du système pas de segfault

pagination à  4 niveaux:

48 bits utilisés : 12 pour offset 32 pour page table
adresse logique subdivisée en plusieurs table
besoin de lire 4 tables pour chaque fois où on accède à de la mémoire : 5 accès mémoire

fragmentation → gaspillage espace mémoire


Transition Lookaside Buffer (TLB) :

translated adress sont cachés
géré par kernel
écrire dans CR3 invalide le TLB


## malloc

fonction pour allouer de la mémoire, alloue au  moins ce qu’on lui a demandé 
mmap : syscall qui retourne une page
nmmap : un peut pareil

décoder une adresse :
noter cr3 et adresse logique ($0x7F45)$ 
taille d’une page : $2^{12}$
12 bits pour of

## swapping 

process pour stocker des données à part.

page pas utilisée depuis longtemps: on l’envoie dans stockage secondaire et on la marque inutilisable.

swap out : mettre dans stockage secondaire
swap in: remettre dans ram

un-demand paging :

quand on accède à une page promise invalide :
si c’est le cas
- page fault
	- si page promise 
		- allouer une nouvelle frame
		- on recommence l’action
	- si swap out 
		- swap in
		- on recommence l’action

copy on write : 


mapper même pages à différents process et dupliquer si écriture

oom killer : tue les processus inutilles

aslr : randomiser emplacement des pages allouées pour plus de sécu
ksm : merge des pages dupliqués

shared memory :
deux processus partagent read-write page
## scheduling
pcb : struct de processus
contient 
- l’état
- les infos de scheduling
- memory mapping

processus init : 
premier process lancé
kernel panic si tué et pas de gardes
threads :
même code et fichier mais différends stack pc  

ipc (inter-process communication):
pipe : 
- ipc
- syscall pipe
- deux file descriptors read dans write
- named pipe pour fichiers qui ne sont pas parents
socket unix:
- ipc
- plus de deux processes peuvent communiquer  