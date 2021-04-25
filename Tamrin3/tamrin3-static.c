#include <stdio.h>

int main(){

	//allocate variables
	char first[25];
	char last[25];

	printf("FIRST:"); //first promp
	
	//int scanf ( const char * format, ... );
	//https://www.cplusplus.com/reference/cstdio/scanf/
	scanf("%s", first); //Read formatted data from stdin (%s: string of characters)
	

	printf("LAST:"); //second promp
	scanf("%s", last); //Read last name

	//third promp
	printf("Salam %s %s.\n", first, last);


	return 0;
}
