#include <stdio.h>
#include <stdlib.h>

int main(){

	//allocate variables as pointer
	char *first;
	char *last;

	printf("FIRST:"); //first prompt
	
	//int scanf ( const char * format, ... );
	//(%ms: To use the dynamic allocation conversion specifier. The caller must free() the returned string)
	//(&first: store address where save input)
	//https://man7.org/linux/man-pages/man3/scanf.3.html
	//https://www.cplusplus.com/reference/cstdio/scanf/
	scanf("%ms", &first); //Read formatted data from stdin 
	
	printf("LAST:"); //second prompt
	scanf("%ms", &last); //Read last name

	//third prompt
	printf("Salam %s %s.\n", first, last);

	free(first);
	free(last);

	return 0;
}


