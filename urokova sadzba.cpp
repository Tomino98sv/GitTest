#include <stdio.h>
#include <math.h>
//roundf(premenna*100)/100
int main(){
	double amount=0;
	double interest=0;
	int year=0;
	double result=0;
	double zisk =0;
	bool testone = false;
	bool testtwo = false;
	bool testthree = false;
	
	printf("Type amount: ");
	scanf("\n%lf", &amount);
	
	printf("Type interest: ");
	scanf("\n%lf", &interest);
	
	printf("Type year: ");
	scanf("\n%d", &year);
	
	
	while(testone==false||testtwo==false||testthree==false)
	{
		if(amount>0&&amount<=100000){
			testone=true;
		}else{
			printf("Wrong input, Type again");
			printf("Type amount: ");
			scanf("\n%lf", &amount);
		}
		
		if(interest>0&&interest<=100){
			testtwo=true;
		}else{
			printf("Wrong input, Type again");
			printf("Type interest: ");
			scanf("\n%lf", &interest);
		}
		
		if(year>0&&year<=20){
			testthree=true;
		}else{
			printf("Wrong input, Type again");  //git test
			printf("Type year: ");
			scanf("\n%d", &year);
		}
	}
	
	for(int a=1; a<=year; a++)
	{
		zisk=((amount/100)*interest);
		zisk-=(zisk/100)*20;
		amount+=zisk;
	}
	
	printf("\n%.2lf", amount);
}
