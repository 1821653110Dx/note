# font
-|-
latex|renderd
Roman: `\mathrm{}`|$\mathrm{latex}$
Boldface: `\mathbf{}`|$\mathbf{Latex}$
Italics: `\mathit{}`|$\mathit{Latex}$

# size
-|-
latex|renderd
{\tiny latex }|${\tiny latex }$
{\scriptsize latex}|${\scriptsize latex}$
{\small latex}|${\small latex}$
{\normalsize latex}|${\normalsize latex}$
{\large latex}|${\large latex}$
{\Large latex}|${\Large latex}$
{\LARGE latex}|${\LARGE latex}$
{\huge latex}|${\huge latex}$
{\Huge latex}|${\Huge latex}$$
   
# color
-|-
latex|renderd
{\color{Blue} latex}|${\color{Blue} latex}$
{\color{Brown} latex}|${\color{Brown} latex}$
{\color{Gray} latex}|${\color{Gray} latex}$  
{\color{Green} latex}|${\color{Green} latex}$
{\color{Orange} latex}|${\color{Orange} latex}$
{\color{Peach} latex}|${\color{Peach} latex}$
{\color{Purple} latex}|${\color{Purple} latex}$
{\color{Red} latex}|${\color{Red} latex}$
{\color{Tan} latex}|${\color{Tan} latex}$
{\color{Violet} latex}|${\color{Violet} latex}$
{\color{Yellow} latex}|${\color{Yellow} latex}$

# space
-|-
1 space: a \quad b|$a \quad b$
2 spaces: a \qquad b|$a \qqaud b$

# mark
## underline
`\underline`  
$$\underline{Latex}$$

## subscript & superscript
-|-|-|-
latex|rendered|latex|rendered
x\_i^2|$x\_i^2$|x_{2i}^{2+b}|$x_{2i}^{2+b}$
\hat{a}|$\hat{a}$|\widehat{a}|$\widehat{a}$
\grave{a}|$\grave{a}$|\breve{a}|$\breve{a}$
\bar{a}|$\bar{a}$|\widetilde{a}|$\widetilde{a}
\check{a}|$\check{a}$|\tilde{a}|$\tilde{a}$
\dot{a}|$\dot{a}$|\ddot{a}|$\ddot{a}$
\vec{a}|$\vec{a}$|\acute{a}|$\acute{a}$
\overrightarrow{xyz}|$\overrightarrow{xyz}$|\overleftrightarrow{xyz}|$\overleftrightarrow{xyz}$
\stackrel{F.T}{\longrightarrow}|$\stackrel{F.T}{\longrightarrow}$| |


# Operator运算符 & space
-|-
\times|$\times$ 
\bullet|$\bullet$
\$|$\$$
\&|$\&$
`\_`|$\_$
\pm|$\pm$
\lt|$\lt$
\gt|$\gt$
\le|$\le$
\ge|$\ge$
\sim|$\sim$
\approx|$\approx$
\ldots|$\dots$
\cdots|$\cdots$
\infty|$\infty$
\cup|$\cup$
\cap|$\cap$
\subset|$\subset$
\supset|$\supset$
\subseteq|$\subseteq$

# formula
-|-
\sin x|$\sin x$
\log_{21}{xy}|$\log_{21}{xy}$
\prod_{k=1}^n k = n! |$\prod_{k=1}^n k = !n$
\sqrt[3]{x}|$\sqrt[3]{x}$
\lim_{x \to 0} \frac{3x ^2 +7x^3}{x^2 +5x^4} = 3|$\lim{x \to 0} \frac{3x ^2 +7x^3}{x^2 +5x^4} = 3$
{f}'(x) = x^2 + x|${f}'(x) = x^2 + x$
\int \\!\\!\\! \int\\\_D f(x,y)dxdy|$\int \\!\\!\\! \int_D f(x,y)dxdy$
\int \\!\\!\\! \int \\!\\!\\! \int_{\textbf{R}^3} \left| \varphi(r,t) \right|^2 dx dy dz|$\int \!\!\! \int \!\!\! \int_{\textbf{R}^3} \left| \varphi(r,t) \right|^2 dx dy dz$

# parentheses括号
-|-
\left(...\right)|$\left(...\right)$
\vert|$\vert$
\Vert|$\Vert$
\langke|$\langke$
\rangle|$\rangle$
\Biggl(\biggl(\Bigl(\bigl((x)\bigr)\Bigr)\biggr)\Biggr)|$\Biggl(\biggl(\Bigl(\bigl((x)\bigr)\Bigr)\biggr)\Biggr)$
  
```tex
f(x) = 
	\begin{cases}
		x = cos(t) \\
		y = sin(t) \\
		z = \frac{x}{y}
	\end{cases}
```
$$
f(x) = 
	\begin{cases}
		x = cos(t) \\
		y = sin(t) \\
		z = \frac{x}{y}
	\end{cases}
$$
  
```tex
f(x) =
	\begin{cases}
		0 & \text{x=0} \\
		1 & \text{x!=0}
	\end{cases}
```
$$
f(x) =
	\begin{cases}
		0 & \text{x=0} \\
		1 & \text{x!=0}
	\end{cases}
$$

# matrix
```tex
\begin{matrix}
	0 & 1 \\
	1 & 0
\end{matrix}
```
$$
\begin{matrix}
	0 & 1 \\
	1 & 0
\end{matrix}
$$
```tex
\begin{pmatrix}
	0 & -i \\
	i & 0
\end{pmatrix}
```
$$
\begin{pmatrix}
	0 & -i \\
	i & 0 	
\end{pmatrix}
$$
```tex
\begin{bmatrix}
	0 & -1 \\
	1 & 0 
\end{bmatrix}
```
$$
\begin{bmatrix}
	0 & -1 \\
	1 & 0 
\end{bmatrix}
$$
```tex
\begin{Bmatrix} 
	1 & 0 \\ 
	0 & -1 
\end{Bmatrix}
```
$$
\begin{Bmatrix} 
	1 & 0 \\ 
	0 & -1 
\end{Bmatrix}
$$
```tex
\begin{vmatrix}
	a & b \\ 
	c & d
\end{vmatrix}
```
$$
\begin{vmatrix}
	a & b \\ 
	c & d
\end{vmatrix}
$$
```tex
\begin{Vmatrix}
	i & 0 \\
	0 & -i
\end{Vmatrix}
```
$$
\begin{Vmatrix}
	i & 0 \\
	0 & -i
\end{Vmatrix}
$$
