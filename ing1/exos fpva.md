---
tags: fonctionplv/exos
---


$f(x_{1},x_{2})=x_{1}^{2}-x_{2}^{2}$
$g(x_{1},x_{2})=2x_{1}x_{2}$

dessiner les lignes de niveaux $f(x_{1},x_{2})=12$ $g(x_{1},x_{2})=18$

on a donc :
$\frac{x_{1}^{2}}{\sqrt{ 12 }^{2}}-\frac{x_{2}}{\sqrt{ 12 }^{2}}=1$
![[Pasted image 20230905163804.png]]

$g(x_{1},x_{2})=16$



![[Pasted image 20230905164728.png]]



$$
\begin{align}
\begin{cases}
x_{1}^{2}-x_{2}^{2}=12 \\
x_{1}x_{2}=8
\end{cases}&\implies \begin{cases}
 l1 : \frac{64}{x_{2^{2}}}-x^{2}=12 \\
x_{1}=\frac{8}{x_{2}}
\end{cases} \\
&\implies \begin{cases}
 64-x_{2}^{4}=12x_{2}^{2} \\
x_{1}=\frac{8}{x_{2}}
\end{cases} \\
&\implies \begin{cases}
x_{2}^{4}+12x_{2}^{2}-64=0 \\
x_{21}=\frac{8}{x_{2}}
\end{cases} \\
&\implies \begin{cases}
 
\end{cases}
\end{align}
$$

On pose $X=x_{2}^{2}$

on a $X^{2}+12X-64=0$ $\Delta=144+256=400=20^{2}$

les solutions :
$$
X_{1}= \frac{-12-20}{2}=-16
\; X_{2}= \frac{-12+20}{2}=4
$$

les valeurs possibles pour $x_{2}$ sont : $x_{2}\in \{ -2,2 \}$ 

les valeurs possibles pour $\times_{1}$ sont $S=\{ 4 \}$


## ex 6


$\lim_{ (x,y) \to (0,0) } \frac{x^{2}-xy}{\sqrt{ x }-\sqrt{ y }}$

$$
\begin{align} 
\frac{x^{2}-xy}{\sqrt{ x }-\sqrt{ y }} &= \frac{x(x-y)}{\sqrt{ x }-\sqrt{ y }} \\
&= \frac{x(\sqrt{ x }^{2}-\sqrt{ y }^{2})}{\sqrt{ x }-\sqrt{ y }} \\
&= \frac{x(\sqrt{ x }-\sqrt{ y })(\sqrt{ x }+\sqrt{ y })}{\sqrt{ x }-\sqrt{ y }} \\
&=x(\sqrt{ x }+\sqrt{ y }) \\
&=x\sqrt{ x }+x\sqrt{ y } \\

\end{align}
$$

$$
\lim_{ (x,y) \to (0,0) } \frac{x^{2}-xy}{\sqrt{ x }-\sqrt{ y }}=0
$$


$$
\lim_{ (x,y,z) \to (0,0,0) } \frac{x^{2}-y^{2}-z^{2}}{x^{2}+y^{2}-z^{2}} 
$$

$$
\begin{align}
 \frac{x^{2}-y^{2}-z^{2}}{x^{2}+y^{2}-z^{2}} 
\end{align}
$$

intuition : pas de continuité
trouver 2 chemins différents
$x=y=0$ $z\to0$

$$
-\frac{z^{2}}{z^{2}}\to 1
$$

autre cheminh :

$x=z=0$

$y\to0$

$-\frac{y}{y}=-1$ donc pas continue

## ex 1.3


$f(x,y)=(x+3y)^{2}=x^{2}+6xy+9y^{2}$
$$
\frac{ \partial^{2} f }{ \partial x^{2} } \;\frac{ \partial^{2} f }{ \partial y^{2} } \; \frac{ \partial^{2} f }{ \partial (xy)^{2} } 
$$

$\partial^{2}_{xx} f(x,y)=2$

$\partial^{2}_{y} f(x,y)=18$

$\partial^{2}_{x6} f(x,y)=6$


$g(x,y)= e^{ax+by}$

$\partial g_{x^{2}}^{2}g(x,y)= a^{2}e^{ax+by}$
$\partial g_{y^{2}}^{2}g(x,y)= b^{2}e^{ax+by}$
$\partial g_{xy}^{2}g(x,y)= abe^{ax+by}$


$h(x,y)= \cos(ax)\sin(bg)$

$\partial^{2}_{xx}h(x,y)=a^{2}h(x,y)$

$\partial^{2}_{yy}h(x,y)=-b^{2}h(x,y)$
$\partial^{2}_{xy}h(x,y)=-ab\sin(ax)\cos(bx)$



## ex 1.7


$F(x,y,z)=x^{2}+y^{2}+z^{2}$
$P(1,2,1)$
surface : $p(x,y,z)=6$


$$
\frac{ \partial F }{ \partial x } (x,y,z)= 2x
$$


$\frac{ \partial F }{ \partial x }(1,2,1)=2$ 

$\frac{ \partial F }{ \partial y }(1,2,1)=4$
$\frac{ \partial F }{ \partial z }(1,2,1)=2$



$$
(x-1)\times2+(y-2)\times4+(z-1)\times2=0
$$

$$
2x+4y+2z-12=0
$$
$$
\vec N \begin{pmatrix}
2 \\
4 \\
2
\end{pmatrix}
$$


$z=\sqrt{ x^{2}+z^{2} } F(0,4,1)$
$F(x,y,z)=\sqrt{ x^{2}+y^{2} }-z$

