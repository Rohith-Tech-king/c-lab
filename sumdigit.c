#include<stdio.h>

int main()
{
	int num=0, sum=0,digit;
	
	printf("enter a 5-digit number:");
	scanf("%d",&num);
	
	//check if its really a 5-digit number
	if(num<1000||num>99999){
		printf("invalid input! please enter a 5-digit number.");
		return 0;
	}
//extract and sum digits
while (num>0){
    digit = num % 10;//get last digit
	sum+=digit;          //add it to sum
	num/=10;             //remove last digit
}	
printf("sum of 5-digit:%d\n",sum);
return 0;
}
