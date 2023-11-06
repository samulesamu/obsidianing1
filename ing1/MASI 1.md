
signaux : fonctions continues par morceeaux

exemple : 
signal unité : $u(t)= \begin{cases}1 \text{ si t > 0 }\\ 1 \text{ sinon}\end{cases}$
![[Drawing 2023-10-20 08.21.13.excalidraw]]


signal rectangle : $\begin{cases}A \text{ si } -\frac{\pi}{2}\leq t \leq \frac{\pi}{2}\\ 0 \text{ sinon}\end{cases}$



signal triangle : $ $\begin{cases}A =B(t)\text{ si } -\frac{\pi}{2}\leq t \leq \frac{\pi}{2}\\ 0 \text{ sinon}\end{cases}$

signal rampe :  $\begin{cases}A(t) \text{ si }  t > 0\\ 0 \text{ sinon}\end{cases}$


si $<x,y> = \int _{\mathbb{R}} x(t)y(t) \, dt$
$\|x\|^{2} = \int _{\mathbb{R}}(x|y)^{2} \, dt$

$f(x)=A\Pi_{T}(t)$
$E_{x}= \int _{\mathbb{R}}|x(t)|^{2} \, dt= \int _{-\frac{\pi}{2}}^{\frac{\pi}{2}}A^{2} \, dt = [A^{2}t]_{-\frac{\pi}{2}}^{\frac{\pi}{2}}= A^{2}T$

$$
x(t)= \begin{cases}
(1-t)^{2} \text{ si } -\frac{\pi}{2}\leq t\leq \frac{\pi}{2} \\
0 \text{ sinon }
\end{cases}
$$
$$
\int_{-\frac{\pi}{2}}^{\frac{\pi}{2}}(1-t)^{2}  \, dt = 2\int _{0}^{\frac{\pi}{2}} (1-t)^{2} \, dt= 2\left[ \frac{(1-t)^{3}}{3} \right]_{0}^{\frac{\pi}{2}}  
$$


$$
x(t)= \cos ^{2}(\omega t)
$$
$$
\int _{\mathbb{R}}  (\cos ^{2}(\omega t))\, dt = \int _{0}^{+\infty} 1 + \cos(\omega t) \, dt  = \int _{0}^{T} 1 + \cos(\omega t) \, dt = \lim_{ T \to \infty } \left[ t + \frac{\sin(2T)}{2} \right] 
$$
$$
= \lim_{ T \to \infty } T + \frac{\sin(2T)}{2}
$$

$P_{\times}= \lim_{ T \to +\infty } \frac{1}{T}\int _{\mathbb{R}}|x(t)|^{2} \, dx$ 

si l’énergie d’un signal est finie alors sa puissance est nulle 


démontrer que si $f$ est périodique de période T:
$$
\int _{\alpha}^{\alpha+T}f(t) \, dt = \int _{0}^{T}f(t) \, dt  
$$

$$
\int _{T}^{\alpha + T}f(t) \, dt = \int _{\alpha}^{0}f(u+T) \, du+\int _{\alpha}^{T} \, dx   
$$

### ex 1

calculer la $P_{moyenne}$ de $x(t)= A\cos\left(  \frac{2\pi t}{T} \right)$ T la période :

on commence par $T=1$ et $T=2\pi$

