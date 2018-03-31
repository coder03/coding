Notes on pointers

1. *argv[]  equivalent to **argv

2. Assume :
	 char *name[] = {"illegal month", "January", "Feb"};
     then
		a. *++name[0] equivalent to **++name, used to access name[1][1] ie 'l'
		b. (*++name)[] used to access "january"
