# C-Word-Storage
Structures and dynamic memory in a C program.


Performing any word processing capability requires the program to store an indeterminate amount of data for retrieval and editing.
This assignment will provide an exploration of what it takes to manage the input and storage of this type of data.
The amount of data is unknown, and the program must be able to handle any volume of data. This means the program will have to allow for any amount of text.
The program will allow for any number of lines of text, which also means it must handle any number of words per line of text.

Your program must be written using dynamically allocated memory to process anywhere from one to an unlimited number of lines of text. Each line must be able to process anywhere from one to an unlimited number of words. Therefore, using a set size array of characters or a set size array of lines is not viable. No constant values can by used in the array declarations.

The mechanism we will use to store these words and sentences will be based on specific structures. The structures must be defined using typedef in order to create variable aliases for each structure. Each structure can ONLY contain the three elements listed in each – do NOT add any other elements to either structure. 
