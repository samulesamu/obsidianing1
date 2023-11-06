---
tags:
  - folo/exos
---

## ex 1

$x\equiv_{B}y\implies x=y$

réflexivité :

soit $x\in E$
$f(x)=f(x)$
donc $x\equiv_{B}x$

symétrie

soit $x,y\in E$ et $x\equiv_{B}y$

donc $f(x)=f(y)$
donc $f(y)=f(x)$
donc $y\equiv_{B}x$

transitivité :
soit $x,y,z\in E, x\equiv_{B}y$ et $y\equiv_{B}z$

alors  $f(x)=f(y)$ et $f(y)=f(z)$
donc $f(x)=f(z)$ donc $x\equiv_{B}z$

mq $\frac{E}{\equiv f}$ et $Im(f)$ sont equipotents


soit 
$$
g: \begin{matrix}
\frac{E}{\equiv f} \to Im(f) \\
[x]_{\equiv_{f}}\to f(x) \\
X\mapsto f(rep(X))
\end{matrix}
$$

injectivité :

soient $\underbrace{ [x]_{\equiv f} }_{ X },\underbrace{ [y]_{\equiv f} }_{ Y }\in \frac{E}{\equiv f}$
tq $g(X)=g(Y)$
donc $f(x)=f(y)$
donc $x\equiv_{B}y$
donc $X=Y$
dong $g$ est injective
surjectivité :

soit $y\in Im(f)$

donc $\exists x\in E,y=f(x)$

or $x\in [x]_{\equiv f}$
donc $y=g([x]_{\equiv f})$

donc $g$ est surjective
donc $g$ est bijective
donc $\frac{E}{\equiv f}$ et $Im(f)$ sont équipotents

## ex 2

![[folo td 2 2023-09-15 16.09.18.excalidraw]]