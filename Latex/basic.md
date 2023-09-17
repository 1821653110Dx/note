# document class
## class
- for en :
	- book
	- article
	- beamer &emsp;&emsp;% for PDF
- for cn :
	- ctexbook
	- ctexart
	- ctexbeamer

## instances
### cn
```tex
\documentclass[12pt, a4paper,oneside]{ctexart}		% default font size = 12pt, papersize = a4paper, print_method = oneside	

\begin{document}
这里是正文。
\end{document}
```

# title
```tex
\documentclass[12pt, a4paper, oneside]{ctexart}

\title{my 1st \latex document/我的第一个 \latex 文档}	% define title name
\author{freather-ben}	% define author
\date{\today}	% define date as today

\begin{document}

\maketitle	% add title, author, date

这是正文
\end{document}
```

# newpage
- empty line
- \newpapge

# font
## special font type
```tex
\texit{}	% italic

\textbf{}	% bold
```

# passage
```tex
\documentclass[12pt, a4paper, oneside]{ctexart}

\title{我的第一个Latex文档}
\author{freather-ben}
\date{\today}

\begin{document}

\maketitle

\section{一级标题}

\subsection{二级标题}

这里是正文1。

\subsubsection{三级标题}

这里是正文2。

\end{document}
```

# directory
```tex
\documentclass[12pt, a4paper, oneside]{ctexart}

\title{我的第一个Latex文档}
\author{freather-ben}
\date{\today}

\begin{document}

\maketitle

\tableofcontents	% add directory

\section{一级标题}

\subsection{二级标题}

这里是正文1。

\subsubsection{三级标题}

这里是正文2。

\end{document}
``` 
# img
- 1st,
```tex
	\usepackage{graphicx}
```
- 2nd,
```tex
	\begin{figure}[htbp]    % add a imge here
		\centering  % align = center
		\includegraphics[width=8cm]{图片.jpg}
		\label{图片标题}
	\end{figure}
```
	
## an instance
```tex
\documentclass[12pt, a4paper, oneside]{ctexart}
\usepackage{graphicx}	% load a macro package: graphicx
			% graphicx is used to add imgs into a latex document

\title{我的第一个Latex文档}
\author{freather-ben}
\date{\today}

\begin{document}

\maketitle

\tableofcontents

\section{一级标题}

\subsection{二级标题}

这里是正文1。

\subsubsection{三级标题}

这里是正文2。

\begin{figure}[htbp]	% add a imge here
    \centering	% align = center
    \includegraphics[width=8cm]{图片.jpg}
    \label{图片标题}
\end{figure}

\end{document}
```
# list
- 1.
```tex
	\begin{enumerate}
    		\item 这是第一点；
    		\item 这是第二点；
   		\item 这是第三点。
	\end{enumerate}
```

- 2.
```tex
	\begin{enumerate}
    		\item[(1)] 这是第一点；
    		\item[(2)] 这是第二点；
   		\item[(3)] 这是第三点。
	\end{enumerate}

```
# page
to define page size, add the following code before main txt
```tex
\usepackage{geometry}
\geometry{left=2.54cm, right=2.54cm, top=3.18cm, bottom=3.18cm}		% page left margin页面左边距 = 2.54cm, page right margin = 2.54cm, page top margin = 3.18cm, page bottom margin = 3.18cm
\linespread{1.5}	% line space行距 = 1.5 times
```
# page number
## set page number type as 'lowercase roman'
```tex
\pagenumbering{roman}
```
## set page number begin with 0
```tex
\setcounter{page}{0}
```
# equation
- in line
```tex
	$\frac{1}{2}$
```
- interline
```tex
	$$
	\frac{1}{2}
	$$
```