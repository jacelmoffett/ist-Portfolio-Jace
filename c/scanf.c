#include <stdio.h>

int main()
{
	int age;
	
	float gpa;
	
	char grade;
	
	printf("What's your age? ");
	
	scanf("%i",&age);

	printf("What's your gpa? ");
	
	scanf("%f",&gpa);
	
	printf("What's your letter grade? ");
	
	scanf(" %c",&grade);
	
	printf("age: %i\ngpa: %f\ngrade: %c\n",age,gpa,grade);
	return 0;
}
