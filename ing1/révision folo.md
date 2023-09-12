
---
tags: " #folo #révision" 
---

$$
\neg(a\implies b)= a\wedge \neg b
$$
$$
\neg (\neg(a\vee b)\implies c)
$$

$$
\neg (a\vee b)\wedge \neg b
$$

$$
\exists x\in E,\neg \exists y \in F, x=2y
$$


$$
\exists A\subseteq E,\exists x \in A,x \neg \in E 
$$


$$
\exists x,sb(x) \wedge\neg com(x)
$$


$$
\forall x,sb(x) \wedge dv(x)\implies mp(x)
$$

$$
\exists x,sb(x) \wedge \neg dv(x)
$$


comme $\implies$ est associatif à droite $A\implies B\implies A$ = $A\implies A$ ce qui est vrai

## récurrence


initialisation :

soit $n=1$ on a : 

$$
\sum_{i=1}^{1}i=1 
$$
or

$$
\frac{1(1+1)}{2}=1

$$
donc la propriété est vraie au rang 1

hérédité

supposons la propriété vraie au rang n on a alors :

$$
\sum_{i=1}^{n}i= \frac{(n(n+1))}{2}
$$
démontrons que la propriété est vraie au rang $n+1$

$$
\begin{align}
\sum_{i=1}^{n+1}i&=\sum_{i=1}^{n}i+(n+1) \\
&=\frac{(n(n+1))}{2}+n+1 \\
&=\frac{(n(n+1))+2(n+1)}{2} \\
&=\frac{(n+1)(n+2)}{2}
\end{align}
$$

la propriété est donc vraie au rang n+1
conclusion :

$$
\forall n\in \mathbb{N}\geq0  , \sum_{i=1}^{n}i= \frac{(n(n+1))}{2}
$$




initialisation :

$$
7^{0}-1=0
$$
or $0=0\times6$ donc la propriété est  vraie au rang 0

hérédité : 

soit $n\geq0$ supposons la propriété vraie au rang $n$

alors $7^n-1$ est divisible par 6

démontrons que la propriété est vraie au rang  $n+1$

soit $k\in \mathbb{N}$ alors si $7^n-1$ est divisible par 6, $\exists k,7^n-1=6k$


$$
\begin{align}
7^{n}-1&=6k \\
\Leftrightarrow  7^{n+1}-7&=42k \\
\Leftrightarrow 7^{n+1}-1&=42k-6 \\
&=6(7k-1)
\end{align}
$$


$7$ et $k$ appartenant tous les 2 à $\mathbb{N}$ leur produit y appartiendra  donc $7k-1$ y appartiendra aussi donc $7^{n+1}-1$ est dfivisible par 6

conclusion

$\forall n\geq0,7^n-1$ est divisible par 6


initialisation :

$\mid \sin(0n)\mid=0$ et $0\mid \sin(x)\mid=0$ donc la propriété est vraie au rang 0

hérédité:

supposons la propriété vraie au rang n, alors $\mid \sin(nx)\mid\leq n|\sin(x)\mid$


démontrons que la propriété est vraie au rang n+1




$$
\begin{align}
\sin((n+1)x)&=\sin(nx+x) \\
&=\sin(nx)\cos (x)+\sin(x)\cos(nx) \\

\end{align}
$$



initialisation:


$u_{0}=1=2^{1-1}$ donc la propriété est vraie au rang 0

hérédité:

supposons la propriété vraie au rang n, alors $u_{n}=2^{n-1}$

$$
\begin{align}
u_{n+1}&= \sum_{i=0}^{n}u_{n} \\
&=\sum_{i=0}^{n}2^{n-1} \\ 
&= 2^{n-1}+\sum_{i=0}^{n-1}2^{n-1}\\
&=2^{n-1}+u_{n} \\
&=2^{n-1}+2^{n-1} \\
&=2^{n}
\end{align}
$$

donc $u_{n+1}=2^n$

conclusion :

$\forall n\geq1, u_{n}=2^{n-1}$


initialisation :

soit $x+\frac{1}{x}\in \mathbb{Z}, x^{1}+\frac{1}{x^{1}}=x+\frac{1}{x}$ donc il appartien à $\mathbb{Z}$

hérédité:

supposons la propriété vraie au rang n alors : $x^{n}+\frac{1}{x^{n}}\in \mathbb{Z}$
démontrons que la propriété est vraie au rang $n+1$
$$
\begin{align}
x^{n+1}+ \frac{1}{x^{n+1}}&=x^{n}x+\frac{1}{x^{n}}\times \frac{1}{x} \\

\end{align}
$$




supposons que l’on peut ranger toutes les paires sans qu’il n’y en ait 2 dans un tiroir, cela implique qu’il y a autant de chaussettes que de tiroirs ce qui contredis la proposition de base.

supposons e n>0 est le carré d’un entier et que 2n est le carré d’un entier, il existe alors un entier k tel que $k\times k=2n\implies k\times k=2(x^{2})$ avec $x\in \mathbb{Z}$ et $x^{2}=n$  

