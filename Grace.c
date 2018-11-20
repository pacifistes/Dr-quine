#include<stdio.h>

/*
	Grace
*/

#define CREATE(name) fopen(name, "w+")
#define PRINT(file, a) fprintf(file,a,10,10,10,9,10,10,10,34,34,10,10,34,34,34,a,34,10,10);
#define GRACE int main() { FILE* file = CREATE("Grace_kid.c"); char *a = "#include<stdio.h>%c%c/*%c%cGrace%c*/%c%c#define CREATE(name) fopen(name, %cw+%c)%c#define PRINT(file, a) fprintf(file,a,10,10,10,9,10,10,10,34,34,10,10,34,34,34,a,34,10,10);%c#define GRACE int main() { FILE* file = CREATE(%cGrace_kid.c%c); char *a = %c%s%c; PRINT(file, a); fclose(file);}%c%cGRACE"; PRINT(file, a); fclose(file);}

GRACE