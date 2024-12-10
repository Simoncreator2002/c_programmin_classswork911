#include<stdio.h>
#include<stdbool.h>
#include <math.h>
/*
int main()
{
	//first git session
/*	int x =100;
	int y =3;
	char k='B';
	float q = x/y;
	double b = 2.33434;
	
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%c\n",k);
	printf("%f\n",q);
	printf("%lf\n",b);
	
	int x=100;
	x=2000;
	printf("the value of x is %d",x);
	
	
	int y= 10;
	int k= 3;
	printf("%d",(y%k));
	int h=3;
	h++;
	printf("%d/n",h); 
	
	bool k = false;
	printf("%d",k);
	
	
	int m =200;
	int n= 300;
	if (m==n)
	{
		printf("these two variables are equal");
		
	}
	else{
		printf("the variables are not equaal");
	}
	*/
	
	//dauy two
	/*char name[]="ivan";
	char country[]="uganda";
	int country_code=256;
	float a = 100.24;
	float b = 200.89;
	

	printf("i am %s ,am from %s , my country_code is %d and my weight is %f",name,country, country_code,(a+b));
	*/
	
	//conditionals in c programming
	
	
	//	char name[]="256";
	//	printf("%s",name
	//	);
		
	/*	
	int a=20 , h=100;
	if(a>=h)
	{
		printf("a is eequal to h");
	}
	else{
		printf("they are not equal");
	}  */
	
	
	//day three
/*
	int score=95;
	if(score>80)
	{
		printf("your grade is a high distinction");
		
	}
	else
	{
		printf("your grade is a pass");
	}
	*/
	/*
	int x=20;
	if(x>=90)
	{
	printf("hiogh distinction");	
	}
	else if(x>=80)
	
	{
		printf("distinction");
	}
	else if(x>=60)
	{
		printf("credit");
	}
	else if(x>=50)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	*/
	
	//switch statement

/*
	int k =96;
	switch(k)
	{
		case 1:
		printf("today is monday");
		case 2:
		printf("today is tuesday");
		case 3:
		printf("today is wednesday");
		default:
		printf("no such a day of the weeek");
	}
	*/
	/*
	
int x= 30;
	if (x>=90)
	{
		printf("this is a high distinction");
	
	if(x>=80)
	{
		printf("distinction");
		if(x>=60)
		{
			printf("credit");
			if(x>=50)
			{
				printf("pass");
			
				
			}
		}
	}
}
else{
	printf("fail");	
	}

	
	*/
	
	/*
	int x=48;
	if(x>=40&&x<=50)
	{
		printf("hello uganda");
		
	}
	*/
	///day four
	/*
	int age;
	
	printf("please input your age:");
	
	scanf("%d",&age);
	
	if(age>60)
	{
		printf("your old");
		
	}
	else if(age>=18 && age<=60)
	{
		printf("your an adult");
	}
	else{
		printf("your a kid ");
	}*/
/*
	int x=90;
	if(x>=18&&x<=60)
	{
		printf("this is an adult person");
	
		if(x==5)
		{
			printf("plate");
		}
		else 
		{
			printf("your an old person");
		}

    }
	else
	{
		printf("this is a child");
	}
*/
/*
int i=1;
int  num1=0,num2=2;
while(num2<100){
int sum=num1+num2;
printf("the sum of %d and %d is %d \n",num1,num2,sum);
num2=num2+2;
num1++;

}
*/
/*int i=0;
while(i<5){
  int k= pow(3, i);
  printf("3 raised to the power of %d is %d\n", i,k);
i++;
}
*/
/*
int i=0;
while(i<13){
  int k=i*3;
  printf(" %d times is %d \n",i,k);
i++;
}*/


/// how to print power of three without the math header file
/*
int i=2;
while(i<24)
{
	printf ("the powers of 2 are %d\n",i);
	i=i*2;
}
*/

//do while
/*
int x, y, sum;
x=0,y=0;
do
{
	sum=x+y;
	printf("the sum of %d and %d is %d\n ",x,y,sum);
	x++;
}
while(sum<=10);

*/
/*
int i=0;
int	x;
do
{
	x=i*3;
	printf("%d\n",x);
	i++;
	

}
while(x<16); m  
*/
/*
int x;
int i;
for(i=0;i<6;i++)
{
	x=i*3;
	printf("%d\n",x);
}
*/
/*
char name[50];
printf("please enter your full name\n");
scanf("%s",&name);
printf("%s",name);*/
  /*
    int i, j;
    for(i = 0; i <= 2; ++i) {
        printf("Outer loop: %d\n", i);

        // Initialize j here for the inner loop
        for(j = 1; j <= 3; ++j) {
            printf("Inner loop: %d\n", j);
        }
    }
*/
/*
void info();
int display();

int main()
{
	int i=0;
	while(i<2)
	{
	
    printf("the sum  is %d \n",display(10,02));
	info(122334,"simon");
	i++;
}

	return 0;
}

void info(int student_number,char name[])
{
	printf("my name is %s \n",name);
	printf(" my student number is %d \n",student_number);
}
int display(int k, int y)
{
	int sum =y+k;
	return sum;

}

*/
/*
char *label();
double sum();
int main()
{
    

	printf("my name is %s \n",label("simon"));
	printf("the sum  is %.2f \n",sum(3.2,4.2));
	return 0;
}
char *label(char name1[])
{
	return name1;
}
double sum(double k , double l)
{
	
	 return k+l;
}
*/
int main()
{
	char name[50];
	int x[50];
	name[50]="isbat";
	
	int i;
	int x_array[]={1,2,3,4,5,10};
	for(i=0;i<=5;i++)
	{
		printf("%d \n",x_array[i]);
	}
	
	return 0;
	
	
}
