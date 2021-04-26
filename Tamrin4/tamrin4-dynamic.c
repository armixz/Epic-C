//printf()
#include <stdio.h>

//define a value for PIE
#define PIE 3.14

//main function
int main(){

  	//store radius
  	float radius;

	//store result of calculation into the "area" variable
	float area;

	//prompt for getting radius from input
	printf("Enter Radius:");
	
	//get radius from input
	scanf("%f", &radius);

	//area calculating
	area = (radius * radius) * PIE;

	//print result
	printf("Area is %f\n", area);

	//return True
	return 0;
}
