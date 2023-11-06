---
tags:
  - intg/td
---
## question 1-1

a)

1.
$$

$$soit 
$$
f: \begin{matrix}
\mathbb{R}_{+}\to\mathbb{R} \\
x\mapsto \sin(xt)e^{-t^{2}}
\end{matrix}
$$

a)
$t\mapsto \sin(xt)e^{-t^{2}}$ est continue par morceaux sur $\forall x\in \mathbb{R},$ sur $[0;+\infty[$

$x\mapsto \sin(xt)e^{-t^{2}}$ est continue sur $\forall t\in \mathbb{R}_{+},$ sur $\mathbb{R}$
$$
|\sin(xt)e^{-t^{2}}|\leq e^{-t^{2}} \text{ sur } \mathbb{R} 
$$
donc $F$ est bien définie sur $\mathbb{R}$
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

mq $f$ est $C^{1}$ sur $\mathbb{R}$

- $t\mapsto f(t)e^{-i\omega t}$ est con tinjue par morceau sur $\mathbb{R} \forall\omega\in\mathbb{R}$
- $\omega\mapsto f(t)e^{-i\omega t}$ est continue et $C^{1}(\mathbb{R})$  $\forall t\in \mathbb{R}$
- $\forall\omega \in \mathbb{R},\forall t\in \mathbb{R}$

$$
 |\frac{ \partial  }{ \partial \omega } f(t)e^{-i\omega t}|= |-itf(t)e^{-i\omega t}|=|tf(t)|=|g(t)|
$$
et $g$ est intégrable sur $\mathbb{R}$ (hypothèse) donc $\hat{f}$ est $C^{1}(\mathbb{R})$

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

d)
## question 1-3

a) 
$x\mapsto \sin(x\sin(t))$ est continue sur $\mathbb{R},\forall t\in \mathbb{R}$
$t\mapsto \sin(x\sin(t))$ est continue par morceau sur $\mathbb{R},\forall x\in \mathbb{R}$


$$


\frac{ \partial f }{ \partial x } \sin(x\sin(t))=\sin(t)\cos(x\sin(t))
$$

$$
|\sin(t)\cos(x\sin(t))|\leq 1
$$

donc $F$ est $C^{1}$ sur $\mathbb{R}$

$$
\begin{align}
F(0)&=\int _{0}^{\pi}\sin(0\times \sin(t)) \, dt \\
&= \int _{0}^{\pi} \sin (0) \, dt=0 
\end{align}
$$
b)

$$
\frac{1}{x}\int \sin(x\sin(t)) \, dt= \frac{\int _{0}^{\pi}\sin(x\sin(t)) \, dt-0}{x-0}= \frac{F(x)-F(0)}{x-0}
$$

$$
\lim_{ x \to 0 } \frac{\int _{0}^{\pi}\sin(x\sin(t)) \, dt-0}{x-0}= \frac{F(x)-F(0)}{x-0}=F'(0)
$$
$$
= \int _{0}^{\pi} \sin(t)\cos (x\sin (t)) \, dt=\int _{0}^{\pi}\sin(t) \, dt=[-\cos(t)]_{0}^{\pi}
$$
$$
=-\cos(\pi)+\cos(0)=2 
$$


## question 1-4


a)
 $$\Gamma(x)=\int _{0}^{+\infty}e^{-t}t^{x-1} \, dt 
$$

domaine de def de $\Gamma$ :

$t\mapsto e^{-t}t^{x-1}\xrightarrow[t\to +\infty]{}0$

(Riemann)
on doit avoir $x\in ]0;+\infty[$

b)

$u=t^{x-1}$  $v'=e^{-t}$
$u'=(x-1)t^{x-2} \; v=-e^{-t}$

$$
\begin{align}
\Gamma(x+1)&= [t^{x}\times-e^{-t}]_{0}^{+\infty}-\int _{0}^{+\infty} -e^{-t}(x)t^{x-1} \, dt  \\
&=0-(x)\int _{0}^{+\infty}-e^{-t}t^{x-1} \, dt   \\
&=x\int _{0}^{+\infty}e^{-t}t^{x-1} \, dt \\
&=x\Gamma(x) 
\end{align}
$$


c)


$$
\begin{align}
\Gamma(n+1)&= n\Gamma(n) \\
&= n\times(n-1)\Gamma(n-1) \\
&= n\times(n-1)(n-2)\Gamma(n-2) \\
&=\dots \Gamma(1)
\end{align}
$$

$$
\begin{align}
\Gamma(1)&=\int _{0}^{+\infty}t^{1-1}e^{-t} \, dt  \\
&=[-e^{-t}]_{0}^{+\infty}=0-(-1)=1
\end{align}
$$

donc $\Gamma(n+1)=n!\Gamma(1)=n!$ l$\Gamma(n+1)=n!$


## question 1-5

a)
mq $g\in C^{1}(\mathbb{R})$ soit $a,b\in \mathbb{R},x\in [a,b]$ 
$t\mapsto \frac{e^{-(t^{2}+1)x^{2}}}{1+t^{2}}$ est continue par morceau sur $\mathbb{R}$ $\forall x\in \mathbb{R}$

$x\mapsto \frac{e^{-(t^{2}+1)x^{2}}}{1+t^{2}}$ est continue sur $\mathbb{R}$ $\forall t\in \mathbb{R}$
et $C^{1}(\mathbb{R})$ $t\in[0;1]$


$$
|\frac{ \partial  }{ \partial x } \frac{e^{-x^{2}(1+t^{2})}}{1+t^{2}}|=|-2xe^{-x^{2}(1+t^{2})}|=2|x|e^{-x^{2}(1+t^{2})}\leq2|x|\leq2max(|a|,|b|)
$$

b)

soit

$$
h(x)= \int _{0}^{1}-2xe^{-x^{2}(1+t^{2})} \, dt= 2\times \int _{0}^{x}e^{-t^{2}}\times e^{-x^{2}} \, dt 
$$
$$
=-2xe^{-x^{2}}\int _{0}^{1}e -x^{2}t^{2} \, dt 
$$
Or 
$$
\int _{0}^{1}e^{-(xt)^{2}} \, dt 
$$

$u=xt$

$$
\int _{0}^{x}e^{-u^{2}} \, \frac{du}{x} 
$$

donc $h'(x)= -\frac{2xe^{-x^{2}}}{x}\int _{0}^{x}e^{-u^{2}} \, du+2e^{-x}$
donc $h(x)=c$ $\forall x,c\in \mathbb{R}$

$h(x)=h(0)=g(0)+f(0)^{2}=\int _{0}^{1}\frac{e^{-0}dt}{1+t^{2}} \, dt=\int _{0}^{1} \, \frac{dt}{1+t^{2}}=\pi$
d)
théorême de cv dominée