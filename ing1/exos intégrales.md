---
tags:
  - fonctionplv/exos
---


## ex 1

$$
\begin{align}
\int _{2}^{2e}\int _{1}^{e}2xy \, dx \, dy &=\int _{2}^{2e}[x^{2}y]_{1}^{e} \, dx  \\
&=\int _{2}^{2e}(e^{2}-1)y \, dy \\
&= (e^{2}-1)\int _{2}^{2e}y \, dy  \\
&= (e^{2}-1)\left[ \frac{y^{2}}{2} \right]_{2}^{2e} \\
&= (e^{2}-1) (2e^{2}-1) \\
&=2(e^{2}-1)^{2}
\end{align}
$$


$$
\begin{align}
\int _{0}^{1}\int _{1}^{2}ye^{xy} \, dx  \, dy &= \int _{0}^{1}[e^{xy}]_{1}^{2} \, dy \\
&=\int _{0}^{1}(e^{2y}-e^{y}) \, dy \\
&= \left[ e^{\frac{2y}{2}}-e^{y} \right]_{0}^{1} \\
&=\frac{e^{2}}{2}-e^{ 1 }-\frac{1}{2}+1 \\
&= \frac{e^{2}-2e-1+2}{2} \\
&= e\left( \frac{e}{2}-1 \right) +\frac{1}{2} 
 
\end{align}
$$


intégration d’un cercle


$A=\{ (x,y)\in \mathbb{R}^{2}; x^{2}+y^{2}\leq R^{2} \}$
$$
\begin{align}
\begin{cases}
-R\leq x\leq R \\
0\leq y^{2}\leq R^{2}-x^{2}
\end{cases}\begin{cases}
-R\leq x\leq R \\
-\sqrt{ R^{2}-x^{2} }\leq y\leq \sqrt{ R^{2}-x^{2} }
\end{cases}
\end{align}
$$

$$
\begin{align}
\iint_{A}1dxdy&= \int _{-R}^{R}\left( \int _{-\sqrt{ R^{2}-x^{2} }}^{\sqrt{ R^{2}-x^{2} }} 1\, dy  \right) \, dx \\
&= \int _{-R}^{R} 2\sqrt{ R^{2}-x^{2} } \, dx  \\
&= 2R\int _{-R}^{R}\sqrt{ 1-\frac{x^{2}}{R^{2}} } \, dx \\
\text{ changement de variable } y=\frac{x}{R}\implies \begin{matrix}
dy=\frac{dx}{R} \\
dx=Rdy
\end{matrix}  &= 2R\int _{-1}^{ 1} \sqrt{ 1-y^{2} }Rdy \,  \\
&=4R^{2}\int _{0}^{1}\sqrt{ 1-y^{2} } \, dy \\
\text{changement de variable } y=\cos(x)\implies \begin{matrix}
dy=-\sin(u)du
\end{matrix}&= 4R^{2} \int _{\frac{\pi}{2}}^{0}\sqrt{ 1-\cos ^{2}(u) }\times -\sin(u) \, du \\
&=4R^{2}\int _{0}^{\frac{\pi}{2}}\sqrt{ \sin ^{2}(u) }\sin(u) \, du \\
&=4R^{2}\int _{0}^{\frac{\pi}{2}}\sin ^{2} (u)\, du \\
&=   4R^{2}\int _{0}^{\frac{\pi}{2}}\left( \frac{1}{2}-\cos(2u) \right) \, du  \\
&=4R^{2}\times \frac{\pi}{4}-4R^{2}\left[ \frac{\sin(2u)}{2} \right]_{0}^{\frac{\pi}{2}} \\
&=\pi R^{2}
\end{align}
$$




$$
\begin{cases}
x=R\cos(\theta) \\
y=R\sin(\theta)
\end{cases}
$$
$\cos ^{2}(\theta)+\sin ^{2}(\theta)=1$ donc $x^{2}+y^{2}=1$

$A=\{ (x,y); x^{2}+y^{2}\leq R^{2} \}, R$ fixé

changement de variable : $\begin{cases}x=r\cos\theta\\y=r\sin\theta\end{cases}\,r$ variable 

