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
 do
 {
 	printf("Enter total: ");
 	scanf("%d",&total);
 }while(total<2||total>12);
 system("cls");
 printf("Dice Thrower\n");
 printf("============\n");
 do
 {
 	x = intRandom(1,6);
 	y = intRandom(1,6);
 	printf("Result of throw %d: %d + %d\n",count, x,y);
 	count ++;
 }while(x+y!=total);
 printf("You got your total in %d throw%c\n",count-1,(count-1)==1?' ':'s');
 system("pause");
 return 0;
}