# Logique propositionnelle et motifs de preuve
- [x] Regarder la [[folo_slides_1_handout.pdf]]
- [x] Regarder la [[folo_slides_2_handout.pdf]]
- [ ] Exercices de TD
> [!SUMMARY] Objectifs
>1. Compétences attendues
>2. Compétences attendues
## Manipulation de variables et de propositions
Deux objets mathématiques similaire se doivent d'avoir des noms similaires afin d'éviter des erreurs. Ainsi on choisira d'écrire $(x,y)\in\mathbb{R}^{2}, (n,m)\in\mathbb{N}^{2}$ au lieu de $(n,y)\in\mathbb{R}^{2}, (x,m)\in\mathbb{N}^{2}$
Une proposition est une affirmation à laquelle est associée une valeur vrai ou fausse. 
>[!INFO] Principe du tiers exclu
>Une proposition *P* est soit vraie, soit fausse.
## Connecteurs Logique
Les vérités mathématiques sont exprimés comme des **théorèmes**: si une hypothèse *P* est vraie alors on en déduit proposion *Q* également vraie. On l'écrit $P\Rightarrow Q$.
>[!WARNING] Attention
>*Q* vraie et *P* fausse ne contredit pas $P\Rightarrow Q$.
>$P\Rightarrow Q$ est une relation contractuelle, ainsi *P* n'a pas besoin d'être vraie pour que *Q* le soit. De plus, *P* ne cause pas *Q*.
>Si *P* vraie **et** $P\Rightarrow Q$ est vraie **alors** *Q* est vraie.

>[!SUMMARY] Raisonnement permettant de prouver que $P\Rightarrow Q$ est vraie.
>Si *P* vraie ...
> - **Rappel des définitions** Expression de *P* de manière détaillé en exprimant ses défitions explicites
> - **Écrire des propriétés communes** Est-ce-que l'on peut penser à des conséquences immédiate de *P*
> 
>... alors *Q* est vraie.

Soient 2 propositions *P* et *Q*, $P\lor Q$ permet d'exprimet *P vraie* **ou** *Q vraie*.
>[!WARNING] Attention
>Il ne s'agit pas d'un 'ou' français classique. Il se traduit par 'au moins un des deux'.
>Le 'ou' français est appelé *ou exclusif* ou *XOR* et permet d'exprimer *l'un ou l'autre, mais pas les deux*

>[!SUMMARY] Raisonnement permettant de prouver que $P\Rightarrow (Q\lor R)$ est vraie.
>Si *P* vraie ...
> - **On a une disjonction** *Q* peut être vraie ou fausse, l'important est que $(Q\lor R)$ soit vraie.
> 1. **On suppose Q vraie**
> Alors $(Q\lor R)$ est forcément vraie.
> 2. **On suppose Q faux** 
> ... alors *R* est vraie.

>[!SUMMARY] Raisonnement permettant de prouver que $(P\lor Q)\Rightarrow R$ est vraie.
>1. **Prouver que $P\Rightarrow R$ est vraie**
> Si *P* est vraie ...
> ... alors *R* est vraie
>2. **Prouver que $Q\Rightarrow R$ est vraie**
>Si *Q* est vraie ...
>... alors *R* est vraie.
>3. **Conclusion**

Pour exprimer $(P\Rightarrow Q) \land (Q\Rightarrow P)$ on utilise la relation *d'équivalence*, s'écriant $P\Leftrightarrow Q$.
>[!SUMMARY] Raisonnement permettant de prouver que $P\Leftrightarrow Q$ est vraie.
>1. **Prouver que $P\Rightarrow Q$ est vraie**
> Si *P* est vraie ...
> ... alors *Q* est vraie
>2. **Prouver que $Q\Rightarrow P$ est vraie**
>Si *Q* est vraie ...
>... alors *P* est vraie.
>3. **Conclusion**

Soit *P* une proposition, on appelle négation de *P*, notée $\overline{P}$, la proposition opposée. C'est-à-dire quand *P* est vraie alors $\overline{P}$ est fausse, et inversemement.
>[!INFO] Principe du tiers exclu
>Une proposition *P* est soit vraie, soit fausse.
>Cela revient à écrire: $P\lor\overline{P}$ est toujours vraie.

## Autres Preuves
>[!SUMMARY] Raisonnement par l'absurde
>Si *P* est vraie ...
>1. **On suppose $\overline{Q}$ est vraie**
>... on prouve quelquechose qui contredit *P* ou une autre vérité.
>
>Alors *Q* n'est pas faux et doit être vraie par principe du tiers exclu.

>[!SUMMARY] Raisonnement par contraposée $(P\Rightarrow Q)\Leftrightarrow (\overline{Q}\Rightarrow\overline{P})$
> Si $\overline{Q}$ est vraie ...
> ... alors $\overline{P}$ est vraie.
> D'où $P\Rightarrow Q$ est vraie.

>[!SUMMARY] Raisonnement au cas par cas
>1. **Prouver que $(P\land R)\Rightarrow Q$ est vraie**
> Si $P\land R$ est vraie ...
> ... alors *Q* est vraie
>2. **Prouver que $(P\land\overline{R})\Rightarrow Q$ est vraie**
>Si $P\land\overline{R}$ est vraie ...
>... alors *Q* est vraie.
>3. **Conclusion**

## Équivalences Logique Communes
$\overline{\overline{P}}\Leftrightarrow P$
$P\land(Q\lor R) \Leftrightarrow (P\land Q)\lor(P\land R)$
$P\lor(Q\land R) \Leftrightarrow (P\lor Q)\land(P\lor R)$
$\overline{(P\lor Q)} \Leftrightarrow \overline{P}\land\overline{Q}$
$\overline{(P\land Q)} \Leftrightarrow \overline{P}\lor\overline{Q}$
$P\Rightarrow Q \Leftrightarrow \overline{P}\lor Q$
$\overline{(P\Rightarrow Q)} \Leftrightarrow P\land \overline{Q}$
$(P\Rightarrow Q)\Leftrightarrow (\overline{Q}\Rightarrow\overline{P})$

## Comment approcher un problème ?
1. Expliciter toues les hypothèses et leurs définitions
2. Introduire des notations correctes et des nouvelles variables si besoin
3. Rechercher des propriétés pertinentes qui peuvent s'appliquer aux hyothèses
4. Choisir un raisonnement et expliciter chacunes de ses étapes
5. Trouver un schéma commun entre la conclusion et les étapes intermédiaires
