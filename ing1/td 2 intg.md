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