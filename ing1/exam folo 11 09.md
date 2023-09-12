

Samuel Lambert


## 1
$\boxed{A\subseteq B\Leftrightarrow A\cup B=B}$

$\implies$
supposons $A\subseteq B$
soit $x\in A$, comme $A\subseteq B$ $x\in B$ donc $A\cup B=B$

$\impliedby$
supposons $A\cup B=B$ alors
$A\cup B=B\implies \not \exists x\in A,x\not \in B\implies A\subseteq B$


## 2

1. soit $m\in \mathbb{N}$, $m^{2}+m=m(m+1)$ donc :
  - si m est pair alors $m(m+1)$ peut s’écrire $2 (\frac{m}{2}(m+1))$ avec $\frac{m}{2},m+1\in \mathbb{N}$ donc $m(m+1)=m^{2}+m$ peut s’écrire $2k$ avec $k\in \mathbb{N}$ et est donc pair
  - si m est impair alors $m(m+1)$ peut s’écrire $m\left( \frac{(m+1)}{2}\times2 \right)=\frac{m(m+1)}{2}\times2$ or $\frac{m+1}{2}\in \mathbb{N}$ car $m$ est impair donc $m+1$ est pair donc $\frac{m(m+1)}{2}\in \mathbb{N}$ aussi donc $m(m+1)=m^{2}+m$ peut s’écrire $2k$ avec $k\in \mathbb{N}$ et est donc pair
2. si $n^{2}-1$ n’est pas un multiple de 8 alors on a $n^{2}-1=8k+m$ avec $k\in \mathbb{N}$ et $m\in [1,7]$

$$
\begin{align}
n^{2}-1&=8k+m \\
\implies n^{2}k-k&=8k^{2}+mk \\
\implies n^{2}k&=8k^{2}+k+mk  \\

\implies n&=\sqrt{ \frac{8 k^{2}+k+mk}{k}} \\
\implies n&=\sqrt{ 8k+m+1 } \\
\implies n&=2\sqrt{2k+\frac{m}{4}+\frac{1}{4}  } \\
\implies n&=2\sqrt{ \frac{8k+m+1}{4} }
\end{align}
$$

objectif : $n=x^{2}+x$ avec $x\in \mathbb{N}$
## 3


soit $m\in \mathbb{Z}$ et  $n=m^{2}$

alors 

$$
\begin{align} 
n&=m^{2} \\
2n&=2m^{2} \\
2n&=\sqrt{ 2 }\sqrt{ 2 }m^{2}
\end{align}

$$

$\sqrt{ 2 }$ est irrationnel donc $\sqrt{ 2 }\sqrt{ 2 }m^{2}$ n’est pas un entier