$\frac{ \partial F }{ \partial x }(x,y,z)= \frac{2x}{2\sqrt{ x^{2}+y^{2} }}=\frac{x}{\sqrt{ x^{2}+y^{2} }}$ $\frac{ \partial F }{ \partial x }(x,y,z)=-1$

$\frac{ \partial F }{ \partial y }(x,y,z)= \frac{y}{\sqrt{ x^{2}+y^{2} }}$

$\frac{ \partial F }{ \partial x }(0,1,1)=0$; $\frac{ \partial F }{ \partial y }(0,1,1)=1;\frac{ \partial F }{ \partial z }(0,1,1)=-1$


$$
(x-0)\times0+(y-1)\times1+(z-1)\times(-1)=0
$$

$$
\vec N \begin{pmatrix}
0 \\
1 \\
-1
\end{pmatrix}
$$


## e 10



$<|>: \mathbb{R}^{2}\to\mathbb{R}$

$$
\begin{align}
<x|y>_{2} &= 2x_{1}y_{1} +3x_{2}y_{1}+3x_{1}y_{2}+5x_{2}y_{2}
\end{align}
$$

$$
<x|y>_{2} = x^{\perp}Q^{2}y
$$

où $x^{\perp}=(x_{1};x_{2)}$ et 
$$
Q\in Mat_{2,2}(\mathbb{R})
$$
$$
y=\begin{pmatrix}
y_{1} \\
y_{2}
\end{pmatrix}
$$
on pose $Q^{2}=\begin{pmatrix}2 & 3 \\3 & 5\end{pmatrix}$

$$
\begin{pmatrix}
2 & 3  \\
3 & 5
\end{pmatrix}\times \begin{pmatrix}
y_{1} \\
y_{2}
\end{pmatrix}= \begin{pmatrix}
2y_{1}+3y_{2} \\
3y_{1}+5y_{2}
\end{pmatrix}
$$

$$
\begin{pmatrix}
2y_{1}+3y_{2} \\
3y_{1}+5y_{2}
\end{pmatrix}\times(x_{1}x_{2})=2y_{1}x_{2}+3y_{1}x_{2}+3y_{1}x_{2}+5y_{2}x_{2}
$$



## $f(x,y)=x^{y}$



$$
\begin{align}
\frac{ \partial f }{ \partial x } f(x,y)&= yx^{y-1} \\
 f(x,y)&= e^{y\ln(x)} \\
\frac{ \partial f }{ \partial y } f(x,y)&= \ln(x)e^{y\ln(x)}=\ln(x)x^{y}
\end{align}
$$



## exo du prof



$f(x,y)= e^{x}+y^{2}-x+4$

- pts critiques

$\vec \nabla f(x,y)= \binom{e^{x}-1}{2y}$

$$
\begin{align}
\vec \nabla f(x,y)=\vec 0 &\Leftrightarrow \begin{cases}
e^{x}-1=0 \\
2y=0
\end{cases} \\
&\Leftrightarrow \begin{cases}
x=0 \\
y=0
\end{cases}
\end{align}
$$
$S=\{ (0,0) \}$
critère rst:

$r=\frac{ \partial^{2} f }{ \partial x^{2} }(0,0)=1$
$s= \frac{ \partial^{2} f }{ \partial xy }(0,0)=0$
$t=\frac{ \partial^{2} f }{ \partial y^{2} }(0,0)=2$


$s^{2}-rt=-2$

comme $r=1>0$ : min local en $(0,0)$

-----

## fin exo 10

vérifier que

1) $<x|x>\geq 0$

2) $<x+y|z> = <x|z>+<y|z>$ où $z=\binom{z_{1}}{z_{2}}$ 
3) $<\lambda x|y> = \lambda<x|y>$
4) $<x|y> = <y|x>$
démo :

4) ça se voit
3) $<\lambda x|y>= (\lambda x)^{T}Q^{2}y=\lambda<x|y>$ (linéarité)
2) $<x+y|z> = (x+y)^{T}Q^{2}z=(x^{T}+y^{T})Q^{2}z=x^{T}Q^{2}z+y^{T}Q^{2}z=<x|z>+<y|z>$ 
1) $<x|x> =x^{T}Q^{2}x= x^{T}Q^{t}Qx=(Qx)^{TQx}$ (Q est symétrique)
$= X^{t}X$ avec $Qx=X$
$=\|X\|^{2}=X^{2}_{1}+X^{2}_{2}\geq0$

## ex 20


*$f(x,y)=x^{2}-y^{2}$
$\vec u= \frac{1}{2} \binom{\sqrt{ 3 }}{2}$
$P=(1,0)$
$\mathcal D_{\vec u} f(P)=\vec \nabla f(P).\vec 0$
$\vec \nabla f(x,y)= \binom{2x}{2y}$


$$
\mathcal{D}_{y}f(1,0)= \binom{2}{0}\cdot \frac{1}{2} \binom{\sqrt{ 3 }}{2}=\sqrt{ 3 }
$$

2)


$g(x,y)=e^{x}\cos(y); \vec u = \binom{0}{1}; P=\left( 0, \frac{\pi}{2} \right)$

$\vec \nabla g(x,y)= \binom{e^{x}\cos(y)}{-e^{x}\sin(y)}= e^{x}\binom{\cos(y)}{-\sin(y)}$

$\vec \nabla g\left( 0, \frac{\pi}{2} \right)= e^{0}\binom{\cos\left( \frac{\pi}{2} \right)}{-\sin\left( \frac{\pi}{2} \right)}=\binom{0}{1}$



$\mathcal D_{\vec u} g\left( 0, \frac{\pi}{2}\right )= \binom{0}{-1}.\binom{0}{1}=1$


