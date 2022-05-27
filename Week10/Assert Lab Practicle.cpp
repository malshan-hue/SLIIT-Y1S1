#include <stdio.h>
#include <assert.h>
char findGrade(float mark); //Function declarations
void testGrade();
int main(void)
{
	
	float mark;
	printf("Enter mark of the module : ");
	scanf("%f", &mark);
	testGrade();
 	printf("Grade = %c\n", findGrade(mark));
	return 0;
}
char findGrade(float mark) //Function implementation=
{
	if (mark < 0){
		return  'X';	
	}
	else if (mark < 40){
		return  'F';
	}
	else if (mark < 60){
		return  'C';
	}
	else if (mark < 75){
		return  'B';
	}
	else if (mark <= 100){
		return  'A';
	}
	else{
		return  'X'; // Error (invalid mark)
	}
		
}
void testGrade()
{
	assert(findGrade(20) == 'F');
	assert(findGrade(50) == 'C');
	assert(findGrade(70) == 'B');
	assert(findGrade(78) == 'A');
	assert(findGrade(-10) == 'X');
	assert(findGrade(110) == 'X');
	// boundary conditions
	assert(findGrade(0) == 'F');
	assert(findGrade(40) == 'C');
	assert(findGrade(60) == 'B');
	assert(findGrade(75) == 'A');
	assert(findGrade(100) == 'A');
	printf("grade() unit tests passed\n");
}

