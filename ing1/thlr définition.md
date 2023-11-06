
langage: tous les langages réunis
mots : suite finie de symboles
alphabet : ensemble fini de symboles

symbole :
- $\Sigma : \{ a,b,c \}$
mot :
- finie mais sans limite de longueur


langages fini $\subset$ langages rationnels $\subset$ langages algébriques $\subset$ langages contetuels

récursivement énumérable : il  existe un algo qui énumère tous les éléments du langage
théorême : il existe un langage qui n’est pas récursivement énumérable

```python
a =["ab"]
n  = 3
i = 1
while true:
	tmp = i - 1
	while len(tmp) >=  len(i)-1:
		a.append(a[tmp]+ "a")
		a.append(a[tmp]+ "b")
		i += 2
		tmp -= 1
```



$\Sigma^{*}$ : ensemble des suites des éléments de $\Sigma$

opération binaire sur $\Sigma^{*}$

la concaténation est associative mais pas commutative

$L^{*}= L^{0}\cup L^{1} \cup L^{2}\cup \dots$




