#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void PTbac2(double a, double b, double c)
{
	double delta;
	if(a==0)
	{
		if(b==0&&c!=0)printf("No Root!\n");
		else if(b==0 && c==0)printf("Root in range of Real Number!\n");
		else printf("Equation have one root: x = %lf\n",-c/b);
	}
	else if(a!=0)
	{
	delta = b*b-4*a*c;
	if(delta < 0)printf("None of root\n");
	else if(delta==0)printf("Equation have double root: X = %lf\n",-b/2/a);
	else
	{
		printf("Equation have two root: \n");
		printf("x1 = %lf\n",(-b-sqrt(delta))/2/a);
		printf("x2 = %lf\n",(-b+sqrt(delta))/2/a);
	}
	}
}

double bank(double deposit, double rate, double year)
{
	return deposit*pow((1+rate),year);
}

int main()
{
	double deposit, rate, year, a,b,c;
	int choice;
	do
	{
		system("cls");
		printf("1-Quadratic equation\n");
		printf("2-Bank deposit problem\n");
		printf("3-Quit\n");
		printf("Choose an operation: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
			printf("Enter a,b,c such that ax^2 + bx + c = 0\n");
			fflush(stdin);
			scanf("%lf %lf %lf",&a,&b,&c);
			PTbac2(a,b,c);
			system("pause");
			break;
			
			case 2:
				do
				{
					system("cls");
				printf("Enter deposit, rate and year: \n");
				scanf("%lf %lf %lf",&deposit,&rate, &year);
				if (deposit <= 0 ) {printf("Deposit must be positive!\n");system("pause");}
		    	if (year <= 0 ) {printf("The number of years must be positive!\n");system("pause");}
		    	if (rate <= 0 || rate > 0.1) {printf("Rate must be positive but less than or equal to 0.1!\n");system("pause");}
				}while(year<0||rate<0||rate>0.1||deposit<0);
				printf("Amount = %lf\n", bank(deposit,rate,year));
				system("pause");
				break;
		}
	}while(choice>0&&choice<3);
	system("pause");
	return 0;
}