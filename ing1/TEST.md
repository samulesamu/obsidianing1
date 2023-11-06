

$$
f(x) \text{ est paire donc } b_{n}=0
$$

$$
a_{n}= \frac{1}{\pi}\int _{-\pi}^{\pi} f(x)\cos(nx) \, dx 
$$

$$
\begin{align}
\frac{1}{\pi}\int _{-\pi}^{\pi}x^{2}\cos(nx) \, dx&=\frac{1}{\pi}2\int _{0}^{\pi}x^{2}\cos (nx) \, dx   \\
&= \frac{2}{\pi}\left( \left[ \frac{2x\sin(nx)}{n} \right]_{0}^{\pi}-\int _{0}^{\pi}\frac{2x\sin(nx)}{n} \, dx  \right) \\
&= \frac{2}{\pi}(  \frac{1}{n}[2x\sin(nx)]_{0}^{\pi}-\frac{1}{n}(  \left[ -\frac{2x\cos(nx)}{n} \right]_{0}^{\pi} \\
&-\int_{0}^{\pi} -2\cos(nx) \, dx   ) )  \\
&=\frac{2}{\pi}(\frac{2}{n^{2}}([x\cos(nx)]_{0}^{\pi}+2\int _{0}^{\pi}\cos(nx) \, dx )) \\
&= \frac{4}{n^{2}\pi}(\pi \cos(n\pi)+\underbrace{ 2[\frac{\sin(nx)}{n}]_{0}^{\pi} }_{ 0 }) \\
&= \frac{4\pi (-1)^{n}}{n^{2}\pi} \\
&= \frac{4(-1)^{n}}{n^{2}}
\end{align}
$$

u=$2x$ v’=sin(nx)
   2       -cos(nx)/n


$$
a_{0}= \frac{1}{\pi}\int _{-\pi}^{\pi}f(x) \, dx 
$$

$$
=\frac{2}{\pi}\int _{0}^{\pi}x^{2} \, dx=\frac{2}{\pi}\left(  \frac{\pi^{3}}{3}- \frac{0}{3} \right) =\frac{2\pi^{2}}{3}
$$


$c^{1}$ par morceau et $2\pi-$périodique

dirichlet

$$
\begin{align}
f(x)&=\frac{a_{0}}{2}+\sum_{n=1}^{+\infty} a_{n}\cos(nx) \\
&=\frac{\pi^{2}}{3}+\sum_{n=1}^{+\infty} \frac{4(-1)^{n}}{n^{2}}\cos(nx) \\
&= \frac{\pi^{2}}{3}+4 \sum_{n=1}^{+\infty} \frac{(-1)^{n}}{n^{2}}\cos(nx)
\end{align}
$$


$$
\begin{align}
f(\pi)&= \frac{\pi^{2}}{3}+4\sum_{n=1}^{+\infty} \frac{1}{n^{2}} \\
\pi^{2}&=\frac{\pi^{2}}{3}+4\sum_{n=1}^{+\infty} \frac{1}{n^{2}} \\
\frac{2\pi^{2}}{3}&=4\sum_{n=1}^{+\infty} \frac{1}{n^{2}} \\
\frac{\pi^{2}}{12}&= \sum
\end{align}
$$