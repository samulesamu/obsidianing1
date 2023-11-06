---
tags:
  - apxf/exos
---
## ex 1-1

1) $$
f_{n}:\begin{cases}
[0,1]\to\mathbb{R} \\
x\mapsto x^{n}
\end{cases}
$$

$$
\lim_{ n \to +\infty }f_{n }(x)=f(x) \text{ avec } f(x)= \begin{cases}
0 \text{  si }0\leq x<1 \\
1 \text{ si } x=1
\end{cases} 
$$
pas de convergence simple

2)  $$
g_{n}: \begin{cases}
[0,2]\to \mathbb{R} \\
x\mapsto\frac{1}{1+x^{n}}
\end{cases}
$$

- si $0\leq x<1$ $\lim_{ n \to +\infty }x^{n}=0$
- si $x=1$ $\lim_{ n \to +\infty }x^{n}=1$
- si $x>1$ $\lim_{ n \to +\infty }x^{n}=0$
donc si 

- $0\leq x<1$ $\lim_{ n \to +\infty }g_{n}(x)=1$
- $x=1$ $\lim_{ n \to +\infty }g_{n}(x)= \frac{1}{2}$
- $x>1$ $\lim_{ n \to +\infty }g_{n}(x)=0$
donc 

$$
\lim_{ n \to +\infty }=g(x) 
$$
où 
$$
g(x)=\begin{cases}
1 \text{ si } 0\leq x<1 \\
\frac{1}{2} \text{ si } x=1 \\
0 \text{ si } x>1
\end{cases}
$$


3) $$
h_{n}(x)
= \begin{cases}
\mathbb{R}\to\mathbb{R} \\
x\mapsto xe^{\frac{x}{n}}
\end{cases}$$

$\lim_{ n \to +\infty } e^{\frac{x}{n}}=1$
donc 

$$
\lim_{ n \to +\infty }h_{n}(x)= h(x) \text{ où } h(x) =x
$$

4)

$$
j_{n}: \begin{cases}
\mathbb{R}_{+}\to\mathbb{R} \\
x \mapsto  nx^{2}e^{-nx}
\end{cases}
$$
$$
\lim_{ n \to +\infty }j_{n}(x)= \begin{cases}
0 \text{ si }x=0 \\
0\text{ si } x>0
\end{cases} 
$$
donc 
$$
\lim_{ n \to +\infty } j_{n}(x)=0
$$

5)

$$
k_{n}: \begin{cases}
\mathbb{R}\to\mathbb{R} \\
x \mapsto \frac{x}{n}\cos\left( \frac{x}{n} \right)
\end{cases}
$$
$$
\lim_{ n \to +\infty }h_{n}(x)=0  
$$

## ex 1-2

$$
f_{n}(x)=n\sin\left( \frac{x}{n} \right)
$$


1)

$$
\lim_{ n \to +\infty } \sin\left( \frac{x}{n} \right)=0 
$$
$$
\lim_{ n \to +\infty } \sin\left( \frac{x}{n} \right)= \frac{x}{n}+\frac{\frac{x^{2}}{n^{2}}}{2}+o\left( \left( \frac{x}{n} \right)^{3} \right)
$$

$$
\begin{align}

\lim_{ n \to +\infty }f_{n}(x)&=\lim_{ n \to +\infty } n\left( \frac{x}{n}- \frac{x^{2}}{2n^{2}}+o\left( \frac{x^{4}}{n^{3}} \right) \right) \\
&=\lim_{ n \to +\infty }x-\frac{x^{3}}{6n^{2}}+o(\frac{x^{4}}{n^{3}})
\end{align}
$$
donc $\lim_{ n \to +\infty }f_{n}(x)=x$

2)

converge uniformément 
$$
g_{ n}(x)=f_{n}(x)-f(x)=n\sin\left( \frac{x}{n} \right)-x
$$$$g'_{n}(x)= \frac{n}{n}\cos\left( \frac{x}{n} \right)-1=\cos\left( \frac{x}{n} \right)-1=0$$

