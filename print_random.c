#include "random.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Function for the 6 words
void rand_string(char *str,size_t size){

    // loops through each position in the string
 for (size_t i=0; i<size; i++){
    // calls the randchar function from random.c and sets the empty string value to that random alphabet for the size i
    str[i]=randchar();
 }
 // to mark the end of the string
 str[size] = '\0';
}


//Given Project code
// this function takes the size to allocate the memory as the size

char* rand_string_alloc(size_t size)
{
    // makes a memory for the char and then the +1 for empty string
     char *s = malloc(size + 1);

     // checks if the memory was created or not
     if (s) {
        // if created then it calls the rand_string function to get random char with the memory point and the size
         rand_string(s, size);
     }
     // returns the empty point and returns to 0 to exit the code
     return s;
}

int main(){
    // the current time
    srand(time(0));

    //sets the size of the string 
    size_t size = 7;

    // the allocation memory function and to get the 7 char word
    char *randword = rand_string_alloc(size);

    // checks if the word is not empty and then prints the word
    if(randword){
        // it prints the word as a string
        printf("Ramdom Word: %s\n",randword);
        // frees the allocated memory
        free(randword);
    }
    // returns 0 to exit the code
    return 0;
}