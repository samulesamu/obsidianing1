
Samuel Lambert

## question 1
3.

## question 2


  - 1.  3. 


## question 3

1. 
$(2+4x)e^{-2x}= \frac{2+4x}{e^{2x}}= \frac{2}{e^{2x}}+\frac{4x}{e^{2x}}$
donc $I= \int _{0}^{+\infty} (2+4x)e^{-2x} \, dx=\int _{0}^{+\infty} \frac{2}{e^{2x}} \, dx+\int _{0}^{+\infty} \frac{4x}{e^{2x}} \, dx$
- $\frac{2}{e^{2x}}  \, dx$
	est continue sur $\mathbb{R}^{+}$
	en 0 : $\frac{2}{e^{2\times0}}=2$
	en $+\infty$: $\lim_{ x \to +\infty }=0$
- $\frac{4x}{e^{2x}}$
en 0 : $\frac{0}{e^{2\times0}}=0$
en $+\infty$: $\lim_{ x \to +\infty } \frac{4x}{e^{2x}}=0$
en $+\infty$ $\frac{2}{e^{2x}}\sim \frac{4x}{e^{2x}}\sim \frac{1}{e^{2x}}$ par croissance comparée
donc l’intégrale converge par Gauss
2.   
$\int _{0}^{+\infty} \frac{2}{e^{2x}}=\lim_{ x \to +\infty }[-e^{-2x}]_{0}^{+\infty}=0+1=1$


$\int _{0}^{+\infty} \frac{4x}{e^{2x}}$
IPP :
$u = 4x$   $v'=e^{-2x}$
$u'=4$   $v=-\frac{1}{2}e^{-2x}$


donc 
$$
\begin{align}
\int _{0}^{+\infty} \frac{4x}{e^{2x}} &=\left[ -\frac{1}{2}e^{-2x}4x \right]_{0}^{+\infty}-\int _{0}^{+\infty}-2e^{-2s} \, dx \\
&=0-[e^{-2x}]_{0}^{+\infty} \\
&=1 
\end{align}
$$
donc $I=2$
## question 4

1.  $u=\frac{1}{x}$  $x= \frac{1}{u}$
	$\frac{du}{dx}=-\frac{1}{x^{2}}\implies du= -\frac{dx}{x^{2}}$

$\frac{e^{\frac{1}{x}}}{x^{2}}= \frac{e^{u}}{u^{-2}}$
$\frac{e^{u}}{u^{-2}}$ est continue sur $]-\infty;-1]$ donc le changement de variable est possible

de plus,  $-1^{-1}=-1$ donc les bornes restent les mêmes

2. - 
$$
\frac{e^{u}}{u^{-2}}= e^{u}u^{2}
$$
en $-\infty$ $e^{u}u^{2}\sim_{-\infty} e^{u}$ par croissance comparée 
en -1 $e^{-1}(-1)^{2}=e^{-1}$
donc l’intégrale va converger
3.    -
$f=e^{u}\, g'=u^{2}$
$f'=e^u\,g=\frac{1}{3}u^{3}$
$$
\begin{align}
\int _{-\infty}^{-1}e^{ u }u^{2} \, du&=\left[ \frac{1}{3}u^{3}e^{u} \right]_{-\infty}^{-1}-\int _{-\infty}^{-1} \frac{1}{3}u^{3}e^{u} \, du \\
&=  \left[ \frac{1}{3}u^{3}e^{u} \right]_{-\infty}^{-1}-\frac{1}{3}\left[ \frac{1}{4}e^{u^{4}} \right]_{-\infty}^{-1}
\end{align}
$$

$$
\lim_{ u \to -\infty } \frac{1}{3}u^{3}e^{u}=0
$$

$$
\lim_{ u \to -\infty } \frac{1}{4}e^{u^{4}}= 0 
$$
donc $I= -\frac{1}{3}e^{-1}-\left( \frac{1}{3} \times \frac{1}{4}\times e\right)=-\frac{1}{3}e^{-1}-\frac{e}{12}= \frac{1}{3e}-\frac{e}{12}$

## question 5

aucune réponse n’est vraie