// use the call to include the funtion randchar from the .h file to .c for random

#include "random.h"
#include <stdlib.h>


// the function it self randchar its object is to generate a random alphabatword each time the function is called.
char randchar() {

    // it is a string array but divided into char and 1 space for the empty string
    char alpha[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // it return the randomly generated alphabat with the rand function
    return alpha[rand() %26];

}
