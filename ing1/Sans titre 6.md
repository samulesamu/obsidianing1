---
tags:
  - pfon
---
```c
int sum(int n)
{
	int res = 0;
	for (int i = 1; i < n; i++)
		res += i
	return res;
}
```


```caml
let rec sum n =
	if n = 1 then
		1
	else
		n + sum(n-1)
;;
```

```python
def sum(n):
	return 
```