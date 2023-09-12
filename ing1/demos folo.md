
---
tags : folo/demos
---


$P= ||x|-|y||\leq|x-y|$
ce qui équivaut à $-|x-y|\leq |x|-|y|\leq|x-y|$ ou à 
$-|x-y|\leq|x|-|y| \wedge |x|-|y|\leq|x-y|$


- $|x|=|x+y-y|\underbrace{ \leq|x-y|+|y| }_{ \text{d'après inégalité triangulaire} }$ donc $|x|-|y|\leq|x-y|$
- $|y|=|x-x+y|\leq|x-x+y|\leq|x|+|y-x|\leq|x|+|x-y|$
	$-|x-y|\leq |x|-|y|$


$p = \sum_{i=0} n_{i}+10^{i}$
prouver $\forall n \in \mathbb{N}, n= 9q,q\in \mathbb{Z} \Leftrightarrow \sum_{i=0}n_{i}10^{i}\cong 0[9]$

$\sum_{i=0} n_{i}(10^{i}+1-1)\cong 0[9]$

$\sum_{i=0}n_{i}(10^{i}-1)+\sum_{i=0}n_{i}\cong0[9]$

or $\forall i \in \mathbb{N},10^{i}-1\cong0[9]$

donc $\sum_{i=0}n_{i}(10^{n}-1)+\sum_{i=0}n_{i}\cong 0[9]$
donc $\sum_{i=0}n_{i}\cong 0[9]$
donc la somme des chiffre de n est divisible par 9

soit $n\in \mathbb{N}$ tel que $\sum_{i=0}n_{i}\cong 0[9]$

$\forall i \in \mathbb{N},10^{i}-1\cong 0[9]$
donc $\sum_{i=0}n_{i}\cong \sum_{i=0}n_{i}(1+10^{i}-1)[9]+\cong n[9]$
donc $n\cong 0[9]$


soit $(x,y)\in \mathbb{R}^{2},xy\geq0$


$$
\begin{align}
(x-y)^{2}\geq0&\implies x^{2}-2xy+y^{2}\geq0 \\
&\implies x^{2}+2xy+y^{2}\geq4xy \\
&\implies(x+y)^{2}\geq4xy \\
&\implies (x+y)^{2}\geq2\sqrt{ xy }
\end{align}
$$
prouver que $\sqrt{ 2 }$ est irrationnel :

supposons $\sqrt{ 2 }$ rationnel 
alors $\exists(p,q)\in \mathbb{Z}^{2},pgcd(p,q)=1, \frac{p}{q}=\sqrt{ 2 }$

alors $$
\begin{align}
\frac{p}{q}=\sqrt{ 2 }&\implies \frac{p^{2}}{q^{2}}=2 \\
&\implies p^{2}=2q^{2}
\end{align}
$$

donc $p^{2}$ est pair donc $p$ aussi $\implies \exists k \in \mathbb{Z}, p=2k$



$$
\begin{align}
p=2q^{2}&\implies 4k^{2}=2q^{2} \\
&\implies 2k^{2}=q^{2}
\end{align}
$$


donc $pgcd(p,q)\geq2$ donc contradiction


$n^{2} \text{ pair}\implies n \text{ pair}$?


contraposée : $n^{2}$ impair $\implies n$ impaire

$\implies \exists k \in \mathbb{Z}, n=2k+1$
$\implies \exists k\in \mathbb{Z}, n^{2}t=4k^{2}+4k+1$
$\implies \exists k\in \mathbb{Z},n^{2}=2(2k^{2}+2k)+1$
donc $n^{2}$ est impair


preuve que $\forall n\in \mathbb{N}, \frac{n(n+1)}{2}\in \mathbb{N}$

si n pair :
soit $k\in \mathbb{Z}, n=2k$
$\frac{n(n+1)}{2}=k(n+1)$ produit d’entier donne un entier donc c’est un entier

- si n impair
$\exists k\in \mathbb{N},n=2k+1$

$\frac{n(n+1)}{2}= \frac{(2k+1)(n+1)}{2}$
$\implies \frac{n(n+1)}{2}=2k+1(k+1)\in \mathbb{N}$

