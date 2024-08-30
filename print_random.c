#include "random.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


// the main where the code is going to output the solution
int main()
{
    // a variable for the for loop
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

    // prints the random word
	printf("Today's random word: ");

    // for loop to get the random word for 7 times
	for(a=0;a<7;a++)
		putchar( randchar() );

    // after the end of the for loop the \n as an empty string
	putchar('\n');

// exits the code.
	return(0);
}