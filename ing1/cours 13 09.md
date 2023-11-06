---
tags:
  - fonctionplv/cours
---
## intégrales doubles




- d’un pdv géométrique 

$$
\int \int _{R}f(x,y) \, dA 
$$
correspond au volume compris entre le plan $(x,y)$ et la surface d’équation $z=f(x,y)$ pour une région $R$ du plan $xy$


- on parle ici d’un volume algébrique qui peut être négatif, si autant au dessus qu’en dessous du plan xy, intégrale=0
- on peuut donc proposer la définition de l’intégrale double comme la somme des volumes
intégrale au sens de Riemann


$$
\iint_{R}f(x,y)dA= \lim_{\substack{ n \to +\infty \\ \Delta x\to0\\\Delta y\to0}}\sum_{i=0}^{n}f(x_{i},y_{i})dA 
$$

- linéarité :
$f,g$ deux fonctions $\alpha,\beta$ deux nombres

séparation : $R=S\cup T$ et $T\cap S=\emptyset$



$f(x,y)\geq g(x,y)$ Sur R

$$
\iint_{R}f(x,y)dA\geq \iint_{R}g(x,y)dA
$$





calcul pratique :

soit $\iint_{R}fdxdy$
$$
\int \left( \int f \, dx  \right) \, dy =\int \left( \int f \, dy  \right) \, dx 
$$
intégrale interne = tranche du volume correspondant à $\iint_{R}fdA$
ordre d’intégration a une signification technique importante exemple :

$\int _{0}^{1}\int _{0}^{1-x} \, dy \, dx= \int _{0}^{1}\left( \int _{0}^{1-x} \, dy \right) \, dx$( pas possible dans l’autre sens)


$$
\begin{align}
&=\int _{0}^{1}\left( \int _{0}^{1-x} \, dy  \right) \, dx \\
&=\int _{0}^{1}[y]_{0}^{1-x} \, dx  \\
&=\int (1-x) \, dx  \\
&= 1-\left[ \frac{x^{2}}{2} \right]_{0}^{1} \\
&=\frac{1}{2}
\end{align}
$$

autre exemple :

$$
\begin{align}
\iint_{R}fdA&= \int _{x=0}^{x=1}\left( \int _{y=0}^{y=2}(1+x^{2}+y^{2}) \, dy  \right) \, dx  \\
&=\int _{x=0}^{x=1}\left[ y+x^{2}y+\frac{y^{3}}{3} \right]_{y=0}^{y=2} \, dx \\
&=\int _{x=0}^{x=1}\left( 2+2x^{2}+\frac{8x}{3} \right) \, dx \\
&=\left[ 2x+\frac{2x^{3}}{3}+ \frac{8x}{3} \right]_{x=0}^{x=1} \\
&=\frac{16}{3} \\
&= \int _{y=0}^{y=2}\left( \int _{x=0}^{x=1}(1+x^{2}+y^{2}) \, dx  \right) \, dy \\
&=\int _{y=0}^{y=2}\left[ x+\frac{x^{3}}{3}++y^{2}x \right]_{0}^{1} \, dy \\
&=\int _{y=0}^{y=2}\left( \left( \frac{4}{ \\
3}+y^{2} \right)-0 \right) \, dy \\
&=\frac{4}{3}\times2 +\left[ \frac{y^{3}}{2} \right]_{0}^{2} \\
&=\frac{8}{3}+\frac{8}{3} \\
&=\frac{16}{3}     
\end{align}
$$

exemple :

$$
\begin{align}
\iint_{R}fdA&=\int _{0}^{2}\int _{x^{2}}^{2x}x^{3} \, dy  \, dx  \\
&=\int _{0}^{2}[x^{3}y]< \, dx  \\
&=\int _{0}^{3}(2x^{4}-x^{5}) \, dx \\
&=\left[ \frac{2}{5}x^{5}-\frac{x^{6}}{6} \right]_{0}^{2} \\
&=\frac{64}{5}- \frac{64}{6} \\
&= 64\times \frac{1}{30}  \\
&= \frac{32}{15}\approx 2 
\end{align}
$$



$$
\begin{align}
\int _{0}^{1}\int _{0}^{2}x^{2} \, dx  \, dy&=\int _{0}^{1} \left[ \frac{x^{3}}{3} \right]_{0}^{2} \, dy \\
&= \int _{0}^{1} \frac{8}{3} \, dy   \\
&=\frac{8}{3}
\end{align} 
$$

$$
\begin{align}
\int _{0}^{\frac{\pi}{2}}\left( \int _{0}^{\frac{\pi}{4}}\sin(x+y) \, dx  \right) \, dy &= \int _{0}^{\frac{\pi}{2}}\left[ -\cos(x+y) \right]_{0}^{\frac{\pi}{4}} \, dy \\
&= \int _{0}^{\frac{\pi}{2}} -\cos\left( \frac{\pi}{4}+y \right)+\cos(y)  \, dy \\
&=-\int _{0}^{\frac{\pi}{2}}\cos\left( y+\frac{\pi}{4} \right)+\int _{0}^{\frac{\pi}{2}}\cos(y)  \, dy \\
&=\left[ \sin\left( y+\frac{\pi}{4} \right) \right]_{0}^{\frac{\pi}{2}}+[\sin(y)]_{0}^{\frac{\pi}{2}} \\
&=\sin\left( \frac{3\pi}{4} \right)-\sin \left( \frac{\pi}{4} \right)+\sin\left( \frac{\pi}{2} \right)-\sin(0)=1   
\end{align}
$$