si
$\frac{x}{n}=2k\pi\, k\in \mathbb{Z}$

si 

$x=2kn\pi$

$$
\sup_{x\in \mathbb{R}_{+}}|g_{n}(x)|\geq g_{n}(2nk\pi)
$$
$$
|g_{n}(2nk\pi)|=|n\sin\left( \frac{2nk\pi}{n} \right)-2nk\pi|=2nk\pi
$$

$$
|g_{n}(2nk\pi)= |2nk\pi|\not \to0 \text{ quand } n\to+\infty
$$

- sur $[-1;1]$

$g'(x)\leq0$

$$
\sup_{x\in [-1;1]}|g_{n}(x)| = \sup(|g_{n}(-1)|;|g_{n}(1)|)
$$

$$
g_{n}(-1)=n\sin\left( -\frac{1}{n} \right)+1
$$

$$
\lim_{ n \to +\infty }|g_{n}(-1)|= \lim_{ n \to +\infty }|-\frac{\sin\left( \frac{1}{n} \right)}{\frac{1}{n}}+1|+0  
$$
Car $$
\lim_{ n \to +\infty } \frac{sin\left( \frac{1}{n} \right)}{\frac{1}{n}}= \lim_{ y \to 0 } \frac{\sin(y)}{y}=1
$$
$$
|g_{n}(1)|=|n\sin\left( \frac{1}{n} \right)-1| 
$$


$$
\lim_{ n \to +\infty }|g_{n}(1)|=0 
$$
donc 
$$
\lim_{ n \to +\infty }\|g_{n}\|_{\infty}=0 
$$
on a la cvu sur $[-1;1]$
## ex 2-3


calculer la norme infinie des fonctions suivantes : 
1)
$$
f:\begin{cases}
\mathbb{R}_{+}\to\mathbb{R} \\
x\mapsto \frac{x}{n+x}
\end{cases}
$$

$$
f(x)=\frac{x}{n+x}
$$
$$
f'(x)= \frac{n+x-x}{(n+x)^{2}}=\frac{n}{(n+x)^{2}}
$$



dérivée positive : fonction croissante 

$\|f_{n}\|_{\infty}=\lim_{ x \to +\infty }f_{n}(x)=1$


2)


$$
g_{n};\begin{cases}
[0;1]\to\mathbb{R} \\
x\mapsto \begin{cases}
nx^{n}\ln(x) \text{ si } x\ne0 \\
0 \text{ sinon }
\end{cases}
\end{cases}
$$

$$
g'_{n}(x)= n^{2}x^{ n-1}\ln(x)+\frac{nx^{n}}{x}= n^{2}x^{ n-1}\ln(x)+nx^{n-1}=nx^{n-1}(n\ln(x)+1)
$$
s’annule pour $x=e^{-\frac{1}{n}}$

$g'(x)\geq0$ ssi $n\ln(x)+1\geq0$ ssi $x\geq e^{-\frac{1}{n}}$ 

$g\left( e^{-\frac{1}{n}} \right)= ne^{-\frac{n}{n}}\ln\left( e^{-\frac{1}{n}} \right)=ne^{-1}\left( -\frac{1}{n} \right)= -e^{-1}$

![[2023-09-15 11.33.48.excalidraw]]

conclusion $\|g_{n}\|_{\infty}= e^{-1}$

3)

$$
h_{n}:\begin{cases}
\mathbb{R}^{+}\to\mathbb{R} \\
x\mapsto nx^{k}e^{nx} \text{ en fonction de }k
\end{cases}
$$

$h'_{n}(x)= nkx^{k-1}e^{nx}+n^{2}x^{k}e^{nx}=ne^{nx}(kx^{k-1}+nx^{k})$

$$
\begin{align}
(kx^{k-1}+nx^{k})&\leq0 \\
\implies kx^{k-1}&\leq nx^{k} \\
\implies k&\leq nx \\
\implies \frac{k}{n}&\leq x
\end{align}
$$
$$
h_{n}\left( \frac{k}{n} \right)= n \frac{k^k}{n^{k}}e^{-k}= \frac{k^{k}}{n^{k-1}}e^{-k}
$$




