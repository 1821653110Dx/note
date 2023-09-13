# compile
xlatex file  
# source code structure
```tex
\documentclass[options]{document_classes文档类}
% introduction_area 导言区
\begin{document}
% main_content 正文内容
\end{document}
```
# macro packages宏包 and document classes
## basic document classes
```txt
article
report
book
proc
slides
minimal
```
## options
### example
```tex
\documentclass[11pt, twoside, a4paper]{article}
```
### basic options
```txt
specify paper size :
	a4paper
	letterpaper

specify layout : 指定排版
	twoside		// two side layout 双面排版
	oneside
	onecolumn	// two column layout 双栏排版
	twocolumn
	landscape	// vertical layout 纵向排版

openright	// specify that a new chapter starts on the right side of the odd page奇数页; default to openright for book
openany		// specify a new chaper to start after the previous page; default to openany for report

title :
	titlepapge	// generate a separate title page when using '\maketitle'; default to ~ for report and book
	nottitlepage	// won't ... ; default to ~ for article

flegn	// left justifying左对齐 for interline equation行间公式； center alignment by default for interline equations

draft, final	// set draft mode or final mode
		// draft mode : if the line overflows溢出, a black square will be added at the end of a line
		// final mode : won't prompt for提示 line overflow	
	
```
## Macros
### use macro packages  
> format
```tex
\usepackage[options]{package_name}
```
> example
```tex
\usepackage{tabularx, makecell, mu}
```
# organization of documents
## insert a file at a new page
### format
```tex
\include{filename}
```
### instances
```tex
\include{file}

\include{chapters/file}		// relative path

\include{/home/Bob/file}	// absolute path
```
## insert a file at current page
### format
```tex
\input{filename}
```

