#include<stdio.h>
#include<stdlib.h>

int validDate(int d,int m,int y)
{
	int maxD=31;
	if(d<1||d>31||m<1||m>12) return 0;
	if(m==4||m==6||m==9||m==11) maxD=30;
	if (m==2)
    {
        if(y%400==0||(y%4==0&&y%100!=0)) maxD=29;
        maxD=28;
    }
	return d<=maxD;
}
void ASCII(char c1, char c2)
{
	int t;
	if (c1<c2){t=c1;c1=c2;c2=t;}
	for(int c = c1; c>=c2;c--)
	{
		printf("%c:%3d, %1Xh\n",c,c,c);
	}
}
int main()
{
	int choice,d,m,y;
	char c1,c2;
	do
	{
		system("cls");
		printf("1-Processing date data\n");
		printf("2-Character data\n");
		printf("3-Quit\n");
		printf("Choose an operation: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
			printf("Date: ");scanf("%d",&d);
	        printf("Month: ");scanf("%d",&m);
	        printf("Year: ");scanf("%d",&y);
	        if (validDate(d,m,y))printf("%d/%d/%d is valid\n",d,m,y);
	        else printf("%d/%d/%d is not valid\n",d,m,y);
	        system("pause");
	        break;
	        
	        case 2:
	        	printf("Input 2 charater: \n");
	        	fflush(stdin);
	        	scanf("%c %c",&c1, &c2);
	        	ASCII(c1,c2);
	        	system("pause");
	        	break;
		}
	}while(choice>0&&choice<3);
	system("pause");
	return 0;
}