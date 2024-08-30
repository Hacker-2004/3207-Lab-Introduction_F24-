// use the call to include the function randchar from the .h file to .c for random

#include "random.h"
#include <stdlib.h>


// the function itself randchar its object is to generate a random alphabetic word each time the function is called.
char randchar() {

    // it is a string array but divided into char and 1 space for the empty string
    char alpha[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // it returns the randomly generated alphabet with the rand function
    return alpha[rand() %26];

}