![[td 2 apxf 2023-09-15 11.49.41.excalidraw]]


$$\|h_{n}\|_{\infty}= \frac{k^{k}}{n^{k-1}}e^{-k}\xrightarrow[n\to+\infty]{}\begin{cases}0 \text{ si }k>1 \\
+\infty \text{ si }k<0 \\
e^{-1} \text{ si }k=0\end{cases}$$

4)

$$
j_{n}: \begin{cases}
\mathbb{R}\to\mathbb{R} \\
x\mapsto e^{\frac{x}{n}}-1
\end{cases}
$$

$$
j'_{n}(x)= \frac{1}{n}e^{\frac{x}{n}}
$$

$j'(x)>0 \forall x\in \mathbb{R}$ 

![[td 2 apxf 2023-09-15 12.02.43.excalidraw]]

$\|j_{n}\|_{\infty}=+\infty$


## ex 3-5



$$
f_{n}: \begin{cases}
\mathbb{R}_{+}\to \mathbb{R} \\
x\mapsto n^{\alpha}x^{2}e^{-nx}
\end{cases}
$$

convergence simple:

$$
\lim_{ n \to +\infty }f_{n}(x)= \begin{cases}
x^{2}e^{-nx} \text{ si }\alpha=0  \\
n^{\alpha}x^{2}e^{-nx} \text{ sinon }
\end{cases} 
$$

convergence uniforme :

$f'(x)=n^{\alpha}xe^{-nx}(2-nx)$

$$
\begin{align}
f'(x)&\geq0 \\
\implies x&\leq \frac{2}{n}
\end{align}
$$

$f\left( \frac{2}{n} \right)= 4n^{\alpha-2}e^{-2}$

![[td 2 apxf 2023-09-15 12.19.10.excalidraw]]



$$
\lim_{ n \to +\infty }\|f_{n}\|= \begin{cases}
0 \text{ si }\alpha>2 \\
4e^{-2} \text{ si }\alpha=2 \\
+\infty \text{ si }\alpha>2
\end{cases} 
$$

conclusion : $(f_{n})$ cvu vers 0 ssi $\alpha<2$
$$
g_{n}:\begin{cases}
\mathbb{R}_{+}\to\mathbb{R} \\
x \mapsto \frac{n}{n+x} 
\end{cases}
$$





convergence siimple : 

$\lim_{ n \to +\infty }g_{n}(x)=1$




$G_{n}(x)= g_{n}(x)-1= -\frac{x}{n+x}$

$$
\begin{align}
G'(x)&= \frac{-n}{(n+x)^{2}}
\end{align}$$


![[td 2 apxf 2023-09-15 12.36.42.excalidraw]]

$\|G_{n}\|_{\infty}=1\ne 0$, on a pas de cvu0






$$
h_{n}:\begin{cases}
\mathbb{R}\to\mathbb{R} \\
x\mapsto \frac{1}{n}\cos(nx)
\end{cases}
$$

convergence simple :

$$
\begin{align}
-\frac{1}{n}\leq h_{n}(x)\leq \frac{1}{n} \\
-\frac{1}{n}\leq -\frac{1}{n}\cos(nx)\leq \frac{1}{n}
\end{align}
$$
thm des gendarmes: ça converge vers 0

donc 

$\lim_{ n \to +\infty }h_{n}(x)=0$

donc 
$$
\lim_{ n \to +\infty } \|h_{n}\|_{\infty}=0 \text{ CVU} 
$$$




$$
j_{n}:\begin{cases}
\mathbb{R}\to\mathbb{R} \\
x\mapsto \frac{x\sqrt{ n }}{1+nx^{2}}
\end{cases}
$$

cvs :

$$
\lim_{ n \to +\infty } \frac{x\sqrt{ n }}{1+nx^{2}}=0
$$


