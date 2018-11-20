#include<stdio.h>

/*
	a
*/

char *dr_quin()
{
	return "#include<stdio.h>%c%c/*%c%ca%c*/%c%cchar *dr_quin()%c{%c%creturn %c%s%c;%c}%c%cint main()%c{%c%c/*%c%c%cb%c%c*/%c%cchar*a = dr_quin();%c%cprintf(a,10,10,10,9,10,10,10,10,10,9,34,a,34,10,10,10,10,10,9,10,9,9,10,9,10,9,10,9,10,9,10);%c%creturn (0);%c}";
}

int main()
{
	/*
		b
	*/
	char*a = dr_quin();
	printf(a,10,10,10,9,10,10,10,10,10,9,34,a,34,10,10,10,10,10,9,10,9,9,10,9,10,9,10,9,10,9,10);
	return (0);
}