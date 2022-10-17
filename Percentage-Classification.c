//program for percentage of students
#include<stdio.h>
main()
{
	float percentage;
	printf("Enter Percentage of the Student: ");
	scanf("%f",&percentage);
	if(percentage>=75 && percentage<=100)
	{
		printf("Distinction");
	}
	else if(percentage>=60 && percentage<75)
	{
		printf("1st Class");
	}
	else if(percentage>=45 && percentage<60)
	{
		printf("2nd Class");
	}
	else if(percentage>=35 && percentage<45)
	{
		printf("3rd Class");
	}
	else 
	{
		printf("Fail");
	}
}
