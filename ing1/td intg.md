
---
tags: intg/td
---
 
# 1

## 1–1


nature des intégrales :

a)

$$
\int _{0}^{+\infty} e^{\alpha x} \, dx 
$$

soit $A\in \mathbb{R}$
$$
\int _{0}^{A}e^{\alpha x} \, dx =\left[ \frac{1}{\alpha}e^{\alpha x} \right]_{0}^{A}= \frac{1}{\alpha}e^{A\alpha}-\frac{1}{\alpha}= \frac{e^{A\alpha}-1}{\alpha}
$$

$$
\begin{cases}
\alpha=0, \int _{0}^{ +\infty}1 \, dx=+\infty  \\
\alpha<0, \lim_{ A \to +\infty } \frac{e^{A\alpha}-1}{\alpha}=-\frac{1}{\alpha} \\ 
\alpha>0,  \lim_{ A \to +\infty } \frac{e^{A\alpha}-1}{\alpha}=+\infty
\end{cases}
$$

b)

$$
\begin{align}

\int ^{0}_{-\infty}e^{\alpha x} \, dx&=\lim_{ a \to -\infty }\int _{A}^{ 0}e^{\alpha x} \, dx  \\
&=\left[ \frac{1}{\alpha}e^{\alpha x} \right]_{A}^{0} \\
&=\frac{1}{\alpha}-\frac{e^{\alpha A}}{\alpha}
\end{align}
$$

$$
\begin{cases}
\alpha=0, \int _{-\infty}^{0} 1 \, dx=+\infty  \\
\alpha<0,  \frac{1-e^{\alpha A}}{\alpha}=+\infty \\
\alpha>0,  \frac{1-e^{\alpha A}}{\alpha}=\frac{1}{\alpha}
\end{cases}
$$
## 1-2

a)

$$
\int _{0}^{+\infty}\cos(t) \, dt=\lim_{ A \to +\infty } \int _{0}^{A} \cos(t)\, dt  =[\sin(t)]^{A}_{0}=\sin(A)
$$
$$
\lim_{ A \to +\infty }\sin(A)= \text{ pas de convergence} 
$$

b)

c)
$\frac{5}{4}$>1 donc l’intégrale converge par Riemann


## 1-3

a) 

$$
0\leq \cos ^{2}\left( \frac{(1)}{t^{2}} \right)\leq \frac{1}{t^{2}}
$$

donc l’intégrale converge

b)


$\int _{0}^{ +\infty} \frac{e^{-t}}{1+t^{2}} \, dt$


$$
0\leq\frac{e^{-t}}{1+t^{2}}\leq \frac{e}{1+t^{2}}
$$

donc l’intégrale est convergente

c)

$\int _{1}^{+\infty} \frac{e^{\sin(t)}}{t} \, dt$

$$
\frac{e^{-1}}{t}\leq \frac{e^{\sin(t)}}{t}\leq \frac{e}{t}
$$
$\frac{e^{-1}}{t}$ et $\frac{e}{t}$ convergent vers 0 donc $\int _{1}^{+\infty} \frac{e^{\sin(t)}}{t} \, dt$ converge

d)

$\int _{\pi}^{+\infty} \frac{1}{t+e^{t}} \, dt$

