---
tags:
  - intg/td
---

## question 1


a)


$$
\lim_{ n \to +\infty }\int _{0}^{+\infty} \frac{dx}{(1+x^{2})^{n}} \, dx  
$$

appliquons le théorême de convergence dominée : 

on pose $f_{n}(x)= \frac{1}{(1+x^{2})^{n}}$ pour $x\in [0;+\infty[$

$f_{n}$ est continue par morceau sur $[0;+\infty[$

cvs de $f_{n}$

on cherche $\lim_{ n \to +\infty }f_{n}$ pour $x\in[0;+\infty[$
$f_{n}(x)\xrightarrow[x\to+\infty]{}0$ si $x\neq 0$
$f_{n}(x) \xrightarrow[n\to+\infty]{}1$ si $x=0$

on pose alors 
$$
f(x)=\begin{cases}
0 \text{ si }x\neq0 \\
1 \text{ si } x=0
\end{cases}
$$

$f_{n}(x)$ cvs vers $f$

majoration uniforme indépendante de $n$

soit $x\in [0;+\infty[$

$$
|f_{n}(x)|\leq \frac{1}{1+x^{2}}=f(x)
$$

on a 
$$
f:x \mapsto \frac{1}{1+x^{2}} \text{ continue sur } [0;+\infty[
$$

on peut azppliquer le théorême de la dominance :
on a alors : 

$$
\lim_{ n \to +\infty }\int _{0}^{+\infty} f_{n}(x) \, dx= \int _{0}^{+\infty}f(x) \, dx =\int _{0}^{+\infty}0 \, dx =0   
$$


b)

$f$ est continue par morceau

$$
\lim_{ n \to +\infty } \frac{\left( n\ln\left( 1+\frac{x}{n} \right) \right)}{(1+x^{2})^{2}} 
$$

quand $\lim_{ n \to +\infty } \frac{x}{n}=0$ donc $\ln\left( 1+\frac{x}{n} \right)\sim_{\infty} \frac{x}{n}$

donc 
$$\lim_{ n \to +\infty }\frac{\left( n\ln\left( 1+\frac{x}{n} \right) \right)}{(1+x^{2})^{2}}=\frac{x}{(1+x^{2})^{2}}$$

cvs de $f_{n}:$

$f:\begin{matrix}[0;+\infty[ \\ x\mapsto \frac{x}{(1+x^{2})^{2}}\end{matrix}$


on a bien $\ln\left( 1+\frac{x}{n} \right)\leq \frac{x}{n}$
donc $| \frac{\left( n\ln\left( 1+ \frac{x}{n} \right) \right)}{(1+x^{2})^{2}}|\leq \frac{x}{(1+x^{2})^{2}}=\phi(x)$




$$
\frac{x}{(1+x^{2})^{2}}\sim_{x\to+\infty}= \frac{x}{(x^{2})^{2}}= \frac{1}{x^{3}}$$


on a bien $\forall n\geq0$ et $\frac{1}{x^3}\geq0$ sur $[3;+\infty[$

donc  $\phi(x)$ est intégrable sur $[0;+\infty[$


$$
\begin{align}
\lim_{ n \to + \infty }\int _{0}^{+\infty} \frac{\left( n\ln\left( \frac{x}{n} \right) \right)}{(1+x^{2})^{2}} \, dx  &=\int _{0}^{+\infty} f(x)\, dx \\
&= \int _{0}^{+\infty} \frac{x}{(1+x^{2})^{2}} \, dx \\
&= \frac{1}{2}\int _{0}^{+\infty} 2x(1+x^{2})^{-2} \, dx \\
&= \frac{1}{2}\int _{0}^{+\infty} \frac{2x}{(1+x^{2})^{2}} \, dx \\
&=\frac{1}{2}\left[ -\frac{1}{1+x^{2}} \right]_{0}^{+\infty}  \\
&=\frac{1}{2}( -0+1)    \\
&= \frac{1}{2}
\end{align}
$$

## ex 1-2

a) $\int _{0}^{1}f_{n}(x) \, dx= \int _{0}^{1}(n+1)x^{n} \, dx= [x^{n+1}]_{0}^{1}=1-0=1$

b) $(n+1)x^{n}\xrightarrow[n\to+\infty]{}0$ pour $x\in [0;1[$ donc cvs sur $[0;1[]$
c) $\lim_{ n \to +\infty }\int _{0}^{1}f_{n}(x) \, dx=\lim_{ n \to +\infty }1=1$

or $\int _{0}^{1}\lim_{ n \to +\infty }f_{n}(x) \, dx=\int _{0}^{1}0 \, dx=0\ne 1$
car pas de cmajoration $|f_{n}(x)|\leq \phi(x)$


## ex 1-3

et en 0 $\sin\left( \frac{t}{n} \right)=0$
donc pas de problème en 0


donc cvs de $\lim_{ n \to +\infty }\frac{\sin\left( \frac{t}{n} \right)}{t(1+t^{2})}=0$

$$
|\frac{\sin\left( \frac{t}{n} \right)}{t(1+t^{2})}|\leq \frac{1}{t(1+t^{2})} 
$$
or $\frac{1}{t(1+t^{2})}$ est intégrable sur $[1;+\infty[$ par Riemann donc
$\frac{\sin\left( \frac{t}{n} \right)}{t(1+t^{2})}$ est continue sur $[0;+\infty[$ donc intégrable sur le même segment

$$
\frac{1}{t(1+t^{2})} \text{ continue sur } [0;+\infty[
$$

donc  appliquont le thm convergence dominée

$f_{n}(t)= \frac{\sin\left( \frac{t}{n} \right)}{t(1+t^{2})}$

est continue par morceau

$\sin\left( \frac{t}{n} \right)\sim_{n\to+\infty}0$ donc $f(t)=0$

convergence vers 0 sur $\mathbb{R}_{+}$

- majoration :
=on a $|f_{n}(t)|\leq \frac{1}{t(1+t^{2})}$, on a un soucis en 0 $\frac{1}{t(1+t^{2})}$ n’est pas défini


$$
f_{n}(t)= \frac{\frac{t}{n}}{t(1+t^{2})}= \frac{1}{n(1+t^{2})}
$$

$t\mapsto \frac{1}{1+t^{2}}$ est intégrable sur $[0;+\infty[$


on a $|f_{n}(t)|\leq \frac{1}{1+t^{2}}$ et $t\mapsto \frac{1}{1+t^{2}}$ est intégrable sur $[0;+\infty[$ donc on peut appliqué le thm de cv dominée

ainsi :

$$
\lim_{ n \to +\infty }I_{n}=\int _{0} ^{+\infty}f(t)\, dt=\int _{0}^{+\infty} \, dt=0   
$$
donc $\lim_{ n \to +\infty }I_{n}=0$