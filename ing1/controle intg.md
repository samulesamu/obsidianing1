
## question 1
réponse 2

## question 2

#### 1.
$$
\lim_{ n \to +\infty } \cos\left( \frac{t}{n} \right) =\cos(0)=1
$$

$$
\lim_{ n \to +\infty } 1+t^{n+2} =\begin{cases}
1 \text{ si } t<1 \\
2 \text{ si } t=1 \\
+\infty \text{ si } t>1
\end{cases}
$$

donc 
$$
\lim_{ n \to +\infty } f_{n}(t)= f(t)=\begin{cases}
1 \text{ si }t<1 \\
\frac{1}{2} \text{ si } t=1 \\
0 \text{ si }t>1
\end{cases} 
$$

#### 2.

$f_{n}(t)$ converge simplement vers $f(t)$ (question précédente)

on a $\left| \frac{\cos\left( \frac{t}{n} \right)}{1+t^{n+2}} \right|\leq \frac{1}{1+t^{2}}$
or $\frac{1}{1+t^{2}}$ est $C^{1}$ sur $[0;+\infty[$ donc les hypothèses du théorème de convergence dominée sont respectées

#### 3.

$$
\begin{align}
\lim_{ n \to +\infty }\int _{0}^{+\infty} \frac{\cos\left( \frac{t}{n} \right)}{1+t^{n+2}} \, dt&=\int _{0}^{+\infty}\lim_{ n \to +\infty } \frac{\cos\left( \frac{t}{n} \right)}{1+t^{n+2}} \, dt \text{ vrai car thm cvd}  \\
&=\int _{0}^{+\infty} \frac{1}{1+t^{2}} \, dt \\
&=[\arctan(t)]_{0}^{+\infty} \\
&=\frac{\pi}{4} 
\end{align}  
$$

## question 3

#### 1.

$t\mapsto \frac{te^{-t^{2}}}{1+x^{2}t^{2}}$ est continue par morceaux $\forall x\in \mathbb{R}^{+}$ sur $\mathbb{R}^{+}$
$x\mapsto \frac{te^{-t^{2}}}{1+x^{2}t^{2}}$ est continue $\forall t\in \mathbb{R}^{+}$ sur $\mathbb{R}^{+}$
donc $F$ est défini et continue sur $[0;+\infty[$

#### 2.

$| \frac{te^{ -t^{2} }}{1+x^{2}t^{2}}|\leq te^{ -t^{2} }$
on a donc :
$$
\begin{align}
\lim_{ x \to + \infty } F(x)&=\lim_{ x \to + \infty } \int _{0}^{+\infty}  \frac{te^{-t^{2}}}{1+x^{2}t^{2}} \, dt \\
&=  \int _{0}^{+\infty}  \lim_{ x \to +\infty } \frac{te^{-t^{2}}}{1+x^{2}t^{2}} \, dt \\
&=\int _{0}^{+\infty}0 \, dt \\
 &=0
\end{align}
$$


#### 3.


$$
\begin{align}
F(0)&=\lim_{ a \to +\infty } \int _{0}^{a} te^{-t^{2}}\, dt \\
&=\lim_{ a \to +\infty } \left[ -\frac{e^{-t^{2}}}{2} \right]_{0}^{a} \\
&=\lim_{ a \to +\infty } \left( -\frac{e^{-a^{2}}}{2} +\frac{1}{2}\right) \\
&=0+\frac{1}{2}= \frac{1}{2}
\end{align}
$$