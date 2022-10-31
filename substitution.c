#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (argc == 2)
    {
        string key = argv[1];
        bool test1 = true;
        bool test2 = true;
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            if (!isalpha(key[i]))
            {
                test1 = false;
            }
        }
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (key[i] == key[j])
                {
                    test2 = false;
                }
            }
        }
        if (strlen(key) != 26 || !test1 || !test2)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        else
        {
            string plaintext = get_string("plaintext: ");
            printf("ciphertext: ");
            for (int i = 0, n = strlen(plaintext); i < n; i++)
            {
                if (islower(plaintext[i]))
                {
                    int locat = plaintext[i] - 97;
                    printf("%c", tolower(key[locat]));
                }
                else if (isupper(plaintext[i]))
                {
                    int locat = plaintext[i] - 65;
                    printf("%c", toupper(key[locat]));
                }
                else
                {
                    printf("%c", plaintext[i]);
                }
            }
            printf("\n");
            return 0;
        }
    }
}

// store key as a string
// prompt user for a plain text
// if plain text is lower case;
// find the characters location 1-26
// change the charter to the same value in key_value