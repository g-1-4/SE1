#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[10];
	int i,vc=0,cc=0;
	printf("Enter the strings:\n");
	scanf("%s", ch);
	for(i=0;i<10;i++)
	{
		if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
		{
		 vc++;
		}
		else if(ch[i]=' ')
		{
		vc=vc;
		cc=cc;
	    }
		else
		{
		 cc++;
		}
	
	}
	printf("no.of vowels = %d ",vc);
	printf("no.of consonants = %d ",cc);
	
	return 0;
}
