#include<stdio.h>
#include<string.h>
void main()
{
	char s[20]="infobell";
	char t;
	int i,len;
	len=strlen(s);
        printf("before=%s\n",s);
	for(i=0,len=len-1;i<len;i++,len--)
	{
		t=s[i];
		s[i]=s[len];
		s[len]=t;
	}
	printf("after=%s\n",s);
}
