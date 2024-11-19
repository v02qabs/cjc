#include <string.h>
#include<stdio.h>

void fread_for(char *p, int n){
	while(n--)
		putchar(*p++);
	putchar('\n');

}



int main(void){
FILE *fp = NULL;
int c;
int pos;
char ss[100];
fp = fopen("Hello.cjc","r");
int l=0;
fscanf(fp,"%s", ss);
fseek(fp, 0, SEEK_END);
pos = ftell(fp);

fclose(fp);
printf("[%d]",pos);
fread_for(ss,pos);
char s[]="aaaaaQaa";
int i;
for(i=0;(s[i]!='Q' && s[i]!='\0');i++){
printf("%c", s[i]);
}
printf("\n");
return 0;
}
