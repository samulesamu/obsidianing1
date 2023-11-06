                                                           
## ex 1


1. $\binom{10}{5}$
2. $\binom{8}{3}\times \binom{2}{2}+\binom{8}{5}$
3. $C_{1}\sim \mathcal P_4(E_{8})\times \mathcal P_{1}(E_{2})$  $C_{2}\sim \mathcal P_{5}(E_{8})$  = 196

## ex 2


$$
\begin{align}
\begin{cases}
a+b=s \\
ab=p
\end{cases}&\Leftrightarrow \begin{cases}
b=s-a \\
a(s-a)=p 
\end{cases} \\
&\Leftrightarrow \begin{cases}
b=s-a \\
-a^{2}+as-p=0
\end{cases} \\
&\sqrt{ \Delta }=\sqrt{ s^{2}-4p }
\end{align}
$$

$$
b_{1}= \frac{s+\sqrt{ s^{2}-4 p}}{2}\; a_{1}= \frac{s-\sqrt{ s^{2}-4p }}{2}
$$

$$
b_{2}=\frac{s-\sqrt{ s^{2}-4p }}{2}\;   a_{2}= \frac{s+\sqrt{ s^{2}-4p }}{2}
$$

donc $S\leq \{ (a_{1},b_{1});(a_{2},b_{2}) \}$

réciproquement :

si $\Delta<0$ , $a_{1},a_{2},b_{1},b_{2}$ non définis
$S=\emptyset$

si $\Delta=0$ $a_{1}=a_{2}=b_{1}=b_{2}$
$S=\{ (a_{1},b_{1}) \}$ $a_{1}+b_{1}= \frac{S}{2}+\frac{S}{2}=S$
                     $a_{1}b_{1}=\frac{s}{2} \frac{s}{2}=\frac{s^{2}}{2}$
or $s^{2}=4p$ donc $a_{1}b_{1}=p$

si $\Delta>0$

$a_{1}+b_{1}= \frac{s-\sqrt{ s^{2}-4p }}{2}+\frac{s+\sqrt{ s^{2}-4p }}{2}=S$
$a_{1}b_{1}= \left( \frac{s-\sqrt{ s^{2}-4p }}{2} \right)\left( \frac{s+\sqrt{ s^{2}-4p }}{2} \right)= \frac{s^{2}}{4}- \frac{s^{2}-4p}{4}=p$
donc $(a_{1},b_{1})\in S$

similairement pour $(a_{2},b_{2})$ donc $S=\{ (a_{1},b_{1}),(a_{2},b_{2}) \}$

## ex 3

$Q(E)=\{ F\subseteq E \}=\bigcup_{i=0}^{car d(E)}\{ F\subseteq E|car d(F)=i \}$

$$
\begin{align}
\sum_{F\in \mathcal P(E)}car d(F)&= \sum_{i=0}^{n}\sum_{\substack {F\in \mathcal P(E)\\ car d(F)=i}} ca rd(F) \\
&=\sum_{i=0}^{n}\sum_{F\in \mathcal P_{i}(E)}i \\
&= \sum_{i=0}^{n} \left( i \sum_{F\in \mathcal P_{i}(E)}1 \right) \\
&= \sum_{i=0}^{n}icar d(\mathcal P_{i}(E)) \\
&= \sum_{i=0}^{n}i\binom{n}{i }1^{i-1}1^{n-i} \\
&=n2^{n-1}
\end{align}
$$

donc 
$$
\sum_{F\subseteq E}car \frac{d(F)}{car d(\mathcal P(E))}= \frac{n2^{n-1}}{2^{n}}=\frac{n}{2}
$$