
/* CS2211a 2020 */
/* Assignment 04 */
/* Jessica Yang */
/* 251083596 */
/* jyang762 */
/* November 13, 2020 */ 

#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"
#include "header.h"


int main()
{
    struct sentence *sentences = userInput(); // stores the users input in a sentence structure
    outputSentences(sentences); // outputs the sentences 
    searchWord(sentences); // search word function
    freeStrutures(); // frees the memory allocated for the sentences
    
}



