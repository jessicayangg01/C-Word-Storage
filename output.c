
/* CS2211a 2020 */
/* Assignment 04 */
/* Jessica Yang */
/* 251083596 */
/* jyang762 */
/* November 13, 2020 */ 

#include <stdio.h>
#include <string.h>
#include "definitions.h"

/* This function will output sentences word by word and line by line */
void outputSentences(struct sentence *sentences){
   
     // formating
    printf("\n\n");
    printf("This is all the words printed out one line at a time: \n");
    
    // will loop through each word and print it on a new line 
    int line = 0;
    while(sentences[line].wordPtr){ // while the sentence points to a word structure exists
        int word = 0;
        while(sentences[line].wordPtr[word].charPtr){ // while the word points to a char exists
            printf("%s\n", sentences[line].wordPtr[word].charPtr); // print the next word
            word++;
        }
        line++;
    }
    
    // formating 
    printf("\n\n");
    printf("This is all the words printed out on the same line as entered:");
    
    // will loop through each sentence and print the sentence line by line
    line = 0;
    while(sentences[line].wordPtr){ // while the sentence points to a word structure exists
        int word = 0;
        printf("\n");
        while(sentences[line].wordPtr[word].charPtr){ // while the word points to a char exists
            printf("%s ", sentences[line].wordPtr[word].charPtr); // print the next word
            word++;
        }
        line++;
    }
    printf("\n\n");
}

/* This function will prompt user for a word to search and print out which line and position the word exists*/
void searchWord(struct sentence *sentences){
    
    // will continue to prompt the user for an input
    char inputString[1000];
    do{
        printf("\nEnter a word to search: ");
        fgets(inputString, sizeof inputString, stdin);
        if (strlen(inputString) == 1) return; // stops when user inputs an empty string
        if(inputString[strlen(inputString)-1] == '\n') inputString[strlen(inputString)-1] = '\0'; // chops off the new line
        
        // will search through every word in sentence 
        int line = 0;
        while(sentences[line].wordPtr){ // checks if sentence contains a word
            int word = 0;
            while(sentences[line].wordPtr[word].charPtr){ // checks if word contains a char
                if(strcmp(sentences[line].wordPtr[word].charPtr, inputString) == 0){ // if the words we are comparing are the same then print the word, line and position
                    printf("%s found in line %d position %d \n", sentences[line].wordPtr[word].charPtr, sentences[line].line, sentences[line].wordPtr[word].posWord);
                }
                word++;
            }
            line++;
        }
        
        
    } while (strlen(inputString) != 0);
    
}
