#include <stdio.h>
#include <stdlib.h>

int main(){

	//allocate variables as pointer
	char *first;
	char *last;

	printf("FIRST:"); //first promp
	
	//int scanf ( const char * format, ... );
	//https://www.cplusplus.com/reference/cstdio/scanf/
	scanf("%ms", &first); //Read formatted data from stdin (%p: pointer address, &first: stored value)
	

	printf("LAST:"); //second promp
	scanf("%ms", &last); //Read last name

	//third promp
	printf("Salam %s %s.\n", first, last);

	free(first);
	free(last);

	return 0;
}


