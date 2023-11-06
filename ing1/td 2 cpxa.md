---
tags:
  - cpxa/td
---

## 2.1

### 1.

$$
\begin{align}
b+\lfloor \frac{e-b}{2}\rfloor&= \lfloor b+\frac{e-b}{2}\rfloor \\
&=\lfloor \frac{b+e}{2}\rfloor 
\end{align}
$$
### 2.
$\left( a+\frac{b-a}{2} \right)$
### 3.

$2+T\left( \lfloor \frac{n}{2}\rfloor \right)$
### 4.

0 2 3 4 6 10

$2\log_{2}(n)+2$

### 5.


$T'(0)=0_{1}$
$T'(n)\leq c_{2}+ T'\left( \lfloor \frac{n}{2}\rfloor \right)$
$U'(0)=0$
$U'(n)=c_{2}\log_{2}(n)+(T_{1}+T_{2})$

### 6.

```pseudo
\begin{algorithm}
\begin{algorithmic}
\Function{BinarySearch}{A,b,e,v}
\If{$b < e$}
\State $m \gets \lfloor (b+e)/2\rfloor$ 
\If{$v=A[m]$}
\Return m
\Else
\If{$v < A[m]$}
\State $e\gets m$
\State \Call{goto}{1}
\Else
\State $b\gets m+1$
\State \Call{goto}{1}
\Endif
\EndIf
\Endif
\EndFunction
\end{algorithmic}
\end{algorithm}
```
## 2.

### 2.1 

$$
\sum_{i=1}^{n-1}\sum_{j=0}^{i-1}1= \frac{n(n-1)}{2}
$$

meilleur : 2(n-1)
pire : 2(n-1)$\left( \frac{n}{2} +2\right)$

### 2.2
ligne 2 : 1 fois
ligne 5 : 1 fois
ligne 7: 1 fois

### 2.3

```pseudo
\begin{algorithm}
\begin{algorithmic}
\Function{InsertionSort}{A}
\For{$i\gets 1$ to $n-1$ }
\State $key \gets A[i]$
\State $j\gets i-1$
\State $pos \gets$ \Call{BinarySearch}{A,key,0,i}
\While{j > pos}
\State $A[j]\gets A[j-1]$
\State $j\gets j-1$
\EndWhile
\State $A[pos]\gets key$
\EndFor
\EndFunction
\end{algorithmic}
\end{algorithm}
```


## 2.3


### 1.

a)
soit $f\in \theta(g_{1})+\theta(g_{2})$
il exist $c_{1},c_{2},n_{0}> 0$, $$
\exists f_{1}\in \theta(g_{1}), f_{2}\in \theta(g_{2}(n)),f=f_{1}+f_{2}$$

$$
\exists c'_{1},c'_{2},n'_{0}>0 \forall n \geq n'_{0},c_{1}g_{1}(2)\leq f_{2}(n)\leq c_{2}
g_{2}(n)$$

$\forall n \geq \max(n_{0},n_{0}'), c_{1}'g_{1}(n)+c_{2}'g_{2}\leq (f_{1}+f_{2})(n)\leq c_{2}g_{2}+c_{2}'g_{2}(n)$

$\min(c_{1})\max(c_{2},c_{2}')$