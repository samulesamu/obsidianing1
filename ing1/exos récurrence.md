---
tags:
  - folo/exos
---
exemple : 

prouver que $\forall n\in \mathbb{N}^{*},1+2+\dots+n= \frac{n(n+1)}{2}$


initialisation :

soit $n=1$ on a : 

$$
1=1
$$
or

$$
\frac{1(1+1)}{2}=1

$$
donc la propriété est vraie au rang 1

hérédité

supposons la propriété vraie au rang n on a alors :

$$
1+2+\dots+n= \frac{(n(n+1))}{2}
$$
démontrons que la propriété est vraie au rang $n+1$

$$
\begin{align}
1+2+\dots+n+n+1&=(1+2+\dots+n)+(n+1) \\
&=\frac{(n(n+1))}{2}+n+1 \\
&=\frac{(n(n+1))+2(n+1)}{2} \\
&=\frac{(n+1)(n+2)}{2}
\end{align}
$$

la propriété est donc vraie au rang n+1
conclusion :

$$
\forall n\in \mathbb{N}^{*}  ,1+\dots+n= \frac{(n(n+1))}{2}
$$

>[!info]
>ensemble bien ordonnée possède un min

prouver que $P(n_{0}) \wedge (\forall n \geq n_{0},P(n)\implies P(n+1)$ :
$H=\{ n>n_{0}| \neg P(n) \}$ $u\in H$ $m=min(H)$
supposons $P(n_{0}) \wedge (\forall n \geq n_{0},P(n) \wedge \neg P(n+1)$

$m>n_{0}$

,$P(m-1)$ vraie
on sait que $m-1\geq n_{0}$
donc $P(m-1)\implies P(m)$
donc $P(m)$ est vraie
or on a $P(m)$ fausse → contradiction


exemple 2 : $1^{2}+2^{2}+\dots+n^{2}= \frac{n(n+1)(n+2)}{6}$

- initialisation :
au rang 1 : 

$1^{2}=1$

$\frac{1(1+1)(1+2)}{6}=\frac{2\times3}{6}=1$

hérédité : 

supposons $P(n)$
donc $1^{2}+2^{2}+\dots+n^{2}= \frac{n(n+1)(2n+1)}{6}$
donc
$$
\begin{align}
P(n+1)&=1+2+\dots+n+n+1 \\
&= \frac{n(n+1)(2n+1)}{6}+n+1 \\
&= \frac{n(n+1)(2n+1)}{6}+ \frac{6(n+1)}{6} \\
&=\frac{(n+1)(n(2n+1))+6(n+1)}{6} \\
&= \frac{(n+1)}{6}(n+2)(2n+3)
\end{align}
$$

conclusion : vraie $\forall n \geq1$


ex 3:

prouver que $\forall n\in \mathbb{N}^{*},\forall x\in \mathbb{R},|\sin(n.x)|\leq n.|\sin(x)|$

nb $\sin(a+b)=\cos(a)\sin(b)+\sin(a)\cos(b)$

base : 
$n_{0}=1$

soit $x\in \mathbb{R}$
on a bien $|\sin(1x)|\leq1|\sin(x)|$

hérédité :

soit $n\geq1$ tq $P(n)$ vraie càd $\forall x\in \mathbb{R},|\sin(nx)|\leq n|\sin(x)|$
soit $x\in \mathbb{R}$
$$
\begin{align}
|\sin((n+1)x)&=|\sin(nx+x)| \\
&=|\sin(nx)\cos x+\cos(nx)\sin(x)| \\
&\leq|\sin(nx)\cos(x)|+|\sin(x)\cos(nx)| \\
&\leq |\underbrace{ \sin(nx) }_{ \substack {\leq n|\sin(x)| \\ \text{ car p(N)}} }|\underbrace{ |\cos(x) }_{ \leq1 }|+|\sin(x)| |\underbrace{ \cos(nx) }_{ \leq1 }| \\
&\leq n|\sin(x)|+|\sin(x)| \\
&\leq (n+1)|\sin(x)|
\end{align}
$$
donc $P(n+1)$ est vraie
ex :

initialisation :

$1\leq\left( \frac{5}{3} \right)^{0}\leq\left( \frac{5}{3} \right)^{1}$
$F_{0}$ et $F_{1}$ sont vraie

hérédité :

soit $n\geq0$ $P(n)$ et $P(n+1)$ sont vraie

alors $F_{n}\leq\left( \frac{5}{3} \right)^{n}$ et $F_{n+1}\leq (\frac{5}{3})^{n+1}$

$$
\begin{align}
F_{n+2}&=F_{n}+F_{n+1} \\
&\leq \left( \frac{5}{3} \right)^{n}+\left( \frac{5}{3} \right) ^{n+1} \text{ car }p(N),P(n+1) \\
&\leq\left( \frac{5}{3} \right)^{n} \frac{8}{3} \\
&\leq\left( \frac{5}{3} \right)^{n+2}
\end{align}
$$
donc $P(n+2)$ vraie
donc $\forall n \in \mathbb{N}, P(n)$ vraie

ex : 

prouver que pour tout entier $n\geq2$ n est décomposable en un produit de facteur premier

cas de base :

$2=2$ 
- 2 est premier

donc vrai

hérédité :

soit $n\geq2$ tq $\forall k\in \{ 2,\dots,n \}, p(k)$ est vrai montrer que n+1 peut être décomposé en produit de nombre premier

- si $n+1$ premier, il est déjà décomposé
- sinon, il existe $q\in \{ 2,\dots,n \}$ et $r\in \{ 2,\dots,n \}$ tq n+1=qr
par hypothèse de récurrence, $q=\prod_{i\geq1}p_{i}^{\alpha_{i}}$ avec $p_{i}$ premiers
$r=\prod_{i\geq1}p_{i}^{\beta_{i}}$
donc $qr=\prod_{i\geq1}p_{i}^{\alpha_{i}+\beta_{i}}$
donc $P(n+1)$ est vraie

donc $\forall n\geq2,P(n)$ est vraie


---

soit une partition $\mathcal B$ de E, on veut une relation binaire ntq $\equiv_{\mathcal B}$ est une relation d’équivalence et $\mathcal B=E /\equiv _{\mathcal B}$

soit $\equiv _{\mathcal B}$ la relation 



$$
x\equiv _{\mathcal B}y\Leftrightarrow  \forall F\in \mathcal B,x\in F\Leftrightarrow  y\in F
$$
$\forall F\in \mathcal B,x\in F\Leftrightarrow  y\in F \Leftrightarrow z\in F$


---
prouver que $\forall n\in \mathbb{N},n\geq8, \exists a,b\in \mathbb{N},n=3a+5b$

cas de base :

$$
n=8=3\times1+5\times1
$$
donc p(8)

$$
n=9=3\times3+0\times5
$$
donc p(9)


$$
n=10=0\times3+2\times5
$$
donc p(10)

hérédité :

doit $n\geq8$ et $p(n),p(n+1)$ et $p(n+2)$ on va montrer que $p(n+3)$

comme $p(n), \exists a,b\in \mathbb{N}, n=3a+5b$ 
$n+3=3a+5b+3=3(a+1)+5b$ donc $p(n+3)$

$$
\begin{align}

\end{align}
$$

conclusion, $\forall n\geq8$ $p(n)$