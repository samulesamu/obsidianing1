---
tags:
  - net1/cours
---

un réseau informatique désigne des appareils informatiques qui peuvent échanger des données utilisant un système de règles qui sont appelés protocoles pour transmettre des informations sans fil

classer les réseaux: 

- réseaux privés internet 
- réseaux public internet
- réseaux privés externes extranet

- PAN : personal area network (entre 2 appareils)
- LAN : local area network (groupe de machine)
- MAN : connexion entre réseaux lan
- WAN wilde area network  interconnexion au niveau national
- GAN Globalk area network

topologie :

bus :
	- unidirectionnel
	- procédure mac obligatoire
	- pas robuste, si une machine crashe tout crash
anneau :
- unidirectionnel
- failure sur un noeud nique tout
- pas cher à installer
étoile :
- très utilisé
- noeud central
- facile à installer 
- si un noeud plante seul son lien sera affecté
arbre :
- flux hiérarchique
- hubs nécessaire
- ajouter des devices nécessite de modifier des hubs
- network peut être isolé et prioriser différents ordis

normes iso/osi
pbtique : comment harmoniser les connexions

iso : plus grande organisation de normalisation non gouvernementale

ITU

IEEE :


ITEF : internet engineering task force
organisation de normalisation d’internet

modèle iso/osi :

plusieurs couches (7) : 
application ;

la dernière est la plus proche de l’utilisateur interface utilisateur machine utilise plusieurs protocoles : 
DHCP, DNS, FTP…
présentation :
responsable de l’encodage des données, de la compression du chiffrement et déchiffrement 
sessioon : 
responsable de l’authentification et de la synchronisation des communications 
plusieurs utilisateurs peuvent communioquer avec la même application
transport :

moulte moyens de transporter un message
resize data pour la transporter
port managment
TCP, UDP
network :
défini un système d’addressage
sélectionne uin chemin pour le traffic
liaison :

routage des données entre les noeuds d’un réseau local
détection et controle des collision
ex :  ethernet PPP hdlc
physique :

conversion de bits en signaux électriques ou physiques