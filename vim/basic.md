# short cuts
```txt
the begining of a line = 0
~ file = gg
the ending of a line = $
~ file = G

half page up = C u
~down = C d

next word = w
previous word = b

locate to row 98 = :98

show history = q:
zsh:1: command not found: s

execute bash command in vim = !bash_command
```
# split screen
``` txt
remain the current panel only = :only

split the screen horizontally = :sp
split the screen vertically = :vs
```
# cp and paste
``` txt
cp the selection = y
cp the current line = yy

cut the selection = d
cut the current line = dd

paste after cursor = p
```
# search
```txt
next = n
previous = N

search ignoring case = /word\c
search considering case = /word\C

show histroy = q/
```
# substitue
```txt
substitute all the 'word' with 'excel' at the current line
	:s/word/excel	/ s: substitue
substitute all the 'word' with 'excel' in the file
	:%s/word/excel	// %: command scope of effect = file

substitute 1st 'work' with 'excel' at the current line
	:s/word/excel/g		// g: the first word in a line
substitute 1st 'work' with 'excel' at the current line(need to confirm)
	:s/word/excel/gc	// c : need to confirm

substitute all the 'word' with 'excel' range from row2 to row11
	:2,11s/word/excel
substitute all the 'word' with 'excel' range from the current line to the last line
	:.,$s/word/excel
substitute all the 'word' with 'excel' range from the current line to the next 2 linw
	:.,+2/word/excel

substitute ignoring case
	:s/word/excel/i // i: ignore case
substitute considering case
	:s/word/excel/I 

substitute all the 'word' with 'excel' in the selection
	select, press :, input s/word/excel 
```

