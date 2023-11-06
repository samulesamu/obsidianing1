Samuel Lambert

on pose $P(n)$ la prédicat $U_{n} =(-1)^{n}\times \lceil \frac{n}{2}\rceil$
récurrence simple :
cas de base :

$U_{0}=\sum_{i=0}^{0}(-1)^{i}\cdot i=0$

$(-1)^{0}\times \lceil \frac{0}{2}\rceil=0$
donc $P(0)$

hérédité :

supposons la propriété vraie au rang $n$ alors

$$
\begin{align}
U_{n+1}&= \sum_{i=0}^{n+1}(-1)^{i}\times i \\
&= \sum_{i=0}^{n}(-1)^{i}\times i+ (-1)^{n+1}\times(n+1) \\
&=(-1)^{n}\times \lceil \frac{n}{2}\rceil+ (-1)^{n+1}\times(n+1) \\
&=(-1)^{n}\left( \lceil \frac{n}{2}\rceil+(-1)(n+1) \right)
\end{align}
$$

si $n$ pair: 

$$
\begin{align}
&= (-1)^n\left(  \frac{n+2(-1)(n+1)}{2} \right) \\
&=(-1)^{n}\left(  \frac{n+(-2)(n+1)}{2} \right) \\
&=(-1)^{n}\left(  \frac{n-2n-2}{2} \right) \\
&=(-1)^{n+1}\left( \frac{-n+2n+2}{2} \right) \\
&=(-1)^{n+1}\left( \frac{n+2}{2} \right) \\
&= (-1)^{n+1}\left( \lceil \frac{n+1}{2}\rceil \right) \text{ car n pair} \\
\end{align}

$$

donc $P(n+1)$
si $n$ impair

$$
\begin{align}
&=(-1)^{n}\left(  \frac{n+1}{2}+(-1)(n+1) \right) \\
&=(-1)^{n}\left( \frac{n+1-2n-2}{2} \right) \\
&=(-1)^{n+1}\left(  \frac{-n-1+2n+2}{2} \right) \\
&= (-1)^{n+1}\left( \frac{n+1}{2} \right) \\
&= (-1)^{n+1}\left( \lceil \frac{n+1}{2}\rceil \right) \text{ car n impair }
\end{align}
$$

donc $P(n+1)$

conclusion :

$\forall n\in \mathbb{N}, U_{n}=(-1)^{n} (\lceil \frac{n}{2}\rceil)$




---


$\implies$

supposons $f$ injective :
alors $\forall A,B\in E, f(A)=f(B)\implies A=B$

soit $A,B\in \mathcal P(E)$ : $\begin{matrix}f(A)=\{ y\in F,\exists x\in A,y=f(x) \}\\f(B)=\{ y\in F,\exists x'\in B,y=f(x') \}\end{matrix}$

$\subseteq$

si $A\neq B$ :

$A\cap B=\emptyset$ car ils appartiennent à $\mathcal P(E)$
or $f(\emptyset)=\emptyset$  
supposons $f(A)\cap f(B)\ne \emptyset$
alors $\exists y\in f,\exists x\in A\cap B,y=f(x)$ ce qui est impossible car $A\cap B=\emptyset$

si $A=B$
$f(A\cap B)=f(A)=f(B)=f(A)\cap f(B)$


donc $f(A\cap B)\subseteq  f(A)\cap f(B)$
$\supseteq$

$f(A)\cap f(B)=\{ y\in F,\exists x\in A,y=f(x) \}\cap \{ y\in F,\exists x'\in B,y=f(x) \}$
$=\{ y\in F,\exists x\in A\cap B,y=f(x) \}$
$=f(A\cap B)$

$\impliedby$

supposons $\forall A,B\in \mathcal P(E),f(A\cap B)=f(A)\cap f(B)$
et supposons $x,x'\in E,f(\{ x \})=f(\{ x' \})$
donc
$f(\{ x \})\cap f(\{ x' \})=f(\{ x \})$ donc $f(\{ x \}\cap \{ x' \})=f(\{ x \})$ donc $x=x'$
car $\{ x \}\cap  \{ x' \}\neq \emptyset \implies x=x'$

donc $f$ est injective.



