/* dictioanry.h
*
*
CS-50-problem set5
*
*
Creating a dictionary header file */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include<stdbool.h>

// the maximum length of the word
// the given example in file is pneumonoultramicroscopicsilicovolcanoconiosis

#define LENGTH 45

// Check if the given word is there in the dictionary if it is we have to return true else false
// for this we need to use bool

bool check(const char* word);

// the second function is you have to allocate memory to the dictionary i;e. load the dictionary.
// returns true if it is successful else false

bool load(const char*dictionary);

/* you have to write a function such that it should 
return the number of words in dictionary if loaded else 0 */

unsigned int size(void);

// the last one is you have to unload the dictionary and free up the space

bool unload(void);

#endif // DICTIONARY_H
 


