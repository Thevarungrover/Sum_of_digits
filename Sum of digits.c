#include<stdio.h>
SumOfDigits(int num); //functiion declaration
main()
{
	int num,sum;
	printf("Enter the number to get its sum :");
	scanf("%d",&num);
	sum=SumOfDigits(num);
	printf("The sum of digits of given number is %d",sum);
	return 0;
}
int SumOfDigits(int num)
{
	int sum;

	if(num == 0)
	return 0;
	return ((num%10) + SumOfDigits(num/10));

}
