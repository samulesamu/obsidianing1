## question 1-1

a)

1.
$$

$$soit 
$$
f: \begin{matrix}
\mathbb{R}_{+}\to\mathbb{R} \\
x\mapsto 
\end{matrix}
$$


b)

$t\mapsto \frac{t^{2}}{\sqrt{ 1+x^{4} t^{2}}}$ est continue par morceau sur $[0;1]$

donc $x\mapsto \frac{t^{2}}{\sqrt{ 1+x^{4}t^{2} }}$ est continue sur $\mathbb{R} \forall t \in [0;1]$
donc $g$ est intégrable sur $[0;1]$


donc $G$ est continue sur $\mathbb{R}$
calcul de lim :

puisque $G(x)$ est continue sur $\mathbb{R}$ donc au voisinage 0
alors $\lim_{ x \to 0 }G(x)=G(0)=\int _{0}^{1}t^{3} \, dt=\frac{1}{3}$


## question 1-2


$$
f(\omega )= \int _{-\infty}^{+\infty}f(t)e^{-i\omega t} \, dt 
$$

1)
a)
$t\mapsto f(t)e^{-i\omega t}$ est continue sur $\mathbb{R},\forall\omega\in \mathbb{R}$
$\omega \mapsto f(t)e^{-i\omega t}$ est continue $\forall t \in \mathbb{R},$ sur $\mathbb{R}$

$|f(t)e^{-i\omega t}|\leq|f(t)|$

$\forall t\in \mathbb{R},\forall \omega \in \mathbb{R}$

,$|e^{-i\omega t}|=1$ et $|e^{i\alpha}|=1$ $\forall \alpha\in \mathbb{R}$ et $f$ est intégrable sur $\mathbb{R}$ donc $f$ est continue sur $\mathbb{R}$

b)

mq $f$ est $C^{k}$ sur $\mathbb{R}$

- $t\mapsto f(t)e^{-i\omega t}$ est con tinjue par morceau sur $\mathbb{R} \forall\omega\in\mathbb{R}$
- $\omega\mapsto f(t)e^{-i\omega t}$ est continue et $C^{k}(\mathbb{R})$  $\forall t\in \mathbb{R}$
- $\forall\omega \in \mathbb{R},\forall t\in \mathbb{R}$

$$
 |\frac{ \partial  }{ \partial \omega } f(t)e^{-i\omega t}|= |-itf(t)e^{-i\omega t}|=|tf(t)|=|g(t)|
$$
et $g$ est intégrable sur $\mathbb{R}$ (hypothèse) donc $\hat{f}$ est $C^{k}(\mathbb{R})$

rappel module

z=a+b
$|z|^{2}=a^{2}+b^{2}$
$|e^{i\theta}|=1$ car $e^{i\theta}= \cos\theta+i\sin\theta$
$|e^{i\theta}|^{2}=\cos ^{2}(\theta)+\sin ^{2}(\theta)=1$

de plus :
$$
\begin{align}
\hat{f }(\omega)&= \int _{-\infty}^{+\infty}-itf(t)e^{-i\omega t} \, dt \\
&=-\int_{-\infty}^{+\infty}g(t)e^{-i\omega t}dt \\
&=-i\hat g (\omega)=-i\hat{tf(t)}(\omega)
\end{align}
$$