$$
j'_{n}(x)= \frac{\sqrt{ n }(1+nx^{2})-nx.x\sqrt{ n }n}{(1+nx^{2})^{2}}= \frac{\sqrt{ n }(1+nx^{2}-2x^{2}n)}{(1+nx^{2})^{2}}
$$
$$
= \frac{\sqrt{ n }(1-nx^{2})}{(1+nx)^{2}}
$$

![[td 2 apxf 2023-09-15 12.55.49.excalidraw]]

$\|j_{n}\|_{\infty}= \frac{1}{2}$ pas de cvu

## ex 3-6


1) étudier cvs cvu sur $[0;1]$ de $(g_{n})$ donné par :



$$
g:\begin{cases}
[0;1]\to \mathbb{R} \\
x\mapsto \begin{cases}
 nx^n\ln(x) \text{ si } n\ne0 \\
0 \text{ sinon }
\end{cases}
\end{cases}
$$
cvs : 

$$
\lim_{ n \to +\infty }g_{n}(x)= \begin{cases}
0 \text{ si }x=1 \\
0 \text{ si }x=0 \\
0 \text{ si } 0<x<1
\end{cases}
$$
$g_{n}$ converge simplement vers 0 sur $[0;1]$
convergence uniforme :

$$
g'_{n}(x)= n^{2}x^{n-1}\ln(x)+\frac{nx^n}{x}= nx^{n-1}(\ln(x)+1)
$$
$g'_{n}(x)=0\implies x= e^{-\frac{1}{n}}$

$$
\begin{align} \\
g'_{n}(x)&=0\\
n^{2}x^{n-1}\ln(x)&=-nx^{n-1} \\
nx^{n-1}\ln(x)&=-x^{n-1} \\
n\ln(x)&=-1 \\
\ln(x)&= -\frac{1}{n} \\
x&= e^{-\frac{1}{n}}
\end{align}
$$

$g_{n}\left( e^\frac{-1}{n} \right)= -\dfrac{1}{e}$

$\|g_{n}-0\|_{\infty}= e^{-1}$


2)
mq $\forall x\in ]0;1[$, $\exists n_{0}; \forall n>n_{0}, x<e^{-\frac{1}{n}}$

en effet on choisit $n_{0}=\left( -\frac{1}{\ln(x)} \right)$:
on a $\forall  n>n_{0}, x<e^{-\frac{1}{n}}$


$\forall x\in ]0;a[ \begin{Vmatrix}g_{n}-0 \end{Vmatrix}_{\infty}=|g_{n}(a)|=na^{n}\ln(a)\to0$

donc $\lim_{ n \to +\infty }\|g_{n}-0\|_{\infty}=0$

conclusion : $(g_{n})$ cvu sur $]0;a[$


## ex 3-7



$$
f_{n}(x)= n^{2}xe^{-nx} \text{ sur }[0;1]
$$

1) cvs de $(f_{n})$

$$
\lim_{ n \to +\infty }f_{n}(x)=\begin{cases}
0 \text{ si }x=0 \\
0 \text{ si } 0<x\leq1 \\

\end{cases} 
$$
cvs vers 0
2) ipp $\int _{0}^{1}f_{n}(x) \, dx$
$u=n^{2}x$      $v'=e^{-nx}$
$u'=n^{2}$        $v=-\frac{1}{n}e^{ -nx}$

$$
\begin{align}
\int _{0}^{1}f_{n}(x) \, dx &= \left[ n^{2}x\times  \frac{-e^{-nx}}{n} \right]_{0}^{1}- \int _{0}^{1} -\frac{n^{2}e^{-nx}}{n} \, dx \\
&= -ne^{-n}+n\left[ \frac{e^{-xn}}{-n} \right]_{0}^{1} \\
&= -ne^{-n}-e^{-n}+e^{0} \\
&=(-n+1)e^{-n}+1
\end{align}
$$

$$
\lim_{ n \to +\infty } \int _{0}^{1}n^{2}xe^{-xn} \, dx =1
$$

