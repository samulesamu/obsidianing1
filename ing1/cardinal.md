---
tags:
  - folo/cours
---
prouver que si  $E,F$ des ensemble finis tq $card(E)=n,car d(F)=m$

mq $E\subseteq F\implies n\leq m$

- si $E=F,n=m$

- si $E\subsetneq F$ donc $F=E\cup (F\setminus E$
donc $card(F)=car d(E)+car d(F\setminus E)$
$m=n+\underbrace{ card(F\setminus E) }_{ \geq0 }$ donc $m\geq n$



- si $f$ est bijective  $car d(E)= car d(F)$
- si $f$ n’est pas bijective de $E\to F$
	- $F=Im(f)\cup(F\setminus Im(f))$
or $f: E\to Im(f)$ est surjective et comme $f$ est injective $f: E\to F$ est bijective
donc $car d(E)=car d(Im(f))$
donc $car d(F)=car d(Im(f))+car d(F\setminus Im(f))=car d(E)+car d(F\setminus Im(f))$
donc $car d(F)\geq car d(E)$

---

prouver que s’il existe un fonction $f$ surjective de E dans F alors $car d(E)\geq car d(F)$

soit $x,y\in E$


partition  $\frac{E}{\equiv_{f} }$
or $\frac{E}{\equiv _{f}}$ est équipotent à $Im(f)=F$
donc $car d\left( \frac{E}{\equiv_{f}} \right)=car d(F)$
mq  $car d(E)\geq car d(F)$

$g:\begin{matrix} \frac{E}{\equiv_{f}}\to E\\ [x]\mapsto x\end{matrix}$
$g$ est injective donc $car d\left( \frac{E}{\equiv_{f}} \right)\leq car d(E)$ donc $car d(F)\leq car d(E)$