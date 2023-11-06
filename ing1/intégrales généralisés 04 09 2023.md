---
tags:
  - intg/cours
---
pour contrôle : application directe, def exacte intg

eval formative : jeudi à dimanche midi 
éval sommative : 11/09 lundi 

## révision


intégrale généralisé : borne indéfinie

$$
-\frac{1}{x}
$$



$\int _{0}^{1} \frac{1}{t^{\alpha}} \, dt$ converge ssi $\alpha<1$

$\int _{1}^{+\infty} \frac{1}{t^{\alpha}} \, dt$ converge ssi $\alpha>1$


> [!demo]
 $$ \int _{1}^{A} t^{-\alpha}=\left[ \frac{t^{1-\alpha}}{1-\alpha} \right]_{1}^{A}dt, \text{ si }\alpha \neq 1\, $$
 $$=\frac{A^{1-\alpha}}{1-\alpha}-\frac{1}{1-\alpha} = \frac{A^{1-\alpha}-1}{1-\alpha}$$
 si $a<1$, alors $\int _{1}^{+\infty}t^{-\alpha}=+\infty \, dx$
 si $\alpha>1$, alors $\int  _{1}^{+\infty}t^{-\alpha} \, dt=\frac{1}{\alpha-1}$


> [!info]
> soit $\alpha\in \mathbb{R}$
> $\int _{0}^{+\infty} e^{\alpha t} \, dt$ converge ssi $\alpha<0$
> $\int _{-\infty}^{0} e^{\alpha t} \, dt$ converge ssi $\alpha>0$ 



$\int _{a}^{b} f(t) \, dt$ converge $\Leftrightarrow$ $f(t)$ est majorée


$$
\text{ si } f \text{ et } g \text{ sont positives sur } [a,b[ \text{ et } 0\leq f\leq g \text{ sur } [a,b[
$$
$$
\int _{a}^{b} g(t) \, dt \text{ converge} \implies \int _{a} ^{b}f(t)\, dt \text{ converge } 
$$


en utilisant la majoration


- si $f$ et $g$ sont positives sur $[a,b[$  et $f=_{b} O(g) \text{ ou } f=_{b} o(g)$

$$
\int _{a}^{b}g(t) \, dt converge\implies \int _{a}^{b}f(t) \, dt \text{ converge}  
$$

- si $f\sim_{b} g$ 


$$
\int _{a}^{b}g(t) \, dt \;converge\Leftrightarrow \int _{a}^{b}f(t) \, dt \text{ converge}  
$$



nature de $\int _{0}^{1}\ln(t) \, dt$


$f(t)=\ln(t)$
$g(t)= \frac{1}{t^{\alpha}}$

$$
\frac{f(t)}{g(t)}=t^{\alpha}\ln(t) \xrightarrow[t\to0]{}\alpha>0
$$


lorsque $\alpha>0$, on a $f(t)= o\left( \frac{1}{t^{\alpha}} \right)$ on pose $\alpha= \frac{1}{2}$ on a $f(t)=o\left( \frac{1}{\sqrt{ t }}  \right)$ et $\int _{0}^{1} \frac{dt}{\sqrt{ t }} \, dt$ est convergenter donc $\int _{0}^{1}f(t) \, dt$ est convergente par comparaison


2 variables

$$
f(x,y)=f(x_{0},y_{0})+(x-x_{0})\frac{ \partial f }{ \partial x } (x_{0},y_{0})+(y-y_{0})\frac{ \partial f }{ \partial y } (x_{0},y_{0})+$$$$\frac{(x-x_{0})^{2}}{2} \frac{ \partial^{2} f }{ \partial x^{2} } (x_{0},y_{0})+ \frac{(y-y_{0})^{2}}{2}\frac{ \partial^{2} f }{ \partial y^{2} }(x_{0,y_{0}}) 

+2\times \frac{(x-x_{0})(y-y_{0})}{2}
$$
