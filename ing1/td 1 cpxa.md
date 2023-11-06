---
tags:
  - cpxa/td
---
## 1.1

1. $\sum_{i=0}^{N - 1}\sum_{j = 1}^{N} 1 = \sum_{i=0}^{n-1} N= N^{2}$
2. $\sum_{i=0}^{N - 1}\sum_{j=0}^{\frac{N}{2}}1= \sum_{i=0}^{N -1} \lfloor\frac{N}{2}\rfloor=N\lfloor\frac{N}{2}\rfloor$
3. $\sum_{i=0}^{N - 1} \sum_{j=0}^{i}1= \sum_{i=0}^{N-1}i + 1= \frac{N(N+1)}{2}$
4. $\sum_{i=0}^{N-1}\sum_{j=0}^{\lceil\log_{2}N\rceil-1}1 = \sum_{i=0}^{N-1} \lceil\log_{2}(N)\rceil=N\lceil\log_{2}(N)\rceil$
5. $\sum_{i=0}^{N-2}\sum_{j=i}^{N-3}1= \sum_{i=0}^{N-2}n-2-i=\frac{(N-1)(N-2)}{2}$
6. $\sum_{i=0}^{n-1}\sum_{0}^{\lfloor \frac{i}{2} \rfloor}1 = \sum_{i=0}^{N-1}\lfloor \frac{i}{2}\rfloor+1= N\sum_{i=0}^{n-1}\lfloor \frac{i}{2}\rfloor$
si $n$ pair : $N+2\sum_{i=0}^{\frac{N}{2}-1}1=N+ \frac{2\left( \frac{n}{2}-1 \right) \frac{1}{2}}{2}=N+\left( \frac{n}{2}-1 \right)\times \frac{1}{2}$
si $n$ impair : $\sum_{i=0}^{n-1}\lfloor \frac{i}{2}\rfloor=\sum_{i=0}^{n-2}\lfloor \frac{i}{2}\rfloor+ \frac{N-1}{2}=\left( \frac{N+1}{2}-1 \right) \frac{N+1}{2}= \frac{N-1}{2}^{2}$

## 1.2

$$
\sum_{y=0}^{n-1}\sum_{x=n-y}^{n}1= \sum_{y=0}^{n-1}2y+1= n\frac{2+2n+(-2)}{2}= n^{2}
$$

## 1.4

lower : l/2

## 1.5

