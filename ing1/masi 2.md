---
tags:
  - masi
---

.
autocorrélation :

$\Gamma \tau: f \mapsto <x(t),x(t-\tau)> = \int _{\mathbb{R}} x(t)\overline{x(t-\tau)} \, dt$
si deux signaux égaux : 

$\Gamma_{xx} (\tau=0) = E_{x}$

exemple

$x(t)=\begin{cases} \frac{A}{T}\text{ si } 0\leq t\leq T \\0 \text{ sinon}\end{cases}$

$\Gamma_{x x}(\tau)=\int _{\mathbb{R}}x(t)x(t-\tau) \, dt$

![[masi 2 2023-10-27 07.21.16.excalidraw]]



$$
\begin{align}
\int _{0}^{\tau+T} \frac{A}{T}t \frac{A}{T}(t-\tau) \, dt &= \frac{A^{2}}{T^{2}}\int _{0}^{\tau+t}(t^{2}-t\tau) \, dt \\
&= \frac{A^{2}}{T^{2}}\left[ \frac{T^{3}}{3}- \frac{\tau}{2}t^{2} \right]_{0}^{\tau+t} 
\end{align}
$$
cas 1 :
pas d’intersection entre les courbes
=0
cas 2 superpopsition par la gauche


$$
\begin{align}
\Gamma_{x x}(\tau) &= \frac{A^{2}}{T^{2}}(\frac{(\tau+T)^{3}}{3}- \frac{\tau}{2}(\tau+T)^{2})
\end{align}
$$
cas 3 :


superposition par la droite


$$
\begin{align}
\Gamma_{x x}(\tau)&= \int _{\tau}^{T} \frac{A}{T}t \frac{A}{T}(t-\tau) \, dt \\
&= \frac{A^{2}}{T^{2}}\left[ \frac{t^{3}}{3}- \frac{\tau}{2}t^{2} \right]_{\tau}^{T} \\
&= \frac{A^{2}}{T^{2}}\left( \frac{T^{3}}{3}-\frac{\tau}{2}T^{2} -\frac{\tau^{3}}{3}+\frac{\tau^{3}}{3}\right)
\end{align}
$$



$$
\Gamma_{x x}(\Gamma)\begin{cases}
0 \text{ si } |\tau|\geq T \\
\frac{A^{2}}{T^{2}}(\frac{(\tau+T)^{3}}{3}+ \frac{\tau}{2}(\tau+T)^{2} \text{ si } -T\leq \tau \leq 0 \\
\frac{A^{2}}{T^{2}}\left( \frac{T^{3}}{3}- \frac{\tau}{2}T^{2}+ \frac{\tau^{3}}{6} \right) \text{ si }0 \leq \tau \leq T
\end{cases}
$$


si énergie pas fini : se baser sur la puissance :

$$
\Gamma_{x x}(\tau)= \lim \frac{1}{T}\int _{-\frac{T}{2}}^{\frac{T}{2}}x(t)\overline{x}(t-\tau) \, dt \text{ si puissance finie} 
$$

si signal périodique 

$$
\Gamma_{x x}(\tau)=  \frac{1}{T}\int _{-\frac{T}{2}}^{\frac{T}{2}}x(t)\overline{x}(t-\tau) \, dt 
$$

intercorrélation :

si énergie finie :

$$
\Gamma_{xy}(\tau)= \int _{\mathbb{R}} x(t)\overline{y(t-\tau)} \, dt 
$$

le produit de convolution de deux signaux x et y est $x*y(t)= \int _{\mathbb{R}}x(t)y(\tau-t)\, dt$

exemple :

$$
x(t)= \begin{cases}
1 \text{ si } -\frac{1}{2}\leq t \leq \frac{\tau}{2} \\
0 \text{ sinon}
\end{cases}
$$

![[Pasted image 20231027080345.png]]
$x*x(t)?$

cas 1 :

![[Pasted image 20231027080556.png]]

$x*x(t)=0$ si $|\tau|\geq T$

$-\frac{T}{2}+\tau = \frac{T}{2}$



cas 2
![[Pasted image 20231027081304.png]]

$$
\int _{-\frac{T}{2}}^{\frac{T}{2}+\tau}1dt = [t]_{-\frac{T}{2}}^{\frac{T}{2}+\tau}= \frac{T}{2}+\tau-(-\frac{T}{2})=T+\tau
$$

cas 3 :

$$
\begin{align}
x*x(t)&= \int _{-\frac{T}{2}+\tau}^{\frac{T}{2}} 1\, dt \\
&= [t]_{\frac{T}{2}+ \tau}^{\frac{T}{2}} \\
&= \frac{T}{2}+ \frac{T}{2}-\tau \\
&=T-\tau \text{ si } 0\leq\tau\leq T 
\end{align}
$$


$$
x*x(t) = \begin{cases}
0 \text{ si } |\tau|\geq T \\
 \begin{rcases}
\tau+T \text{ si } -T\leq\tau\leq0 \\
-\tau+T \text{ si } 0\leq\tau\leq T
\end{rcases}T-|\tau|
\end{cases} 
$$

propriétés du produit de convolution :

$$
C(xy)=x*y(\tau)= \int _{\mathbb{R}}x(t)y(\tau-t) \, dt 
$$
propriété convolution :
- commutativité : $x*y(\tau)=y*x(\tau)$
- bilinéarité $x,y,z$  3 application : $(\lambda(x+y))*z(\tau)=\lambda xz(\tau)+\lambda yz(\tau)$
- associativité $(x*y)*z(\tau)= x*(y*z)(\tau)$