3) conclusion cvu
4) si $(f_{n})$ cvu vers 0, alors on doit avoir $\lim_{ n \to +\infty }\int _{0}^{1}g_{n}(x)dx= \int _{0}^{1}\lim_{ n \to +\infty }g_{n}(x) \, dx \, dx$
ça veut dir 1=0 ce qui est faux donc $(f_{n})$ ne cvu pas sur $[0;1]$

## ex 4-8

cv des séries suivantes et discuter du résultat selon x

1) $\sum x^{n}$

$$
\sum x^{n}= \sum_{n\geq0} x^{n}
$$
$$
\frac{1-x^{n+1}}{1-x}=\sum_{k=0}^{n}x^{k}
$$
si $|x|<1$   $\lim_{  } \frac{1-x^{n+1}}{1-x}= \frac{1}{1-x}$ et $\sum_{k=0}^{+\infty}x^{n}= \frac{1}{1-x}$
sinon $\lim_{ n \to +\infty }\sum_{k=0}^{n}=+\infty$

2) $\sum n^{\alpha}x^{n}(1-x)$
si $x=0;f_{n}(0)=0$ la série cvs
si $x=0;f_{n}(0)=1$ la série cvs


$$
\frac{f_{n+1}(x)}{f_{n}(x)}= \frac{(n+1)^{\alpha}x^{n+1}(1-x)}{x^{\alpha}x^{n}(1-x)}
$$

$$
\frac{|f_{n+1}}{f_{n}}|= |\frac{(n+1)}{n}x|\xrightarrow[n\to+\infty]{}|x|
$$

si $|x|<1$ d’après d’Alembert, la série converge simplemen
cvn :

$$
\sum\|f_{n}\|_{\infty}<\infty
$$

$f_{n}(x)= n^{ \alpha}x^{n}(1-x)$
$f'_{n}(x)= n^{\alpha+1}x^{n-1}(1-x)-(n^{ \alpha}x^{n})= n^{\alpha}x^{n-1}(n(1-x)-x)=n^{\alpha}x^{n-1}(n-nx-x)$

$$
\begin{align}
n^{\alpha}x^{n-1}(n-nx-x)&\leq0 \\
\implies x=0 \text{ ou } n-nx-x&\leq0 \\
\implies-nx-x&\leq-n \\
\implies-x(1+n)&\leq-n \\
\implies x(1+n)&\geq n \\
\implies x&\geq\frac{n}{1+n} \\
\end{align}
$$

$f_{n}\left( \frac{n}{n+1} \right)=n^{\alpha}\left( \frac{n}{n+1} \right)^{n-1}\left( 1- \frac{n}{n+1} \right)= n^{\alpha-1}\left(1- \frac{n}{n+1} \right)^{n++1}\sim_{\infty}n^{\alpha-1}e^{-1}$


$\sum_{n}\|f_{n}\|_{\infty}$ cvn si $\alpha<0$
1) $\sum(-1)^{n} \frac{x^{n}}{n}$

$$
|\frac{x^{n+1}}{n+1} \frac{n}{x^{n}}|=| \frac{nx}{n+1}|=| \frac{x}{1+\frac{1}{n}}|\xrightarrow[n\to+\infty]{}|x|
$$
si |x|<1 cv absolumen

3) $\sum nx^{2}e^{-nx}$


$f_{n}(x)= nx^{2}e^{-nx}$


cvs :
si x>0

si $x=0$ $f_{n}(x)=0$ cv
si $x>0$:
$$
\frac{f_{n+1}}{f_{n}}= \frac{(n+1)x^{2}e^{-(n+1)x}}{nx^{2}e^{-nx}}=  \frac{(n+1)e^{-x}}{n}
$$

$$
= (1+\frac{1}{n})e^{-x} \xrightarrow[n\to+\infty]{} e^{-x}
$$

$e^{-x}$ $x<1$ donc la série converge $\forall x\geq0$

cvn :

$f'(x)=nxe^{-nx}-n^{2}x^{2}$ 


