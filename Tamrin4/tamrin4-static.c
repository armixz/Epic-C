//printf()
#include <stdio.h> 

//main function
int main(){

	//store radius
	float radius = 12.34;
	
	//store result of calculation into the "area" variable
	float area;

	//area calculating 
	area = (radius * radius) * 3.14;

	//print result
	printf("Area is %f\n", area);

	//return True
	return 0;
}
