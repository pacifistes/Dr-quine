#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define CREATE(name) fopen(name, "w+")
#define PRINT(file, a, i) fprintf(file,a,10,10,10,10,34,34,10,10,10,10,10,10,9,i-1,10,9,10,9,10,9,34,a,34,10,9,10,9,9,10,9,34,34,10,9,9,34,34,10,9,9,34,34,10,9,9,10,9,9,10,9,9,10,9,10,9,10,9,9,34,34,10,9,9,34,34,10,9,9,10,9,9,10,9,9,10,9,10,9,10,9,9,10,9,10,10);
#define DELETE(file) fclose(file)

int main()
{
	int i = 5;
	char file_name[30];
	char cmd[200];
	char *a = "#include<stdio.h>%c#include<string.h>%c#include<stdlib.h>%c%c#define CREATE(name) fopen(name, %cw+%c)%c#define PRINT(file, a, i) fprintf(file,a,10,10,10,10,34,34,10,10,10,10,10,10,9,i-1,10,9,10,9,10,9,34,a,34,10,9,10,9,9,10,9,34,34,10,9,9,34,34,10,9,9,34,34,10,9,9,10,9,9,10,9,9,10,9,10,9,10,9,9,34,34,10,9,9,34,34,10,9,9,10,9,9,10,9,9,10,9,10,9,10,9,9,10,9,10,10);%c#define DELETE(file) fclose(file)%c%cint main()%c{%c%cint i = %d;%c%cchar file_name[30];%c%cchar cmd[200];%c%cchar *a = %c%s%c;%c%cif (i < 0)%c%c%creturn (0);%c%cif (i >= 0 && !strcmp(%cSully.c%c, __FILE__)) {%c%c%csprintf(file_name, %cSully_%%d.c%c, i);%c%c%csprintf(cmd, %cclang -Wall -Wextra -Werror %%s -o Sully_%%d ; ./Sully_%%d%c, file_name, i, i);%c%c%cFILE* file = CREATE(file_name);%c%c%cPRINT(file, a,i+1);%c%c%cfclose(file);%c%c}%c%celse if (i > 0) {%c%c%csprintf(file_name, %cSully_%%d.c%c, i-1);%c%c%csprintf(cmd, %cclang -Wall -Wextra -Werror %%s -o Sully_%%d ; ./Sully_%%d%c, file_name, i-1, i-1);%c%c%cFILE* file = CREATE(file_name);%c%c%cPRINT(file, a,i);%c%c%cfclose(file);%c%c}%c%cif (i > 0)%c%c%csystem(cmd);%c%creturn (0);%c}%c";
	if (i < 0)
		return (0);
	if (i >= 0 && !strcmp("Sully.c", __FILE__)) {
		sprintf(file_name, "Sully_%d.c", i);
		sprintf(cmd, "clang -Wall -Wextra -Werror %s -o Sully_%d ; ./Sully_%d", file_name, i, i);
		FILE* file = CREATE(file_name);
		PRINT(file, a,i+1);
		fclose(file);
	}
	else if (i > 0) {
		sprintf(file_name, "Sully_%d.c", i-1);
		sprintf(cmd, "clang -Wall -Wextra -Werror %s -o Sully_%d ; ./Sully_%d", file_name, i-1, i-1);
		FILE* file = CREATE(file_name);
		PRINT(file, a,i);
		fclose(file);
	}
	if (i > 0)
		system(cmd);
	return (0);
}
