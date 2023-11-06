---
tags:
  - cpxa/cours1
---
abus de notation : 

## notation landau
- O
$$
f\in O(g)\Leftrightarrow  \exists c > 0, \exists n_{0}> 0, \forall n \geq n_{0}, |f\mid \leq g(n)
$$
$n\in O(n)$
$n^{100}\in O(e^{n})$
$10^{10^{10}}n\log(n)\in  O(n^{1,00000000001})$
$2^{1.5n}\in O(3^{n})$

- $\theta$

$f\in \theta(g)\implies f\in O(g)\wedge g\in O(f)$
$n^{2}\in \theta(n^{2}-100)$
$\log_{100}(n)\in \log_{2}(n)$
$10^{10^{2}}n^{2}\in \theta   (0,000000000001n^{2})$
- $o$

$f\in o(g)\Leftrightarrow \exists n\epsilon> 0, \forall n>n_{\epsilon}f(n)<\epsilon eg(n)$

$n\in o(n^{2})$
$n^{10000}\in o(e^{0,00001n})$
$(\log(n))^{100} \in o(\sqrt{ n })$

- $\Omega$
$f\in \Omega(g)\Leftrightarrow \exists c>0,\exists n_{0}>0, \forall n> n_{0}, f(n)\geq cg(n)$

$O(f)+O(g)= \{ f_{1}+ g_{1}| f_{1}\in O(f), g_{1}\in O(g) \}$
similaire mul
		
$f,g$ des fonctions positives :

$O(\lambda f)= O(f)$
$O(f)+O(g)=O(f+g)=O(\max(f,g))$
$O(f)\cdot O(g)= O(f\cdot g)$

$f\in o(g)\implies O(f)+\theta(g) = \theta(g)$
$f\in o(g)\implies\theta(f)+O(g)= O(g)$
$f\in O(g)\implies\theta(f) + \theta(g)= \theta(g)$
$f\in \theta(g)\implies\theta(f)+O(g)=O(g)$