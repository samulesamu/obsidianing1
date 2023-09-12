---
tags:
  - intg/cours
---
pour contrôle : application directe, def exacte intg

eval formative : jeudi à dimanche midi 
éval sommative : 11/09 lundi 

## révision


intégrale généralisé : borne indéfinie

$$
-\frac{1}{x}
$$



$\int _{0}^{1} \frac{1}{t^{\alpha}} \, dt$ converge ssi $\alpha<1$

$\int _{1}^{+\infty} \frac{1}{t^{\alpha}} \, dt$ converge ssi $\alpha>1$


> [!demo]
 $$ \int _{1}^{A} t^{-\alpha}=\left[ \frac{t^{1-\alpha}}{1-\alpha} \right]_{1}^{A}dt, \text{ si }\alpha \neq 1\, $$
 $$=\frac{A^{1-\alpha}}{1-\alpha}-\frac{1}{1-\alpha} = \frac{A^{1-\alpha}-1}{1-\alpha}$$
 si $a<1$, alors $\int _{1}^{+\infty}t^{-\alpha}=+\infty \, dx$
 si $\alpha>1$, alors $\int  _{1}^{+\infty}t^{-\alpha} \, dt=\frac{1}{\alpha-1}$


> [!info]
> soit $\alpha\in \mathbb{R}$
> $\int _{0}^{+\infty} e^{\alpha t} \, dt$ converge ssi $\alpha<0$
> $\int _{-\infty}^{0} e^{\alpha t} \, dt$ converge ssi $\alpha>0$ 



$\int _{a}^{b} f(t) \, dt$ converge $\Leftrightarrow$ $f(t)$ est majorée


$$
\text{ si } f \text{ et } g \text{ sont positives sur } [a,b[ \text{ et } 0\leq f\leq g \text{ sur } [a,b[
$$
$$
\int _{a}^{b} g(t) \, dt \text{ converge} \implies \int _{a} ^{b}f(t)\, dt \text{ converge } 
$$


en utilisant la majoration


- si $f$ et $g$ sont positives sur $[a,b[$  et $f=_{b} O(g) \text{ ou } f=_{b} o(g)$

$$
\int _{a}^{b}g(t) \, dt converge\implies \int _{a}^{b}f(t) \, dt \text{ converge}  
$$

- si $f\sim_{b} g$ 


$$
\int _{a}^{b}g(t) \, dt \;converge\Leftrightarrow \int _{a}^{b}f(t) \, dt \text{ converge}  
$$



nature de $\int _{0}^{1}\ln(t) \, dt$


$f(t)=\ln(t)$
$g(t)= \frac{1}{t^{\alpha}}$

$$
\frac{f(t)}{g(t)}=t^{\alpha}\ln(t) \xrightarrow[t\to0]{}\alpha>0
$$


lorsque $\alpha>0$, on a $f(t)= o\left( \frac{1}{t^{\alpha}} \right)$ on pose $\alpha= \frac{1}{2}$ on a $f(t)=o\left( \frac{1}{\sqrt{ t }}  \right)$ et $\int _{0}^{1} \frac{dt}{\sqrt{ t }} \, dt$ est convergenter donc $\int _{0}^{1}f(t) \, dt$ est convergente par comparaison


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

$\vec v\binom{1}{1}\\Leftrightarrow  \frac{\vec u}{\|\vec u\|}$


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

2 variables

$$
f(x,y)=f(x_{0},y_{0})+(x-x_{0})\frac{ \partial f }{ \partial x } (x_{0},y_{0})+(y-y_{0})\frac{ \partial f }{ \partial y } (x_{0},y_{0})+$$$$\frac{(x-x_{0})^{2}}{2} \frac{ \partial^{2} f }{ \partial x^{2} } (x_{0},y_{0})+ \frac{(y-y_{0})^{2}}{2}\frac{ \partial^{2} f }{ \partial y^{2} }(x_{0,y_{0}}) 

+2\times \frac{(x-x_{0})(y-y_{0})}{2}
$$
