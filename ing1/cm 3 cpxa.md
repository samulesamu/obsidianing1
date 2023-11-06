---
tags:
  - cpxa/cours1
---


master theorem :
conditions :
	temps T(n) monotone
	p sous-problèmes de taille $\frac{a}{b}+O(1)$ avec $a\geq 1$ $b>1$
	$W(n)$ est polylogarithmique de base n
cas :
1. résolution a un cout prépondérant
$$
\exists \epsilon>0, W(n)\in On^{\log_{b}(a)-\epsilon}
$$
$$
T(n)\in \theta(n^{\log_{b}(a)})
$$
2.
découpage en combinaisons ont le même coût que la résolution de sous problèmes

$T(n)\in \theta(n^{\log_{n}(a)}\log(n))$
3. division/combinaison a un coût prépondérant
il existe $\epsilon>0, W(n)\in \Omega(n^{\log_{b}(a)+\epsilon})$ etv$\exists n_{0}>0,c<1$, $\forall n>n_{0}, aW\left( \frac{n}{b}\leq cW(n)  \right)$ alorss $T(n)\in \theta(W(n))$


exemple cas 2 : 

$$
T(n)= 4T\left( \frac{n}{2} \right)+\theta(n^{2})
$$
$$
n^{\log_{2}(4)}= n^{2}
$$

$$
T(n)\in \theta(n^{2}\log n)
$$

autre exemple

$$
U(n) = 7U\left( \frac{n}{2} \right)+\theta(n^{3})
$$
$n^{ \log_{b}a}= n^{\log_{2}7}$
$$
n^{3}\in \Omega(n^{\log_{2}7+0,1})
$$
$$
7\left( \frac{n}{2} \right)^{3}\leq cn^{3}
$$

$$
\frac{7}{8}n^{3}\leq cn^{3}
$$
donc $U_{n}\in \theta(n^{3})$

$$
V(n)= 4V\left( \frac{n}{3} \right)+\theta(n\log n)
$$

$$
n^{\log_{3}4}>1
$$

$$
n\log n\in O(n^{\log_{3}4+0.01})
$$

$$
V(n)\in \theta(n^{\log_{3}4})
$$
ne s’applique pas quand :

a < 1
$T(n)$ non monotone
$b$ non constant

exemple :

$$
T(n)=\begin{cases}
aT\left( \frac{n}{b}+O(1) \right) +\theta(n^{d}) \\
O(1) \text{ si } n < n_{0}
\end{cases}
$$


$\log_{b}a>d$ cas 1
$\log_{b}a=d$ cas 2
$\log_{b}a<d$ cas 3

intuition théorême :


$$
T(n)= aT\left( \frac{n}{b} \right) +W(n)
$$
nombre de feuilles de l’larbre des appels :


d$$
a^{ \log_{b}n}= n^{\log_{b}a}
$$
binarysearch : 
a=1 b = 2 $W(n)\in \theta(1)$

$\log_{2}(1)=0\in \theta(1)$

donc $T(n)\in \theta(\log(n))$
mergesort:
a=2 $b=2$ $W(n)= \theta(n)$

$\log_{2}(2)=1$ $T(n)= \theta(n\log(n))$

a= 8, $b=2$, $W(n)\in \theta(n^{2})$

$\log_{2}(8)= 3$

$$
n^{3}\in O(n^{3-0,5})
$$
$T(n)\in \theta(n^{2})$



résoudre :

$$
\begin{align}
T(n)&=2T\left( \frac{n}{2} \right)+\theta(n\log_{2}n) \\
&=2T\left( \frac{n}{2} \right)+cn\log_{2}n \\
&=2\left( 2T\left( \frac{n}{4}\right)+c \frac{n}{2}\log_{2} \left( \frac{n}{2} \right) \right) \\
&=4T\left( \frac{n}{4}+cn\left( \log_{2}n+\log_{2} \frac{n}{2} \right) \right) \\
&=4\left( 2T\left( \frac{n}{8} \right)+c \frac{n}{4}\log_{2}\left( \frac{n}{4} \right) \right)+cn\left( \log_{2}n+\log_{2}\left( \frac{n}{2} \right) \right) \\
&=8T\left( \frac{n}{8} \right)+cn\left( \log_{2}n+\log_{2}\left( \frac{n}{2} \right)+\log_{2} \left( \frac{n}{4} \right)\right) \\
&=2^{H}T\left( \frac{n}{2^{H}} \right)+cn\sum_{i=0}^{H-1}\log_{2}\left( \frac{n}{2^{i}} \right)
\end{align}
$$
$n=2^k$
$$
T(n)=\underbrace{  nT(1) }_{ \in \theta(n) }+\underbrace{ cn\sum_{i=0}^{\log_{2}n-1}\log\left( \frac{n}{2} \right) }_{ \in  \theta(?) }
$$

$$
\begin{align}
\sum_{i=0}^{\log_{2}(n-1)}\log_{2}\left( \frac{n}{2^{i}} \right)&= \sum_{i=0}^{\log_{2}n-1}\log_{2}(n)-\sum_{i=0}^{\log_{2}n-1}\log_{2}(2^{i}) \\
&= (\log_{2}(n))^{2}- \underbrace{ \sum_{i=0}^{\log_{2}n-1}i }_{ \frac{\log_{2}(n)(\log_{2}(n)-1)}{2} } \\
&= \frac{(\log_{2}(n))^{2}}{2}
\end{align}
$$