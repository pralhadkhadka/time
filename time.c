// A program to convert hour into minute and second
#include<stdio.h>
void main()
{
	float x,y,z;
	printf("enter time in hour=\n");
	scanf("%f",&x);
	y=x*60;
	printf("the time in minutes is=%f\n",y);
	z=x*60*60;
	printf("the time in seconds=%f\n",z);
}
