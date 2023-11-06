---
tags:
  - masi
---
$E_{x}= \int _{\mathbb{R}} (x(t))^{2} \, dt$

si $E_{x}< +\infty$

$$
P_{x}= \lim_{ t \to +\infty } \frac{1}{T}\int _{-\frac{T}{2}}^{\frac{T}{2}}(x(t))^{2} \, dt=0  
$$

$\mathcal L^{2}\subset \mathcal L^{P_{n}}$

ex 2 :

$$
x(t)= A\cos\left( \frac{2\pi}{T}t \right); A >0
$$

$$
x(t+T)= A\cos\left( \frac{2\pi}{T}t+T \right)= A\cos\left( \frac{2\pi(t+T)}{T}  \right)
$$
$$
= A\cos\left( \frac{2\pi t+2\pi T}{T} \right)= A\cos\left( \frac{2\pi t}{T}+ \frac{2\pi T}{T} \right)
$$
$$
=A\cos\left( \frac{2\pi t}{T}+2\pi \right)= A\cos\left( \frac{2\pi t}{T} \right)
$$


$$
P_{x}= \frac{1}{T}\int _{0}^{T}A^{2}\cos ^{2}\left( \frac{2\pi}{T}t \right) \, dt 
$$

on pose $u= \frac{2\pi}{T}t$ $du= \frac{2\pi}{T}dt$

$$
=  \frac{A^{2}}{T}\int _{0}^{T}\cos(u) \, \frac{T}{2\pi}du = \frac{A^{2}}{2\pi}\int _{0}^{2\pi}\cos ^{2} (u)\, du
$$

$$
= \frac{A^{2}}{2\pi}\int _{0}^{2\pi} \frac{1}{4}(e^{2iu}+ e^{-2iu}+2) \, dt=  \frac{A^{2}}{2\pi}\int _{0}^{2\pi} \frac{1}{2}(\cos(2u)+1)
$$

$$
=\frac{A^{2}}{4\pi}\int _{0}^{2\pi}1+\cos(2u) \, du=\frac{A^{2}}{}\left[ u+ \sin\left( \frac{2u}{2} \right) \right]_{0}^{2\pi}= \frac{A^{2}}{2} 
$$

2.

si $y(t)= x(t+u)$

$P_{y}=P_{x}$

3.

$E_{x_{1}+x_{2}}= E_{x_{1}}+E_{x_{2}}$?
vrai si $\int x_{1}(t)x_{2}(t) \, dt=0$

0