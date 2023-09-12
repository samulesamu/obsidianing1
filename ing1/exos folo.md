---
tags:
  - folo/exos
---
Samuel Lambert

![[Pasted image 20230907212018.png]]

1)  $\neg(P\implies Q)= P \wedge \neg Q$
je suis à epita et je ne suis pas 1er ministre mais ce n’est pas parce que je ne suis pas à epita que je ne peux pas devenir 1er ministre
2)    j’ai fermé la fenêtre en pleine canicule $\implies$ j’ai chaud mais ce n’esr pas parce que ma fenêtre est ouverte en pleine canicule que j’ai pas chaud
3) être en vie $\Leftrightarrow$ avoir un coeur qui bat et avoir une tête mais avoir une tête ne suffit pas pour être en vie
4) faire une crêpe et y étaler du chocolat $\implies$ une crêpe au chocolat mais faire une crêpe $\not \implies$ une crêpe au chocolat



$A=\{ a,b,c \}$   $B=\{ a,d \}$

$A\cup A= A$
$A\cap A=A$
$A\cup B= \{ a,b,c,d \}$
$A\cap B=\{ a \}$
$A\cap B\cup \{ e \}=\{ a,e \}$



---
prouver que $\forall n,m \in \mathbb{N}, n^{2}+m^{2}\geq2n.m$
soit $n,m \in \mathbb{N}$

$$
\begin{align}   
(n-m)^{2}&\geq0 \\
\implies n^{2}-2nm+m^{2}&\geq0 \\
\implies n^{2}+m^{2}&\geq2nm
\end{align}
$$

or $\forall n,m \in \mathbb{N},(n-m)^{2}\geq0$donc $\forall n,m\in \mathbb{N} n^{2}+m^{2}\geq2nm$

---
prouver que si $a,b,c\in \mathbb{R}$ tq $\forall x\in \mathbb{R}$, $ax^{2}+bx+c=0$ alors $a=b=c=0$

soit $a,b,c\in \mathbb{R}$ on suppose que $\forall x\in \mathbb{R}, ax^{2}+bx+c=0$
en particulier, pour x=0
	$a\times0^{2}+b\times0+c=0\implies c=0$
pour $x=1 :$
$a\times1^{2}+b\times1=0\implies a=-b$

pour $x=-1$, $a\times(-1)^{2}+b\times(-1)=0\implies a=0$

---

prouver que $a,b\in \mathbb{R}$ et $a\ne 0$ alors $\exists x\in \mathbb{R}, ax+b=0$

soit $a,b\in \mathbb{R},a\ne0$ alors si $x=-\frac{b}{a}$, $ax+b=0$  donc la propriété $ax+b=0$ est vraie si $x=-\frac{b}{a}$ donc $\exists x\in \mathbb{R}, ax+b=0$

---

prouver que $a,b\in \mathbb{R}$ et $a\ne 0$ alors $\exists ! x\in \mathbb{R}, ax+b=0$

soit $x_{1},x_{2}\in \mathbb{R}$
supposons que $ax_{1}+b=0 \wedge ax_{2}+b=0$
alors 
$$
\begin{align}
ax_{1}&=-b \\
x_{1}&=-\frac{b}{a}
\end{align}
$$ pareil pour $x_{2}$

---
exprimer que n’importe quel sous-ensemble de borné $\mathbb{N}$ est fini,

$$
\forall E \subseteq \mathbb{N},\exists m \in \mathbb{N}, \forall x\in E,x\leq m\implies E \text{ est fini}
$$

---
soit $(u_{n})_{n\geq0} \in \mathbb{R}^{\mathbb{N}}$

$\forall>0,\exists n_{0}\in \mathbb{N},\forall n>n_{0} |u_{n}-l|\leq\epsilon$

négation : $\exists \epsilon>0,\forall n_{0}\in \mathbb{N},\exists n\geq n_{0}, |u_{n}-l|>\epsilon$
