# auto
- used to modify修饰 local-variable局部变量
- where to store: ram
- lifetime: generated -> function

## example
```c
auto int month ;		/* def month: $sym, int, auto deleted; if external or local, 'auto int month' = 'int month' */
```

# register
- used to modify local-variable局部变量
- where to store: register
- lifetime: generated -> manualy deleted

## example
```c
register int month ;	/* def month: $sym, int, saved in register*/
```

# static
- used to modify:
	- local variable
	- gloabl variable, whose function scope = current file
- where to store: ram or current file
- lifetime: generated -> manualy deleted

## example
```c
/* def global var */
static int count=10 ;	/* def count: 10, int, global to current file */
int HeHe = 10 ; /* def HeHe: 10, int, global to all file */
```

# extern
- declare external variable/function

