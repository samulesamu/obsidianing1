---
tags:
  - folo
---


## ex 1


1.

$$
\begin{align}
&2\cos(nx)\cos(x)-\cos((n-1)x) \\
&=2\cos(nx)\cos(x)-\cos(nx)\cos(-x)-\sin(nx)\sin(-x) \\
&=2\cos(nx)\cos(x)-\cos(nx)\cos(x)+\sin(nx)\sin(x) \\
&=\cos(nx)\cos(x)+\sin(nx)\sin(x) \\
&=\cos(nx+x) \\
&=\cos((n+1)x)
\end{align}
$$

2.
preuve par récurrence :

cas de base :

$n=1$

$\cos(nx)=\cos(x)=1\times \cos(x)+0$
donc p(1)
hérédité :

soit $n\in \mathbb{N}$ et $\{ a_{1},a_{2},\dots,a_{n} \}$ les coefficients du polynôme $T_{n}$ tel que 
$\cos(nx)=a_{n}\cos^{n}(x)+a_{n-1}\cos^{n-1}(x)+\dots+a_{1}\cos(x)$

donc 

$$
\begin{align}
\cos((n+1)x)&=2\cos(nx)\cos(x)-\cos((n-1)x) \text{ (question 1)} \\
&= 2\cos(nx)\cos(x)-\cos(nx)\cos(x)+\sin(nx)\sin(x) \\
&=\cos(nx)\cos(x)+\sin(nx)\sin(x)
\end{align}
$$
$$
=a_{n}\cos^{n+1}(x)+\dots+a_{1}\cos ^{2}(x)+\sin(nx)\sin(x)
$$

donc vraie au rang n+1

donc vrai $\forall n\in \mathbb{N}^{*}$ 

## ex 2

$\implies$
supposons $f$ injective : alors $\forall(x,x')\in E, f(x)=f(x')\implies x=x'$
	- soit $A,B\in \mathcal P(E)$ tq $A\cap B=\emptyset$
alors  :
	- $f(A)=\{ y\in F,\exists x\in A,f(x)=y \}$
	- $f(B)=\{ y\in F,\exists x'\in B,f(x')=y \}$
or supposons $y\in f(A)\wedge y\in f(B)$
alors :

$$
y=f(x)=f(x')
$$
or $f$ est injective donc $x=x'$ donc $x\in A\wedge x\in B$ ce qui est impossible car $A\cap B=\emptyset$

$\impliedby$ 

supposons que $\forall A,B\in \mathcal P(E),A\cap B=\emptyset\implies f(A)\cap f(B)=\emptyset$


supposons $x,x'\in E,f(\{ x \})=f(\{ x' \})$
donc
	- $f(\{ x \})=\{ f(x)\}$
	- $f(\{ x' \})=\{ f(x') \}$

on sait que :
$x=x'\Leftrightarrow f(\{ x \})\neq \{ f(x) \} \vee \{ x \}\cap \{ x' \}\neq \emptyset$
or si $x\neq x'$ ,$\{ x \}\cap \{ x' \}=\emptyset$