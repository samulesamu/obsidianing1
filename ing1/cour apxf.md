---
tags:
  - apxf/cours
---
distance entre deux fonction : une application

- distance doit être >0
- distance doit être symétrique
- $d(x,y)\leq d(x,z)+d(z,y)$

norme si :
- $\forall x \in E, N(x)=0 \Leftrightarrow x=0$
- $\forall x \in E,\forall \lambda \in \mathbb{K} , N(\lambda x)=|\lambda|N(x)$
- - $\forall (x,y)\in E^{2}, N(x+y)\leq N(x)+N(y)$

boule ouverte centrée en a de rayon r

$$
b_{d}(a,r)=\{x\in E,d(a,x)<r  \}
$$


boule fermée centrée en a de rayon r

$$
b_{d}(a,r)=\{x\in E,d(a,x)\leq r  \}
$$


norme p sur $\mathbb{R}^{n}$ notée $\|\cdot\|$ défini pour $x=(x_{1},\dots,x_{n})\in \mathbb{R}^{n}$ :
$$
\| x\|_{p}= \left( \sum_{i=1}^{n}|x_{i}|^{p} \right)^{\frac{1}{p}}
$$

$\|x\|_{\infty}=sup_{1\leq i\leq n}|x_{i}|=max_{1\leq i\leq n}|x_{i}|$


démontrer que $\|\cdot\|_{1}$ et $\|\cdot\|_{2}$ sont des normes 


soit $x\in E$
$x=(x_{1};\dots;x_{n})$

$$
\|x\|_{1}=|x_{1}|+\dots+|x_{n}|
$$
$\|x\|_{1}=0$ ssi $|x_{1}|+\dots+|x_{n}|=0$ donc $|x_{i}|=0$ $\forall i \in [1,n]$

càd que $x=(x_{1},x_{2},\dots,x_{n})=(0,0,\dots,0)$

si $x=0_{E}=(0,0,\dots,0)=0$

$N(x)=0$ ssi $x=0_{e}$

$\forall x\in \mathbb{K}, N(\lambda x)=|\lambda|N(x)$

$$
\|\lambda x\|_{1}= |\lambda x_{1}|+|\lambda x_{2}|+\dots+|\lambda x_{n}|= =|\lambda||x_{1}|+|\lambda| |x_{2}|+\dots+|\lambda| |x_{n}|
$$

$$
=|\lambda|(|x_{1}|+|x_{2}|+\dots+|x_{ n}|)=\mid\lambda|\|x\|_{1}
$$

- $\forall(x,y)\in E^{2}$ : $\|x+y\|_{1}\leq \|x\|_{1}+\|y\|_{1}$
pour $i=1,\dots,n\; |x_{i}+y_{i}|\leq|x_{i}|+|y_{i}|$

$$
\sum_{i=1}^{n}|x_{i}+y_{i}|\leq\sum_{i=1}^{n}|x_{i}|+|y_{i}|=\sum_{i=1}^{n}|x_{i}|+\sum_{i=1}^{n}|y_{i}|
$$


$$
\|x+y\|_{1}\leq\|x\|_{1}+\|y\|_{1}
$$




→ pour $\|\cdot\|_{2}$

* $$
\|x\|_{2}=\left( \sum_{i=1}^{n}|x_{i}|^{ 2} \right)^{\frac{1}{2}}=0 \text{ ssi } \sum_{i=1}^{n}|x_{i}|^{2}=0
$$

$$
\text{ ssi } |x_{i}|^{2}=0 \forall i=1,\dots,n
$$
$$
\text{ ssi } x_{i}=0 \forall i =1,\dots,n
$$
$$
\text{ssi } x=0_{\mathbb{R}^{n}}
$$


*  $\forall \lambda\in \mathbb{K} :$
$$
\|\lambda x_{i}\|=|\lambda| \|x\|_{2}
$$

$$
\begin{align}
\|\lambda x_{i}\|_{2}= \left( \sum_{i=1}^{n}\|\lambda x_{i}\|^{2} \right)^{\frac{1}{2}}&=\left( \sum_{i=1}^{n}|\lambda|^{2}\times|x_{i}|^{2} \right)^{\frac{1}{2}} \\
&= \left( |\lambda|^{2}\sum_{i=1}^{n}|x_{i}|^{2}  \right)^{\frac{1}{2}} \\
&= |\lambda|\left( \sum_{i=1}^{n}|x_{i}|^{2} \right)^{\frac{1}{2}}=|\lambda|\|x\|_{2} 
\end{align}
$$



$$
\begin{align}
\|x+y\|^{2}_{2}&=\|x\|^{2}_{2}+\|y\|^{2}_{2}+2\sum_{i=1}^{n}x_{i}y_{i} \\
&\leq\|x\|^{2}_{2}+\|y\|^{2}_{2}+2\|x\|_{2}\|y\|_{2} \text{ imagine que c okj?????????} \\
&\leq (\|x\|_{2}+\|y\|_{2})^{2}\;\;\; \left( \sum x_{i}y_{i} \right)\leq \left( \sum x_{i^{2}} \right)\left( \sum y_{i}^{2} \right)^{ \frac{1}{2}}

\end{align}

$$






astuce

$$
\|x+y\|^{2}=\sum_{i=1}^{n}(x_{i}+y_{i})^{2}= \|x\|^{2}_{2}+2\times\sum x_{i}y_{i}\times\|y\|^{2}_{2}\geq0
$$

si polynôme positif : $\Delta <0$ 


$$
\begin{align}
\Delta&=b^{2}-4ac \\
&= 4\left( \sum_{i=1}^{n}x_{i}y_{i}-\|x\|^{2}_{2}\times\|y\|^{2}_{2} \right)\leq0 \\
\|x\|_{2}\|y\|_{2}-\|x\|_{2}^{2}\|y\|_{2}^{2}&\leq0 \\
\|x\|_{2}\|y\|_{2}&\leq\|x\|_{2}^{2}\|y\|_{2}^{2}
\end{align}
$$



$$
\|x\|_{\infty}=max_{1\leq i\leq n}|x_{i}|
$$


$$
\|x\|_{\infty}=0\Leftrightarrow max_{1\leq i\leq n}|x|=0\implies |x_{i}|=0 \forall i=1,\dots,n
$$

- soit $\lambda\in \mathbb{R}, \|\lambda x\|_{\infty}=max_{1\leq i\leq n}|\lambda x_{i}|=|\lambda|max_{1\leq i\leq n}|x_{i}|=|\lambda|\|x_{i}\|_{\infty}$
- $\|x+y\|_{\infty}= max_{1\leq i\leq n} |x_{i}+y_{i}|$
$$
\forall i=1,\dots,n \;\;|x_{i}+y_{i}|\leq|x_{i}|+|y_{i}|\leq \|x_{i}\|_{\infty}+\|y\|_{\infty}
$$

donc $|x_{i}+y_{i}|\leq\|x_{i}\|_{\infty}+\|y\|_{\infty}$




$$
\begin{align}
\|[x\|_{1}=\sum_{i=1}^{n}|x_{i}|\leq  n\|x\|_{\infty} \\
\text{ somme } \begin{cases}
|x_{1}|\leq\|x\|_{\infty} \\
|x_{2}|\leq\|x\|_{\infty} \\
\dots \\
|x_{n}|\leq\|x\|_{\infty}
\end{cases}
\end{align}
$$