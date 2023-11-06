

## ex 1

a) $F$ est bien définie car car $|\sin(\pi t)e^{-t^{2}}|\leq e^{-t^{2}}$ et $t\mapsto e^{-t^{2}}$ est intégrable sur $[0;+\infty[$

mq $f$ est continue sur $\mathbb{R}$

- on pose $f(x)=\sin(xt)e^{-t^{2}}$ pour $x\in \mathbb{R}, t\in \mathbb{R}_{+}$


$t\mapsto f(x,t)= \sin(xt)e^{-t^{2}}$ est continue par morceaux sur $[0;+\infty[$
$x\mapsto f(x,t)= \sin(xt)e^{-t^{2}}$ est continue sur $\mathbb{R}\forall t\geq0$

$$
\begin{align}
|f(x,t)|&=|\sin(xt)e^{-t^{2}}| \\
&\leq e^{-t^{2}}=\phi(t)\,\forall x\in \mathbb{R},\forall t\geq0
\end{align}
$$

de plus, $\phi$ est intégrable sur $\mathbb{R}$ donc F est continue sur $\mathbb{R}$

2)mq $F\in C^{1}(\mathbb{R})$ 
$x\mapsto f(x,t)$ est $C^{1}(\mathbb{R})$

on calcule $\frac{ \partial f }{ \partial x }(x,t)= t\cos(xt)e^{-t^{2}}$

$$
|\frac{ \partial f }{ \partial x } (x,t)|=|t\cos(xt)e^{-t^{2}}|\leq te^{^-t^{2}}=\phi(t) , \forall t\geq0,\forall x\in \mathbb{R}
$$


et $\phi$ est intégrable sur $\mathbb{R}_{+}$

car $\phi(t)=o\left( \frac{1}{t^{2}} \right)$

car $t^{3}e^{-t^{2}}\xrightarrow[t\to+\infty]{}0$

donc $F$ est $C^1$ sur $\mathbb{R}$
de plus $F'(x)=\int _{0}^{+\infty}\frac{ \partial f }{ \partial x }(x,t)dt$


$$
F'(x)= \int _{0}^{+\infty}t\cos(tx)e^{-t^{2}} \, dt,\forall x\in \mathbb{R} 
$$

3)or 


$$
\int _{0}^{+\infty}t\cos(tx)e^{-t^{2}} \, dt=  
$$

$$
\begin{matrix}
u'=te^{-t^{2}} & u= \frac{e^{-t^{2}}}{-2} \\
v= \cos(tx) & v'=-x\sin(tx) 
\end{matrix}
$$



upp :
$$
\begin{align}
&= \left[ \frac{e^{-t^{2}}}{-2}\cos(tx) \right]_{0}^{+\infty}-\int \frac{_{0}^{+\infty}e^{-t^{2}}}{-2}(-x\sin(tx)) \, dt \\
&=\left( 0-\frac{e^{0}\cos(0)}{-2} \right)-  \int \frac{_{0}^{+\infty}e^{-t^{2}}}{-2}(-x\sin(tx)) \, dt  \\
&= \frac{1}{2}- \frac{x}{2 }\int _{0}^{+\infty }e^{-t^{2}}\sin(xt) \, dt \\
&= \frac{1}{2}-\frac{x}{2}F(x) 
\end{align}
$$
on a donc $F'(x)=\frac{1}{2}-\frac{x}{2}F(x)\forall x\in \mathbb{R}$