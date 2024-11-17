#include <string.h>
#include<stdio.h>

int main(void){

FILE *fp = NULL;
int c;
fp = fopen("Hello.cjc","r");
while((c=fgetc(fp))!=EOF){
	
	char str1[50];
	sprintf(str1, "%d", c);
	char str2[20] = "Hello";
	if(strcmp(str1,str2)==0){
	
		printf("%s", str1);
	}
	else{
		printf("no");
	}



}

fclose(fp);


char s[]="aaaaaQaa";
int i;
for(i=0;(s[i]!='Q' && s[i]!='\0');i++){
printf("%c", s[i]);
}
printf("\n");
return 0;
}
