

## ex 3

$$
f:\begin{cases}
\mathbb{R}\to\mathbb{R} \\
x\mapsto e^{ x }
\end{cases}
$$
comme 

$\exists M\in \mathbb{R},\forall x\in \mathbb{R},e^x<M$  définition de la majoration

$\forall x\in \mathbb{R},\exists M\in R,M=e^{x+1}$ définition de la fonction


## ex 5

$$
\forall X \in \mathcal P(E), (A\cap X =B)\Leftrightarrow (B\subseteq X) \wedge(X\subseteq B\cup A^{C})\wedge(B\subseteq A))
$$

on suppose $A\cap X=B$
#### $\boxed{\implies}$


- soit $x\in B$

$$
\begin{align}
x&\in B \\
\implies x&\in A\cap X \\ 
\implies x&\in A \wedge X \in B \\
\implies x\in B
\end{align}
$$


- soit $x\in X$
si $x\in B$ : $x\in B\cup A^{C}$


sinon :

$$
\begin{align}
x&\not \in B \\
\implies x&\not\in A\cap X \\
\implies \neg[x&\in A \wedge x\in X] \\
\implies x\not \in A \underbrace{ \vee x\in X }_{ \text{faux} } \\
\implies x\in A^{C+}
\end{align}
$$


- soit $x\in B$

$$
\begin{align}
x&\in B \\
\implies x&\in A\cap X \\ 
\implies x&\in A \wedge X \in B \\
\implies x\in A
\end{align}
$$


#### $\boxed{\impliedby}$



$x\in A\cap X$

$$
\implies x\in A \wedge x\in X
$$
$$
\implies x\in A \wedge (x\in B \vee x\in A^{C})
$$
$\implies (x\in A \wedge x\in B) \vee (x\in A \wedge x\in A^{C}$

or $\forall x\in E, (\times\in A \wedge x\in A^{C)}$ est faux

donc $x\in A \cap x\in B\implies x\in B$

## ex 10.2

$$
A \vee B \Leftrightarrow  (C=A \vee B\implies C) \wedge (C\implies A \vee B)
$$

$$
(A \vee B )\wedge \neg C \vee C \wedge (\neg A \wedge \neg B)
$$