## changement de variables



>[!info]
> changement cylindrique
>![[Pasted image 20230914100920.png]]
>$$ \begin{cases}x=r\cos(\theta) \\y=r\sin(\theta)\\z=z
\end{cases}
> $$ 



regarder changement de variale sphérique

## gradient/dérivées directionnelles

$soit f: \mathbb{R}^{2}\to\mathbb{R}$ une fonction

def : gradient d’une fonction $f$ au point $(x,y)$ 

$\nabla f(x,y)= \begin{pmatrix}\frac{ \partial f }{ \partial x } (x,y) \\\frac{ \partial f }{ \partial y }(x,y)\end{pmatrix}$


def : dérivée directionnelle

soit $\vec u = u_{1}\vec e_{1}+u_{2}\vec e_{2}$ un vecteur de $\mathbb{R}$

- on impose : $\|\ u\|=1$ (vecteur unitaire)
- la dérivée directionnelle de $f$ contient la direction  $\vec u$ au point $P(x,y)$ est définie par 
- $$
\partial_{\vec u}f(x,y)= \frac{ \partial f }{ \partial x } (x,y)u_{1}+\frac{ \partial f }{ \partial y } (x,y)u_{2}
$$
remarque/exemple: 

$\vec u=\vec e_{1}=1\times\vec e_{1}+0\times\vec e_{2}$
$\partial_{\vec e_{1}}f(x,y)=\frac{ \partial f }{ \partial x }(x,y)$
$\partial_{\vec e_{2}}f(x,y)=\frac{ \partial f }{ \partial y }(x,y)$


### propriété

$$
\begin{align}
\partial f(x,y)&= \nabla f(x,y)\times\vec u \\
&= \begin{pmatrix}
\partial_{x}f(x,y) \\
\partial_{y}f(x,y) 
\end{pmatrix}\cdot \begin{pmatrix}
u_{1} \\
u_{2}
\end{pmatrix} \\
&= \partial_{x}f(x,y)u_{1}+\partial_{y}f(x,y)u_{2}
\end{align}
$$

- la direction $\vec  u$ (orthogonale à la ligne de niveau) correspond à la direction,
$\partial f(x_{0},y_{0})$


$c=f(x,y)$

$$
eq \tau:(x-x_{0})\frac{ \partial f }{ \partial x } (x_{0},y_{0})+(y-y_{0})\frac{ \partial f }{ \partial y } (x_{0},y_{0})=0 
$$

$$
\vec N \begin{pmatrix}
\frac{ \partial f }{ \partial x } (x_{0},y_{0}) \\
\frac{ \partial f }{ \partial y } (x_{0},y_{0})
\end{pmatrix} =\vec \nabla f(x_{0},y_{0})
$$


- la direction orthogonale à la tangente au point $P(x_{0},y_{0})$ de la ligne de niveau $f(x,y)=c$ est exactemen t celle du gradiant $\vec \nabla(x_{0},y_{0})$


- cette direction corespond à une valeur normale pour $|\partial \vec u f(x_{0},y_{0})|$
soit $\frac{\nabla f(x_{0},y_{0})}{\|f(x_{0},y_{0})\|}$
alors : 

$$
|\partial_{\vec u} f(x_{0},y_{0})|=|\partial_{\vec u} f(x_{0},y_{0 })|
$$




### exemple

$f(x,y)=xy^{2}$


$\vec u=  \frac{1}{\sqrt{ 2 }}\binom{1}{1}$

$P(1,1)$


$$
\partial_{\vec u} f(1,1) = ?
$$

$$
\vec \nabla f  (x,y)= \binom{y^{2}}{2xy}
$$

$$
\vec \nabla f(1,1)=\binom{1}{2}
$$


$$
\begin{align}

\partial_{\vec u}f(1,1)&= \vec \nabla f(1,1)\cdot \\
&=\frac{1}{\sqrt{ 2 }}\binom{1}{2} \cdot \binom{1}{1} = \frac{1}{\sqrt{ 2 }}(1+2)=\frac{3}{\sqrt{ 2 }}
\end{align}
$$


une dérivée directionnelle un scalaire $\in \mathbb{R}$

$\vec v\binom{1}{1}\Leftrightarrow  \frac{\vec u}{\|\vec u\|}$


## chainrule/ dérivées composées

#### chainrule 

1)  $h\to0$  
$$
\frac{f(a+h)-f(a)}{h}=f(a)
$$

$$
(a_{1},a_{2}) \; \vec v=(u{1},u_{2}) \lim_{ t \to 0 }  \frac{f((a_{1},a_{2}+t(u_{1},u_{1})-f(a_{1},a_{2})))}{t} 

