
/* CS2211a 2020 */
/* Assignment 04 */
/* Jessica Yang */
/* 251083596 */
/* jyang762 */
/* November 13, 2020 */ 

#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_
    
    /* Structure word*/
   struct word {
        char *charPtr;
        int numChars;
        int posWord;
    };
    typedef struct word word;
    
    /* Structure sentence*/
    struct sentence {
        struct word *wordPtr;
        int line;
        int numWords;
    };
    typedef struct sentence sentence;

#endif //DEFINITIONSH