sur $[\pi,+\infty[$
$$
0\leq \frac{1}{t+e^{t}}\leq \frac{1}{e^{t}}
$$
$\frac{1}{e^{t}}$ converge donc $\int _{\pi}^{+\infty } \frac{1}{t+e^{t}} \, dt$ converge


e)

$\int _{\pi}^{+\infty} \frac{1}{t-e^{-t}} \, dt$


sur $[\pi,+\infty[$




on a $\frac{1}{t-e^{-t}}\sim_{+\infty} \frac{1}{t}$

or $\int _{\pi}^{ +\infty} \frac{1}{t} \, dt$ converge
donc : 
$$
\int _{\pi} ^{+\infty} \frac{1}{t-e^{-t}} \, dt \text{ converge} 
$$


f)

$$
e^{-\alpha(-x)^{2}}=e^{-\alpha x^{2}}
$$
donc la fonction est paire;

sur $[0,+\infty[$ :

$$
\int _{0}^{+\infty}e^{-\alpha x^{2}} \, dx 
$$
or sur $[0,+\infty[$ $e^{-\alpha x^{2}}\leq e^{-x}$ 

or $\int _{0}^{+\infty}e^{-x} \, dx$ converge donc $\int _{0}^{+\infty} e^{-\alpha x} \, dx$ converge donc $\int _{-\infty}^{+\infty} e^{-\alpha x} \, dx$

g)

$\int _{0}^{+\infty} \ln(t)e^{-t} \, dt$


$\ln(t)e^{-t}\sim_{+\infty} e^{-t}$
cv


$\ln(t)e^{-t}\sim_{0} \ln(t)$
$\ln(t)=o\left( \frac{1}{\sqrt{ t }}\right)$
g)


$\int _{0}^{+\infty}  \frac{\ln(1+x^{2})}{x^{2}} \, dx$

$\frac{\ln(1+x^{2})}{x^{2}}=\ln(1+x^{2})x^{-2}$ donc en 0 c’est égal à $0$

par croissance comparée $\lim_{ x \to +\infty }\frac{\ln(1+x^{2})}{x^{2}}=0$  donc 
$\int _{0}^{+\infty}  \frac{\ln(1+x^{2})}{x^{2}} \, dx$ converge

## 1-4


a)

$x(t)=\cos(\omega t)$ donc 

$$
\begin{align}
\int _{-\infty}^{+\infty} |x(t)|^{2} \, dt&=\int _{-\infty}^{+\infty} |\cos(\omega t)|^{2} \, dt 
\end{align}
$$
$|\cos(\omega t)|^{2}$ ne converge pas vers 0 et est toujours positif donc $\int _{-\infty}^{+\infty}|\cos(\omega t)|^{2} \, dt$ ne converge pas

b)

$Ae^{-\alpha t}\cos(\omega t)$

$A>0$ $\alpha>0$


$$
\begin{align}
E_{x}&=\int _{-\infty}^{+\infty}Ae^{-\alpha t}\cos(\omega t) \, dt \\
&=A\int _{-\infty}^{+\infty}e^{-\alpha t}\cos(\omega t) \, dt \\
&=A\left( \int _{-\infty}^{0}e^{-\alpha t}\cos(\omega t) \, dt+\int _{0}^{+\infty}e^{-\alpha t}\cos(\omega t) \, dx   \right) 
\end{align} 
$$
$$
\int _{-\infty}^{0} e^{-\alpha t}\, dt \text{ diverge donc } \int _{-\infty}^{0} e^{-\alpha t}\, dt \text{ diverge}
$$
donc le tout diverge


## ex 1-5


a)  $$
\int _{0}^{+\infty} \frac{1}{1+x^{2}} \, dx =[\arctan(x)]_{0}^{+\infty}=\frac{\pi}{2}
$$

b)
$$
\begin{align}
\int _{0}^{+\infty} \frac{1}{2+x^{2}} \, dx &= \int _{0}^{+\infty} \frac{\frac{1}{2}}{1+\frac{x^{2}}{2}} \, dx \\
&=\int _{0}^{+\infty} \frac{\frac{1}{2}}{1+\left( \frac{x}{\sqrt{ 2 }} \right)^{2}}\, dx  \\
&=\frac{1}{2}\int _{0}^{+\infty} \frac{1}{1+\left( \frac{x}{\sqrt{ 2 }} \right)^{2}} \, dx \\
&= \frac{1}{2}\left[ \arctan\left( \frac{x}{\sqrt{ 2 }} \right) \right]_{0}^{+\infty} \\
&= \frac{\pi}{4}  
\end{align}
$$


## ex  1-7
$\lambda>0$

$$
\int _{-\infty}^{+\infty}\lambda e^{-\lambda x} \, dx =\int _{0}^{+\infty}\lambda e^{-\lambda x} \, dx =[-e^{-\lambda x}]_{0}^{+\infty}=1-e^{-\lambda a}
$$



$$
\int _{-\infty}^{+\infty}xf(x) \, dx=\int _{0}^{+\infty}\lambda xe^{-\lambda x} \, dx=\lambda \int xe^{-\lambda x} \, dx   
$$
IPP :

$$
u=e^{-\lambda x}\,v'=x
$$
$u'=-\lambda e^{-\lambda x}\, v'=\frac{1}{2}x^{2}$


$$
\left[ \frac{e^{-\lambda x}x^{2}}{2} \right]_{-\infty}^{+\infty}-\int _{-\infty}^{+\infty}x \, dx 
$$