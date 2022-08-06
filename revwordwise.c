#include<stdio.h>
#include<string.h>
void revword(char *s);
int j=0;
int main()
{
	char s[100]="love from bhagalpur and munger";
	int i;
	int count=0;
	puts(s);
	
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		count++;
	}
	printf("%d\n",count);
	
	strrev(s);
	puts(s);
	
	for(i=0;i<=count;i++)
	{
		revword(s+j);
	}
	puts(s);
	
}
void revword(char *s)
{
	int k;
	char temp;
	int i=0;
	for(k=0;s[k]!=' '&&s[k]!='\0';k++,i++);
	printf("%d\n",i);
	j=j+i+1;
	
	for(k=0;k<i/2;k++)
	  {
	  	temp=s[k];
	  	s[k]=s[i-k-1];
	  	s[i-k-1]=temp;
	  }
}
