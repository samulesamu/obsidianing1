---
tags:
  - apxf/exos
---
soit $E\in \mathbb{R}_{e,v}$ on dit  que $\varphi$ est un produit scalaire sur E ssi $\varphi$ est forme bilinéaire symétrique définie positive 
- $\varphi$ est une application de de $E\times E\to\mathbb{R}$
- $\varphi$ est bilinéaire
	- $\varphi(\lambda x+\mu y, x')= \lambda\varphi(x,x')+\mu\varphi(x,y)$
	- $\varphi(x,\lambda x'+\mu y')=\lambda\varphi(x,x')+\mu\varphi(x,y')$
- $\varphi$ est symétrique $\forall(x,y)\in E\times E,\varphi(x,y)=\varphi(y,x)$
- $\varphi$  est positive : $\forall  x\in E, \varphi(x,x)\geq0$
- définie positive : $\varphi(x,x)=0\Leftrightarrow x=0_{E}$
---

$$
\forall (x,y)\in (\mathbb{R}^n)^{2}
$$

$$
x=(x_{1},x_{2},\dots,x_{n})\;y=(y_{1},\dots,y_{n})
$$
$$
\varphi:(x,y)\mapsto \sum_{i=1}^{n}x_{i}y_{i}
$$

- $\varphi$ est bien une application de $(\mathbb{R}^{n})^{2}\to\mathbb{R}$

- $\forall(x,y)\in (\mathbb{R}^{n})^{2}, \varphi(x,y)=\sum_{i=1}^{n}x_{i}y_{i}=\sum_{i=1}^{n}y_{i}x_{i}=\varphi(y,x)$
- $\forall(\lambda,\mu)\in (\mathbb{R}^{})^{2},\forall(x,y)\in (\mathbb{R}^{n})^{2},\forall(x',y')\in \mathbb{R}^{n})^{2}$
	- $\varphi(\lambda x+\mu y,x')=\sum(\lambda x_{i}+\mu y_{i}).x'=\lambda \sum x_{i}x_{i}'+\mu \sum y_{i}x_{i}'=\lambda\varphi(x,x')+\mu\varphi(y,x')$
$\varphi$ est linéaire à gauche  est comme c’est symétrique c’est linéaire à droite donc bilinéarité
$\forall(x)\in \mathbb{R}^{n},\varphi(x,x)\geq0$
$\forall(x)\in \mathbb{R}^{n},\varphi(x,x)=0\implies x=0_{\mathbb{R}^{n}}$

$$
\forall (f,g)\in (\mathcal C^0[a;b];\mathbb{R})^{2}
$$

- $\varphi(f,g)=\int _{a}^{b}f(t)g(t) \, dt$ est bien définie
- $\varphi(f,g)= \int _{a}^{b}f(t)g(t) \, dt=\int _{a}^ bg(t)f(t) \, dt=\varphi(g,f)$
- $\forall(f,g,h)\in \mathcal ((C^{0}[a;b],\mathbb{R}))^{3};\forall(\lambda,\mu)\in \mathbb{R}^{2}$
	- $\varphi(\lambda f+\mu g;h )=\int _{a}^{b}(\lambda f+\mu g)h$
			=$\lambda \int _{a}^{b}fh \, +\mu \int _{a}^{b}gh=\lambda\varphi(f,h)+\mu(\varphi(g,h))$
- $\forall g\in C^{0}([a;b],\mathbb{R}), \int _{a}^{b}f^{2}(t)t \, dt\geq0$
- $\int _{a}^{b} f^{2}(t)\, dt=0$ ssi $;f^{2}=0$ ssi $f=0$

notation :
$\varphi(x,y)=<x;y>= (x|y)$

inégalité de Cauchy Schwab

soit $E$ un $\mathbb{R}ev$ muni d’un produit scalaire 

alors $\forall(x,y)\in E^{2},|(x|y)|\leq \sqrt{ (x |x) }\sqrt{( y|y) }$

$(x|y)=\sum_{i=1}^{n}x_{i}y_{i}$
	$(f|g)=\int _{a}^{b} \, fg, \underbrace{ tr(AB }_{ \text{ somme élt diagonal} })$

démo cauchy :

soit $(x,y)\in E, \alpha\in \mathbb{R}$

$$
\begin{align}
(x+\alpha y|x+\alpha y)&= (x|x)+(x|\alpha y)+(\alpha y|x)+\alpha^{2}(y|y) \\
&=(x|x)+2\alpha(x|y)+\alpha^{2}(y|y)\geq0 \\

\end{align}
$$

si $(y|y) \ne 0$on a $P(x)= (x+\alpha y|x+\alpha y)$ et unj polynome de dégré 2 ≥0 donc$\Delta=4((x|y)-(x|y)(y|y))\leq0$

$$
\begin{align}
\Delta\leq0 &\implies (x|y)^{2}\leq (x|x)(y|y) \\
&\implies (x|y)\leq \sqrt{ (x|x) }\sqrt{ y|y }
\end{align}
$$

si $(y|y)=0\implies y=0_{E}\implies(x|y)=0$ d’où inégalité


définition : soit E un ev muni d’un produit scalaire $(.|.)$, on diy que $(E,(.|.))$ est un espace préhibertien
l’application $\|.\|$ définie par : $\forall x \in E, \|x\|=\sqrt{ (x|x) }$ est une norme sur E appellé norme associée au produit scalaire $(.|.)$


$\forall x\in E, \|x\|=0\implies x=0$

$\|x\|^{2}=(x|x)=0\implies x=0$

$\|\lambda x\|=\sqrt{ (\lambda x|\lambda x) }=\sqrt{ \lambda(x|x) }=|\lambda|\sqrt{ (x|x) }=|\lambda|\|x\|$

soit $(x,y)\in E^{2},  \|x+y\|\leq \|x\|+\|y\|$

$$
\begin{align}
\|x+y\|^{2}&= (x+y|x+y)=(x|x)+(x|y)+(y|x)+(y|y) \\
&= (x|x)+2(x|y)+(y|y) \\
&= \|x\|^{2}+2(x|y)+\|y\|^{2} \\
&\leq \|x\|^{2}+2|(x|y)|+\|y\|^{2} \\
&\leq \|x\|^{2}+2\sqrt{ (x|x) }.\sqrt{ (y|y) }+\|y\|^{2} \\
\|x+y\|^{2}&\leq(\|x\|+\|y\|)^{2} \\
\|x+y\|&\leq \|x\|+\|y\|
\end{align}
$$


---
orthogonalité
soit $(E,(.|.))$ un espace préhibertien 
x et y sont orthogonaux ssi xy=0
de même un vecteur x de E est unitaire ssi $\|x\|=1$
on dit qu’une famille $(x_{i})$ est orthogonale si $\forall(i,j),i\ne j$ $(x_{i}|x_{j})=0$

théorême de Pythagore

soit $E$ un espace préhibertien réel
soit $(x_{i})_{i\in I}$ une famille orthogonale

$\|x_{1}+\dots+x_{n}\|^{2}=\|x_{1}\|+\dots+\|x_{n}\|^{2}$

preuve : (n=2)
$$
\begin{align}
\|x+y\|^{2}&=\|x\|^{2}+\|y\|^{2} \\
&=(x+y|x+y)=(x|x)+2\underbrace{ (x|y) }_{ =0 }+(y|y) \\
&= \|x\|^{2}+\|y\|^{2}
\end{align}
$$

def : soit $(E,(.|.))$ un espace préhibertien 
soit A une partie de E

on note orthogonale de A : $A^{\perp}=\{ x\in E|\forall y\in A,(x|y)=0 \}$
