#include<stdio.h>
void main()
{
	int mark1,mark2,mark3,mark4;
	float avg;
	printf("\n\tGRADE OF STUDENTS");
	printf("\n\t*********************************");
	printf("\n\tEnter Mark1 :");
	scanf("%d",&mark1);
	printf("\n\tEnter Mark2 :");
	scanf("%d",&mark2);
	printf("\n\tEnter Mark3 :");
	scanf("%d",&mark3);
	printf("\n\tEnter Mark4 :");
	scanf("%d",&mark4);
	avg=(mark1+mark2+mark3+mark4)/4;
	printf("\n\n\tTotal Marks = %f",avg);
	if(avg>=85)
	{
		printf("\n\n\tGrade A");
	}
	else if(avg>=70)
	{
		printf("\n\n\tGrade B");
	}
	else if(avg>=55)
	{
		printf("\n\n\tGrade C");
	}
	else if(avg>=40)
	{
		printf("\n\n\tGrade D");
	}
	else
	{
		printf("\n\n\tGrade F");
	}
	printf("\n\t*********************************");
}
