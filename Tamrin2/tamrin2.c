#include <stdio.h>

int main(){
	
	int a = 5; //a is an integer type(int)
	
	float b = 3.141529; //b is a float type(float)
	
	char c[9] = "Salam git"; //c is a character type(char)_ empty array ([9] = string size)
	

	//int printf(const char *format, ...); 
	//Print formatted data to stdout
	//https://www.cplusplus.com/reference/cstdio/printf/
	
	printf("%d is integer\n", a);
	printf("%f is float\n", b);
	printf("%s is char\n", c);

	return 0;
}
