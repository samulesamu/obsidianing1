---
tags:
  - apxf/exos
---


---

- 
$$
d(x,y)=\begin{cases}
0\text{ si } x=y \\
1 \text{ si }x\neq y
\end{cases}
$$

$$
d(x,y)=0 \implies x=y \text{ par définition de l'application}
$$

- 
$$
d(x,y)= 0 \text{ si } x=y
$$
donc comme $x=y$ $d(x,y)=d(y,x)$
si $x\neq y$ $d(x,y)=1=d(y,x)$ 

-   

$d(x,y)\leq d(x,z)+d(z,y)$
si $x=y$
soit $z=y=z$ alors $d(x,z)+d(z,y)=0$ et $d(x,y)=0$
si $x\neq y$
soit $(z=x) \oplus (z=y)$ et donc $d(x,z)+d(z,y)=1$ 
or $d(x,y)=1$ donc condition respectée
soit $z\ne x \wedge z\ne y$ donc $d(x,z)+d(z,y)=2$ donc on a toujours $d(x,y)\leq d(x,z)+dd(z,y)$

rappel : $B(x,r)=\{ y\in E | d(x,y)<r \}$

si $r>1,B(x,r)=E$
sinon $B(x,r)=\{x\}$

---
![[Pasted image 20230908090918.png]]



1) demo :
-  $d_{H}(x,y)=0 \implies Card \{ i\in \{ 1,\dots,n \}, x_{i}\ne y_{i} \}$  donc $\forall i,x_{i}=y_{i}$ donc $x=y$
- $d_{H}(X,Y)=d_{H}(Y,X)$
- SI $d(x,y)=k$ et $d(y,z)=l$ $d(x,z)\leq k+l$ donc $d_{H}(x,z)\leq d_{H}(x,y)+d_{H}(y,z)$



---
![[Pasted image 20230908092329.png]]

1) 
- 
$k^{2}=0\implies k=0$
donc $d_{1}(x,y)=0\implies x-y=0\implies x=y$
- 
$d_{1}(0,1)=1$, $d_{1}\left( 1,2 \right)= 1$  mais $d(0,2)=4$ donc $d_{1}(x,y)\not \leq d_{1}(x,z)+d_{1}(z,y)$
donc pas une distance
2) 
- $d_{2}(x,y)=0\implies x=y$?
$d_{2}(x,y)=0\implies \sqrt{ |x-y| }=0\implies |x-y|=0\implies x=y$
- $d_{2}(x,y)\leq d_{2}(x,z)+d_{2}(z,y)$


$$
\begin{align}
\sqrt{ |x-y| }&\leq \sqrt{ |x-z| }+\sqrt{ |z-y| } \\
|x-y|&\leq |x-z|+2\sqrt{ |x-z| }\sqrt{ |z-y| }+|z-y| \\
|x-y|&\leq |x-z|+|z-y|+2\sqrt{ |x-z| }\sqrt{ |z-y| }\\
|x-y|&\leq|x-z+z-y|+2\sqrt{ |x-z| }\sqrt{ |z-y| }\\
|x-y|&\leq|x-y|+\underbrace{ 2\sqrt{ |x-z| }\sqrt{ |z-y| } }_{ \geq0 }
\end{align}
$$
donc vrai
- $d_{2}(x,y)=d_{2}(y,x)$?

$x-y=-(y-x)$ donc $|x-y|=|y-x|$ donc $\sqrt{ |x-y| }=\sqrt{ |y-x| }$
donc on a bien $d_{2}(x,y)=d_{2}(y,x)$

3)   $d_{3}(x,y)=x-2y$
$d_{3}(2,1)=2-2=0$ donc pas une distance


