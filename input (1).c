
/* CS2211a 2020 */
/* Assignment 04 */
/* Jessica Yang */
/* 251083596 */
/* jyang762 */
/* November 13, 2020 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definitions.h"

int numline =0; // keeps track of the sentence number
int posWord =0; // keeps track of the word number
int numChars =0; // keeps track of the char number
char inputString[100]; // stores the users input

struct sentence *sentencePtr; // sentence structure stores all information


/* Continues to prompt user input and stores it in the sentence structure */
struct sentence* userInput()
{
    do{ 
        // prompts for user input and stores it in input string
        printf("Enter a string: ");
        fgets(inputString, sizeof inputString, stdin);
        // terminates if user inputs an empty string.
        if (strlen(inputString) == 1) break;
        
        // allocates +1 memory for the sentence pointer since a new sentence is added
        sentencePtr = (struct sentence*) realloc (sentencePtr, (numline+1)*sizeof(struct sentence));
        posWord =0; 

        // loop through and add each word to the pointer
        char * currentWord = strtok(inputString, " "); 
        while( currentWord != NULL ) {
            numChars = strlen(currentWord); // collects the number of chars
            if(currentWord[numChars-1] == '\n'){ // chops off new line char if it is at the end of the sentence
                currentWord[numChars-1] = '\0';
                numChars--;
            }
            
            // allocates +1 memory for the word pointer since a new word is added
            sentencePtr[numline].wordPtr = (struct word*) realloc (sentencePtr[numline].wordPtr, (posWord+1)*sizeof(struct word)); // here?? 
            // allocates number of chars memory for the char pointer since a new word is added
            sentencePtr[numline].wordPtr[posWord].charPtr = (char*)malloc(numChars*sizeof(char)); 
            strcpy(sentencePtr[numline].wordPtr[posWord].charPtr,currentWord); // stores the word inside the char poitner
            
            // stores the number of chars and position of word in the word structure
            sentencePtr[numline].wordPtr[posWord].numChars = numChars;
            sentencePtr[numline].wordPtr[posWord].posWord = posWord+1;
           
            // moves onto the next word
            posWord ++; 
            currentWord = strtok(NULL, " ");
            if (currentWord==NULL) break;
        }
        
        // stores the line number and number of words into the sentence structure
        sentencePtr[numline].line = numline+1;
        sentencePtr[numline].numWords = posWord;
        numline++; // moves onto the next line

    }while (strlen(inputString)!=0);
    
    return sentencePtr;
}

/* Frees the memory allocated for sentence Ptr*/
void freeStrutures(){
    free(sentencePtr);
}



