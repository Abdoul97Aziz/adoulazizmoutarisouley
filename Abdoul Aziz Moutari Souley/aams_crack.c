#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: crack <hash>\n");
        return 1;
    }
    const int characters_count = 53;
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];
    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';

    char key[5] = "\0\0\0\0\0";

    for (int a = 0; a < characters_count; a++)
    {
        for (int b = 0; b < characters_count; b++)
        {
            for (int c = 0; c < characters_count; c++)
            {
                for (int d = 0; d < characters_count; d++)
                {
                        key[0] = characters[a];
                        key[1] = characters[b];
                        key[2] = characters[c];
                        key[3] = characters[d];

                        if(strcmp(crypt(key, salt), hash) == 0)
                        {
                            printf("%s\n",key);
                            return 0;
                        }
                    }
                }
            }
        }
        printf("Password couldn't be cracked!");
        return 2;
    }


