#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int intRandom(int min, int max)
{
	return(min+rand()%(max+1-min));
}

int main()
{
 srand((unsigned int)time(NULL));
 int x,y,total,count=1;
 count =1 ;
 printf("Ball Lottery\n");
 printf("============\n");
 do
 {
 	printf("Enter total: ");
 	scanf("%d",&total);
 }while(total<3||total>19);
 system("cls");
 printf("Ball Lottery\n");
 printf("============\n");
 printf("Total sought: %d\n", total);
 do
 {
 	x = intRandom(1,10);
 	do y = intRandom(1,10); while(x==y);
 	printf("Result of picks %d: %d + %d\n",count, x,y);
 	count ++;
 }while(x+y!=total);
 printf("You got your total in %d throw%c\n",count-1,(count-1)==1?' ':'s');
 system("pause");
 return 0;
}