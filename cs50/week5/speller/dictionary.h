// Declares a dictionary's functionality

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdbool.h>

// Maximum length for a word
// (e.g., pneumonoultramicroscopicsilicovolcanoconiosis)
#define LENGTH 45

// Buffer size.
#define S 4096 * 2

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Prototypes
bool check(const char *word);
unsigned int hash(const char *word);
void initialize_table(void);
bool load(const char *dictionary);
unsigned int size(void);
bool unload(void);

#endif // DICTIONARY_H
