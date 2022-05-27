/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>
#include <assert.h>
int qualityPoint(int average); //declaring the qualityPoint fuction 
int main (){
	
	int average;
	
	
	printf("enter student's average: ");	//prompt the user to input average
	scanf("%d", &average);
	
	assert(qualityPoint(95) == 4);	//middle values
	assert(qualityPoint(85) == 3);
	assert(qualityPoint(75) == 2);
	assert(qualityPoint(65) == 1);
	assert(qualityPoint(30) == 0);
	
	assert(qualityPoint(100) == 4);	//boundary values
	assert(qualityPoint(90) == 4);
	assert(qualityPoint(89) == 3);
	assert(qualityPoint(80) == 3);
	assert(qualityPoint(79) == 2);
	assert(qualityPoint(70) == 2);
	assert(qualityPoint(69) == 1);
	assert(qualityPoint(60) == 1);
	assert(qualityPoint(0) == 0);
	
	printf("return value is = %d", qualityPoint(average)); //display the returning value
	
	return 0;
}

int qualityPoint(int average){	//implementing the function to perform how the average works
	
	int result;	//declaring a variable to assign the return value
	
	if ((average >= 90) && (average <= 100)){	//value 4 will return when the average is in between 90-100
		result = 4;
	}
	else if ((average >= 80) && (average <= 89)){	//value 3 will return when the average is in between 80-89
		result = 3;
	}
	else if ((average >= 70) && (average <= 79)){	//value 2 will return when the average is in between 70-79
		result = 2;
	}
	else if ((average >= 60) && (average <=69)){	//value 1 will return when the average is in between 60-69
		result = 1;
	}
	else{	//value 0 will return when the average is lower than 60
		result = 0;
	}
	
	return result;	//return the value within the result variable
}

