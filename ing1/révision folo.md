
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