$$


$$
= 
\frac{f\begin{pmatrix}
a_{1}+t \\
a_{2}
\end{pmatrix}-f\begin{pmatrix}
a_{1} \\
a_{2}
\end{pmatrix}}{t}
$$


- $f(g(x,y))$
$g: \mathbb{R}^{2}\to\mathbb{R}$
$f: \mathbb{R}\to\mathbb{R}$

rappel : $h_{1}$ et $h_{2}$ deux fonctions de $\mathbb{R}\to\mathbb{R}$
$(h_{1}\circ  h_{2} )(x)= (h_{1}(h_{2}))(x)=h_{2}'(x)h_{1}'(h_{2}(x))$

- $\partial_{x}(f(g(x,y)))= \partial _x g(x,y)f'(g(x,y))$

$\partial_{y}(f(g(x,y)))= \partial_{y}g(x,y)f'(g(x,y))$

### exemple
1.
- $\mathbb{R}^{2}\to\mathbb{R}$
$g(x,y)=x^{2}+y^{2}$


$\mathbb{R}\to\mathbb{R}$
$f(X)=\sin(X)$

- $\partial_{x}(f(g(x,y)))=2X\cos(x^{2}+y^{2})$


2.

$f(x(t),y(t))$




$$
f:\mathbb{R}^{2}\to\mathbb{R}: \begin{matrix}
x:\mathbb{R}\to\mathbb{R}\\ y: \mathbb{R}\to\mathbb{R}
\end{matrix}

$$

$$
df=\frac{ \partial f }{ \partial x } dx+\frac{ \partial f }{ \partial y } dy
$$


$$
\frac{df}{dt}=\frac{ \partial f }{ \partial x } \frac{dx}{dt}+\frac{ \partial f }{ \partial y }+\frac{dy}{dt}
$$
$$
f'(t)= \frac{ \partial f }{ \partial x } x'(t)+\frac{ \partial f }{ \partial y } y'(t)
$$
3.

$f(x(t,s),y(t,s))$


$df=\frac{ \partial f }{ \partial x }dx+\frac{ \partial f }{ \partial y }dy$ (différentielle)

$$
\frac{ \partial f }{ \partial t } (t,s)=\frac{ \partial f }{ \partial x } \frac{ \partial x }{ \partial t } +\frac{ \partial f }{ \partial y } \frac{ \partial y }{ \partial t } 
$$
$$
\frac{ \partial f }{ \partial s } (t,s)=\frac{ \partial f }{ \partial x } \frac{ \partial x }{ \partial s } +\frac{ \partial f }{ \partial y } \frac{ \partial y }{ \partial s } 
$$

$$
\frac{df}{dt}= \frac{ \partial f }{ \partial x } \frac{dx}{dt}+\frac{ \partial f }{ \partial y } \frac{dy}{dt}
$$

4.

$f:\mathbb{R}^{2}\to\mathbb{R}$
$f(x,y)=xy$

$x:\mathbb{R}^{2}\to\mathbb{R}$
$x(t,s)=t+s$
$y:\mathbb{R}^{2}\to\mathbb{R}$
$y(t,s)=t-s$

$$
\begin{align}

f(x(t,s),y(t,s))&= f(t+s,t-s) \\
&=(t+s)(t-s) \\
&=t^{2}-s^{2}
\end{align}
$$

$$
\begin{align}
\frac{ \partial f }{ \partial t } (t,s)&= y(t,s)\times1+x(t,s)\times1 \\
&= (t-s)+(t+s) \\
&=2t
\end{align}
$$


## étude d’extremum

$$
f:\Omega \subset \mathbb{R}^{2}\to\mathbb{R} \; (\Omega\text{= domaine de def})
$$

def : soit $(x,y)\in \Omega$

on sait que $(x_{0},y_{0})$ est un point critique/ stationnaire de $f$ ssi $\vec \nabla (x_{0},y_{0})=\vec 0= \binom{0}{0}$


> [!warning]
> diff entre 1d  $\Leftrightarrow$ et 2d (si, alors) 
> si $(x_{0},y_{0})$ est un extremum, alors $(x_{0},y_{0})$ est un  point critique (dérivées nulles)


> [!warning]
> warning au-dessus fonctionne que à l’intérieur du domaine (étude spécifique pour les bords)


1er temps :

recherche de point critique à l’intérieur

2eme temps :
étude des bords

* pt critique : $(x_{0},y_{0})$

1 variable :

$$
f(x)=f(x_{0})+(x-x_{0})f(x_{0})+ \frac{(x-x_{0})^{2}}{2}f'(x_{0})+o(x^{2})
$$
$$
f(x)-f(x_{0})= \frac{(x-x_{0})^{2}}{2}f''(x_{0})+o(x^{2})
$$

- si $f''(x_{0})>0$ alors $f(x)\geq f(x_{0})$ (minimum local)
- si $f''(x_{0})\leq 0$ alors $f(x)\leq f(x_{0})$ (maximum local)
