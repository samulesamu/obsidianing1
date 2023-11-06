---
tags:
  - folo/cours
---
prouver $E,F$ équipotents $\Leftrightarrow car d(E)=car d(F)$ 
$\implies$
E et F équipotents ssi $card(E)=card(F)$

soient $E,F$ deux ensemble 
supposons F et E équipotents, alors
$\exists f:E \to F$ bijective

- si E non vide
alors existe  $n\in \mathbb{N}^{*}, \{ 1,\dots,n \}$ et E sont équipotents alors 
$\exists g:\{ 1,\dots,n \}\to E$ bijective
$f\circ g: \{ 1,\dots,n \}\to F$ est bijective car composition de bijection
donc $\{ 1,\dots,n \}$ et F sont équipotents donc $car d(E)=car d(F)$ 

- si $E=\emptyset$
comme E et F sont équipotents $car d(E)=car d(F)=0$

$\impliedby$

soit $E,F$ deux ensemble, $car d(E)=car d(F)=n$

si $n=0$

$E=F=\emptyset$

si $n>0$

$E$ et $\{ 1,\dots,n \}$ sont équipotents 

$f: E\to\{ 1,\dots,n \}$ bijective

$F$ et $\{ 1,\dots,n \}$ sont équipotents 

$f: F\to\{ 1,\dots,n \}$ bijective
donc  $g^{-1}\circ F : E\to F$ est une bijection donc E et F sont équipotents


## ex 1

![[Pasted image 20230918144314.png]]
soit $E= \{ 1,\dots,n \}$ et $F=\{ 1,\dots,m \}$
$\mathcal P(E\times F)= \{ (1,1),(1,\dots),(1,m)\}\cup\{(2,1),\dots,(2,n)\}\cup\{(n,1),(n,\dots),(n,m)  \}$
donc $\exists g: \{ (1,1),\dots,(1,m) \}\to \{ 1,\dots,m \}$ bijective donc $car d(E)=m$
donc $card(E\times F)=n\times m$


![[Pasted image 20230918154754.png]]

1. $2^{ 4}$
2. $\binom{4}{i}$
3. $\sum_{i=0}^{4}\binom{4}{i}$