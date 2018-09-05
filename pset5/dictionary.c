/* in this dictionary.c you have to create a function to
   load the dictionary and to check the word and to give the size of the word
 and unload the dictionary */

#include<stdbool.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#include"dictionary.h"

// if you are using hash table define the size to create a dictionary

#define SIZE 1000000

//creating nodes for linked lists

typedef struct node
{
	char word[LENGTH+1];
	struct node*next;
}
node;

// first create hash table

node* hashtable[SIZE] = {NULL};

 // now create hash function as zamyla walkthrough

int hash(const char* word)
{
	int hash = 0;
	int n;
	for(int i=0; word[i] != '\0'; i++)
	{
		if(isalpha(word[i])
			n = word [i] - 'a' + 1;
		else
			n=27;
			
		hash =((hash << 3) + n)% SIZE;
	}
	  return hash;
}

int dictionarySize = 0;

/* load dictionary in to memory. Returns true if successful else false */

bool load(const char* dictionary)
{
	FILE* file = fopen(dictionary, "r");
	if(file==NULL)
		return false;

// create an array to store the word
char word[LENGTH+1];

while(fscanf(file, "%s\n", word)!= EOF)
{
	dictionarySize++;

	node* newWord = malloc(sizeof(node));

	strcpy(newWord->word, word);

	int index = hash(word);

	if(hashtable[index] == NULL)
	{
	
		hashtable[index] = newWord;
		newWord->next = NULL;
	}

	else
	{
		newWord->next = hashtable[index];
		hashtable[index] = newWord;
	}
}


fclose(file);

return true;

}

bool check(const char* word)
{
	char temp[LENGTH+1];
I	int len = strlen(word);
	for(int i=0;i<len;i++)
		temp[i]=tolower(word[i]);
	temp[len]='\0';


	int index = hash(temp);

	if(hashtable[index] == NULL)
	{
		return false;
	}

		node*cursor = hashtable[index];

	while(cursor!=NULL)
	{
		if(strcmp(temp, cursor->word) == 0)
		{
			return true;
		}
		cursor = cursor->next;
	}

	return false;
}

// returns no.of words if successful else 0

unsigned int size(void)
{
	if(dictionarySize > 0)
	{

		return dictionarySize;
	}

	else
		return 0;
}
// unload dictionary from memory. True if successful else false.
bool unload(void)
{

 int index = 0;
	
	while(index<SIZE)
	{

		if(hashtable[index] == NULL)
		{

			index++;
		}
		
		else
		{
			while(hashtable[index]!=NULL)
			{
				node* cursor = hashtable[index];
				hashtable[index] = cursor->next;
				free(cursor);
			}
			
			index++;
		}
	}
	
	return true;

}

