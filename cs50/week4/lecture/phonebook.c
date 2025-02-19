#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    // Number of person in phonebook.
    int n = 2;
    for (int i = 0; i < n; i++)
    {
        char *name = get_string("Name: ");
        char *number = get_string("Number ");
        fprintf(file, "%s, %s\n", name, number);
    }

    fclose(file);
}