$$
A=\{ (r,0), \begin{matrix}
0\leq r\leq R \\
0\leq\theta\leq2\pi
\end{matrix} \}
$$
>[!property]
>$\iint_{A}f(x,y)dxdy=\iint_{A'}f(r,\theta)\det(J(r,\theta))d^{\theta}$
>avec $J(r,\theta)= \begin{pmatrix}\frac{ \partial x }{ \partial r } & \frac{ \partial x }{ \partial \theta }\\ \frac{ \partial y }{ \partial r } & \frac{ \partial y }{ \partial \theta }\end{pmatrix}$


donc 
$$
J=\begin{pmatrix}
\cos(\theta) & -r\sin(\theta) \\
\sin(\theta) & r\cos(\theta)
\end{pmatrix}
$$
$$
\det(J)=r\cos ^{2}(\theta)+r\sin ^{2}(\theta)=r
$$
donc dans le  cadre d’un changement de variable en coordonnées polaires $dxdy=rd rd\theta$
$$
\begin{align}
\iint_{A} 1dxdy&= \int _{0}^{2\pi }\int _{0}^{R}r \, dr  \, d\theta  \\
&=\int _{0}^{2\pi}\left[ \frac{r^{2}}{2} \right]_{0}^{R} \, d\theta \\
&=2\pi \times \frac{R^{2}}{2} \\
&= \pi R^{2}+** 
\end{align}
$$


## ex 11

$$
A: \begin{cases}
0\leq r\leq1 \\
\frac{\pi}{4}\leq0\leq \frac{3\pi}{4}
\end{cases}


$$
entre $\frac{\pi}{4}$ et $\frac{3\pi}{4}$

![[Pasted image 20230914102848.png]]


$$
\begin{align}
\int _{\frac{\pi}{4}}^{\frac{3\pi}{4}}\int _{0}^{1}r \, dr  \, d\theta&=\int _{\frac{\pi}{4}}^{\frac{3\pi}{4}} \frac{1}{2} \, d\theta \\
&=\frac{\pi}{4}  
\end{align}
$$

ex 3 
$$\int _{0}^{+\infty}\int _{e^{-2x}}^{e^{ -x }}1 \, dy \, dx$$


$$
\begin{cases}
x\geq0 \\
e^{-2x}\leq y\leq e^{ -x }
\end{cases}
$$


![[Pasted image 20230914110131.png]]
$$
\begin{align}
A&=\int _{0}^{+\infty}(e^{-x}-e^{-2x}) \, dx  \\
&=[-e^{-x}]_{0}^{+\infty}-\left[ -\frac{e^{-2x}}{2} \right]_{0}^{+\infty } \\
&=1-\frac{1}{2} \\
&= \frac{1}{2}
\end{align}
$$


## ex 4


$$
\int _{0}^{1}\int _{x^{3}}^{x}1 \, dy  \, dx 
$$


domaine :
$$
\begin{cases}
0\leq x\leq1 \\
x^{3}\leq y\leq x
\end{cases}
$$
![[Pasted image 20230914110348.png]]



$$
\begin{align}
\int _{0}^{1}\int _{x^{3}}^{x}1 \, dy  \, dx &= \int _{0}^{1}(x-x^{3}) \, dx \\
&= \left[ \frac{x^{2}}{2}-\frac{x^{4}}{4} \right]_{0}^{1} \\
&=\frac{1}{4} 
\end{align}
$$

* $\begin{cases}0\leq x\leq1\\x^{3}\leq y\leq x\end{cases}$

$y\leq x$ et $y\leq x^{3}$


donc 
$$
\begin{cases}
y\leq x\leq \sqrt[3]{ y } \\
0\leq y\leq1
\end{cases}
$$

$$
\begin{align}
\int _{0}^{1}\left( \int _{y}^{\sqrt[3]{ y }} \, dx  \right) \, dy &= \int _{0}^{1}(\sqrt[3]{ y }-y) \, dy \\
&= \int _{0}^{1}\left( (y)^{\frac{1}{3}}-y \right) \, dy \\
&= \left[ \frac{y^{\frac{4}{3}}}{\frac{4}{3}}- \frac{y^{2}}{2} \right]_{0}^{1} \\
&= \frac{3}{4}-\frac{1}{2} \\
&= \frac{1}{4}  
\end{align}
$$
## exo slides

$$
\iint_{\mathcal D} f(x,y)dxdy
$$

$$
f(x,y)= \frac{1}{(x^{2}+y^{2})^{\frac{3}{2}}}
$$
or $x^{2}+y^{2}=r^{2}$ lorsque $x=r\cos(\theta)$ $y=r\sin\theta$

$$
\begin{align}
&= \int _{0}^{\frac{\pi}{4}} \int  _{1}^{2} \frac{1}{(r^{2})^{\frac{3}{2}}} \, dr  \, d\theta \\
&= \int _{0}^{\frac{\pi}{4}} \left[ -\frac{1}{r} \right]_{1}^{2} \, d\theta \\
&= \frac{\pi}{4}\times \frac{1}{2} \\
&= \frac{\pi}{8} 
\end{align}
$$



$g=\int _{0}^{+\infty}e^{-x^{2}} \, dx$


on calcul :

$$
\begin{align}
g^{2}&=\int _{0}^{+\infty}e^{-x^{2}} \, dx\times \int _{0}^{+\infty}y^{2} \, dy \\
&=\int _{0}^{+\infty}\left( \int _{0}^{+\infty}e^{-(x^{2}+y^{2})} \, dx  \right) \, dy 
\end{align}
$$

$\text{ changement polaire : } \begin{cases}x=r\cos(\theta) \\y=r\sin(\theta)\end{cases}$  et $\begin{cases}0\leq r\leq+\infty\\0\leq\theta\leq \frac{\pi}{2}\end{cases}$


$$
\begin{align}
g^{2}&=\int _{0}^{\frac{\pi}{2}}\int _{0}^{+\infty}e^{-r^{2}}r \, dr  \, d\theta \\
&= \int _{0}^{\frac{\pi}{2}}\left[ -\frac{e^{-r^{2}}}{2} \right]_{0}^{+\infty} \, d\theta \\
&= \frac{\pi}{4}   
\end{align}
$$

$g= \frac{\sqrt{ \pi }}{2}$
$$
\begin{align}

\end{align}
$$


---

$$
I=\int _{0}^{1}\int _{0}^{1}(x+2y)(2x+y) \, dy  \, dx

$$

$$
\begin{cases}
u=x+2y \\
v= 2x+y
\end{cases}
$$

$$
J(u,v)=\begin{pmatrix}
\frac{ \partial x }{ \partial u }  & \frac{ \partial x }{ \partial v }  \\
\frac{ \partial y }{ \partial u }  & \frac{ \partial y }{ \partial v } 
\end{pmatrix}
$$$$
\begin{cases}
2u=2x+4y \\
v=2x+y
\end{cases}\implies \begin{cases}
3y=3u-v \\
x=u-2y
\end{cases}\implies \begin{cases}
g=\frac{2}{3}u-\frac{1}{3}y \\
x= - \frac{u}{3}+\frac{2}{3}v
\end{cases}
$$

$$
J(u,v)= \begin{pmatrix}
-\frac{1}{3} & \frac{2}{3} \\
\frac{2}{3} & -\frac{1}{3}
\end{pmatrix}
$$

$\det(J(u,v))= \frac{1}{9}-\frac{4}{9}=-\frac{1}{3}$
donc $dxdy= |-\frac{1}{3}|dudv$


on a donc
$$
x\begin{cases}
0\leq u \leq3 \\
0\leq v\leq3
\end{cases}
$$
$$
\begin{align}
I&=\int _{0}^{3}\int _{0}^{3}uv\times\left( -\frac{1}{3} \right) \, du  \, dv \\
&=-\frac{1}{3} \int _{0}^{3}\left[ \frac{u^{2}}{2}v \right]_{0}^{3} \, dv \\
&= \frac{1}{3}\int _{0}^{3} \frac{9}{2}v \, dx  \\
&= \frac{1}{3}\times \frac{9}{2} \times \frac{9}{2} \\
&= \frac{27}{4}
\end{align}
$$


---

## exo 4

$$
\int _{-1}^{1}\int _{x^{2}-1}^{1-x^{2}} 1\, dy  \, dx 
$$

domaine : 
$$
\begin{cases}
x^{2}-1\leq y\leq1-x^{2} \\
-1\leq x\leq1
\end{cases}
$$

![[Pasted image 20230919154402.png]]



$$
\int _{-1}^{1}\int ^{1-x^{2}}_{x^{2}-1} \, dy  \, dx =2\int _{-1}^{1} (\dots)dx \, dy 
$$

$$
\begin{align}
&=\int _{-1}^{1}[(1-x^{2})-(x^{2}-1)] \, dx \\
&= \int _{-1}^{1}(2x-2x^{2}) \, dx \\
&=4-2\int _{-1}^{1}x^{2} \, dx  \\
&=4 -\frac{2}{3}\times 2 \\
&= \frac{8}{3}  
\end{align}
$$


volume d’un tétraèdre


$0\leq x\leq1$
$0\leq y\leq 1-x$
$0\leq z\leq 1-(x+y)$

$$
\int _{0}^{1}\int _{0}^{1-x}\int _{0}^{1-x-y} \, dz  \, dy  \, dx=\int _{0}^{1}\int _{0}^{1-x}1-x-y \, dy  \, dx  
$$

$$
\begin{align}
&=\int _{0}^{1}\left[ y-xy-\frac{y^{2}}{2} \right] _{0}^{1-x}, dx  \\
&=\int \text{ en fAit blc du calcul} \, dx 
\end{align}
$$
---

application camembert

rayon 6m
hauteur 4cm
12 parts égales
densité 1g/cm$^{3}$


$$
\iiint_{t}
$$

domaine :
$$
\begin{cases}
0\leq r\leq6 \\
0\leq\theta\leq \frac{\pi}{6} \\
0\leq z\leq4
\end{cases}
$$


$$
\begin{align}
\int _{0}^{4}\int _{0}^{\frac{\pi}{6}}\int _{0}^{6}1 \, dr  \, d\theta  \, dz= \frac{18\pi}{6}\times4\approx30 
\end{align}
$$




exemple! :

$$
\begin{cases}
x=r\cos\theta \sin\varphi \\
y=r\sin\theta \sin\varphi\\
z= r\cos \varphi
\end{cases}

$$

$$
J(r,\theta,\varphi)=\begin{pmatrix}
\frac{ \partial x }{ \partial r }  & \frac{ \partial x }{ \partial \theta } & \frac{ \partial x }{ \partial \varphi } \\
\frac{ \partial y }{ \partial r }  & \frac{ \partial y }{ \partial \theta } & \frac{ \partial y }{ \partial \varphi }   \\
\frac{ \partial z }{ \partial r }  & \frac{ \partial z }{ \partial \theta } & \frac{ \partial z }{ \partial \varphi }
\end{pmatrix}
$$

$$
=\begin{pmatrix}
\cos\theta \sin\varphi & -r\sin\theta \sin\varphi & r\cos\theta \cos\varphi \\
\sin\theta \sin\varphi & r\cos\theta \sin\varphi & r\sin\theta \cos\varphi \\
\cos\varphi & 0 & -r\sin
\end{pmatrix}
$$

$$
\det(J)=r^{2} \left|\begin{pmatrix}
\cos \theta \sin\varphi & -\sin\theta \sin\varphi & \cos\theta \cos\varphi \\
\sin\theta \sin\varphi & \cos\theta \sin\varphi & \sin\theta \cos\varphi \\
\cos\varphi & 0 & -\sin

\end{pmatrix}\right|
$$

$$
=r^{2}\sin\varphi\left|\begin{pmatrix}
\cos \theta & -\sin\theta & \cos\theta \cos\varphi \\
\sin\theta & \cos\theta  & \sin\theta \cos\varphi \\
\cos\varphi & 0 & -\sin

\end{pmatrix}\right|
$$

$$
r^{2}\sin\varphi(\cos\varphi|\begin{matrix}
-\sin\theta & \cos\theta \cos\varphi \\
\cos\theta & \sin\theta \cos\varphi
\end{matrix}|-\sin\varphi|\begin{matrix}
\cos\theta \sin\varphi & -\sin\theta \\
\sin\theta \sin \varphi & \cos\theta
\end{matrix}|)
$$

$$
\begin{align}
&=r\sin\varphi(\cos ^{2}\varphi|\begin{matrix}
-\sin\theta & \cos\theta \\
\cos\theta & \sin\theta
\end{matrix}|-\sin ^{2}\varphi|\begin{matrix}
\cos\theta & -\sin\theta \\
\sin\theta & \cos\theta
\end{matrix}|) \\
&= r^{2}\sin\varphi(\cos ^{2}\varphi \times(-1)-\sin ^{2}\varphi \times1) \\
&=-r^{2}\sin\varphi(=\det(J)) \\
 

\end{align}
$$
donc $dxdydz= r^{2}\sin\varphi d\theta dy$

---
soit $a,b,c\in \mathbb{R}^{3}$ 
on veut :

$$
\begin{align}
\left|\begin{matrix}
ab & ba & 0 \\
ac & 0 & ca \\
0 & bc & cb
\end{matrix}\right|&= abc\left|\begin{matrix}
b & a & 0 \\
c & 0 & a \\
0 & c & b
\end{matrix}\right| \\
&=ab\times ac\times bc\left|\begin{matrix}
1 & 1 & 0 \\
1 & 0 & 1 \\
0 & 1 & 1
\end{matrix}\right| \\
&=ab\times ac\times bc\left|\begin{matrix}
1 & 1 & 0 \\
0 & -1 & 1 \\
0 & 1 & 1
\end{matrix}\right| l2<-l2-l1 \\
&=(-1)\times1\times\left|\begin{matrix}
-1 & 1 \\
1 & 1
\end{matrix}\right| \\
&=-2
\end{align}
$$
det= $-2a^{2}b^{2}c^{2}$

---

$$
M= \begin{pmatrix}
a & a+c & c \\
0 & b & b \\
b & b & 0
\end{pmatrix}
$$

$c_{2}=c_{1}+c_{3}$ donc matrice pas inversible donc $\det(M)=0$

---
calculer l’aire d’une ellipse 
équation d’une ellipse :$\frac{x^{2}}{a^{2}}+\frac{y^{2}}{b^{2}}=1$

$$
\begin{cases}
x= at\cos(\theta) \\
y=bt\sin(\theta)
\end{cases} \text{ avec } \begin{matrix}
0\leq\theta\leq2\pi \\
0\leq t\leq1
\end{matrix}
$$

donc : $\begin{matrix}0\leq at\leq a\\0\leq bt\leq b\end{matrix}$





$$
J(t,\theta)= \begin{pmatrix}
\frac{ \partial x }{ \partial t }& \frac{ \partial x }{ \partial \theta } \\
\frac{ \partial y }{ \partial t } & \frac{ \partial y }{ \partial \rho t }  
\end{pmatrix}
$$

donc :

$$
\begin{align}
|\det(J(t,\theta))|&=\left|\left|\begin{matrix}
a\cos\theta & -at\sin\theta \\
b\sin\theta & bt\cos\theta
\end{matrix}\right|\right| \\
&= ab\left|\begin{matrix}
\cos\theta & -t\sin\theta \\
\sin\theta & t\cos\theta
\end{matrix}\right| \\
&=abt
\end{align}
$$

donc:
$$
\begin{align}
\iint_{\text{ellipse}}1dA&=\int _{0}^{2\pi}\left( \int _{0}^{1}abt \, dt  \right) \, d\theta \\
&=2\pi \times ab\times \frac{1}{2} \\
&= \pi ab 
\end{align}
$$



calculer le volume d’un ellipsoïde

$(a,b,c): \frac{x^{2}}{a^{2}}+\frac{y^{2}}{b^{2}}+\frac{z^{2}}{c^{2}}\leq1$

$$
\begin{cases}
x=at\cos(\theta)\sin(\varphi)  \\
y=bt\sin(\theta)\sin(\varphi) \\
z= ct\cos(\varphi)
\end{cases}\text{ avec } \begin{matrix}
0\leq t\leq1 \\
0\leq\theta\leq2\pi \\
0\leq\varphi\leq \pi
\end{matrix}
$$


$dxdydz=abct^{2}\sin(\varphi)dtd\theta d\varphi$

---
cylindrique $\begin{cases}x=r\cos(\theta)\\y=r\sin(\theta)\\z=z\end{cases}$

passer de coord cartésiennes à cylindrique 
- $(D,0,0)$ → (D,0,0)
- $(0,-D,0)\to\left( D, \frac{3\pi}{2},0 \right)$
- $(0,0,D)\to (0,\text{ ce qu'on veut},D)$


passer de coord cartésiennes à sphérique :
$\begin{cases}x=r\cos(\theta)\sin(\varphi)\\y=r\sin(\theta)\sin(\varphi)\\z=r\cos(\varphi)\end{cases}$
on sait que $x^{2}+y^{2}+z^{2}=r^{2}$
- $(D,0,0)\to\left( D,0, \frac{\pi}{2} \right)$
- $(0,-D,0)\to (D, \frac{\pi}{2},\frac{\pi}{2})$
- $(0,0,D)\to (D, \text{whatever},0)$

---

calcul de :

$$
\int _{0}^{2\pi}\int  _{0}^{\frac{1}{\sqrt{ 2 }}}\int _{r}^{\sqrt{ 1-r^{2} }} \, rdz \, dr \, d\theta 
$$

$$
\begin{align}
&=\int _{0}^{2\pi}\int _{0}^{\frac{1}{\sqrt{ 2 }}}r(\sqrt{ 1-r^{2} }-r) \, dr  \, d\theta  \\
&=\int _{0}^{2\pi}\int _{0}^{\frac{1}{\sqrt{ 2 }}} r\sqrt{ 1-r^{2} }-r^{2}  \, dr  \, d\theta \\
&\begin{cases}
x=\cos(\theta) \\
y=\sin(\theta) \\
z=z
\end{cases}dxdydz=dr d\theta dz \\
&\begin{matrix}
0\leq\theta\leq2\pi \\
0\leq r\leq \frac{1}{\sqrt{ 2 }} \\
r\leq z\leq \sqrt{ 1-x^{2} }
\end{matrix} \leftrightarrow  \begin{matrix}
 -\frac{1}{\sqrt{ 2 }}\leq x\leq\frac{1}{\sqrt{ 2 }} \\
-\frac{1}{\sqrt{ 2 }}\leq y\leq \frac{1}{\sqrt{ 2 }} \\
\sqrt{ x^{2}+y^{2} }\leq z\leq \sqrt{ 1-x^{2}+y^{2} }
\end{matrix} \\
\int _{0}^{2\pi}\int _{0}^{\frac{1}{\sqrt{ 2 }}}\int _{r}^{\sqrt{ 1-r^{2} }} \, rdz  \, dr  \, d\theta &=\int _{-\frac{1}{\sqrt{ 2 }}}^{\frac{1}{\sqrt{ 2 }}}\int _{-\frac{1}{\sqrt{ 2 }}}^{\frac{1}{\sqrt{ 2 }}}\int _{\sqrt{ x^{2}+y^{2} }}^{\sqrt{ 1-x^{2}+^{2} }} \,  dz  \, dy  \, dz 
\end{align} 
$$


mais en fait

$$
\begin{align}
&=\int _{0}^{2\pi}\int _{0}^{\frac{1}{\sqrt{ 2 }}}r(\sqrt{ 1-r^{2} }-r) \, dr  \, d\theta  \\
&=\int _{0}^{2\pi}\int _{0}^{\frac{1}{\sqrt{ 2 }}} r\sqrt{ 1-r^{2} }-r^{2}  \, dr  \, d\theta \\
&\int_{0}^{\frac{1}{\sqrt{ 2 }}}r\sqrt{ 1-r^{2} }   \, dr \\
&= \left[ \frac{(1-r^{2})^{\frac{3}{2}}}{-3} \right]_{0}^{\frac{1}{\sqrt{ 2 }}} \\
&=\frac{\frac{1}{2\sqrt{ 2 }}-1}{-3} \\
&= \frac{2\sqrt{ 2 -1}}{6\sqrt{2  }} \\
&\text{On a donc} \\
&\int _{0}^{2\pi}\int _{0}^{\frac{1}{\sqrt{ 2 }}} r\sqrt{ 1-r^{2} }-r^{2}  \, dr  \, d\theta  \\
&=2\pi \times \frac{2(\sqrt{ 2 }-1)}{6\sqrt{ 2 }} \\
&= \frac{2\pi}{3\sqrt{ 2 }}(\sqrt{ 2 }-1) 
\end{align}
$$