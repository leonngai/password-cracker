//this program cracks passwords up to 5 characters long utilizing the one way hash function
//note: When a user logs into these systems by typing a username and password, the latter is encrypted with the very same hash function, and the result is compared against the username’s entry

#define _XOPEN_SOURCE
#include <unistd.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    //error message for incorrect number of command line arguments
    if (argc != 2)
    {
        printf("Error! You must only enter one command line argument.");
        return 1;
    }

    //takes in the command line argument and initializes the proper salt value for testing
    string input = argv[1];
    char salt[2];
    salt[0] = input[0];
    salt[1] = input[1];

    char pw[6] = "a";
    char temp[2] = "a";

    //test for all possible 1 character passwords
    for (int i = 0; i < 52; i++)
    {
        //creates hashed password using the characters and salt value given
        char *hashed = crypt(pw, salt);

        //compares hashed password to input password, if equal then program outputs characters used to create the hash
        if (strcmp(hashed, input) == 0)
        {
            printf("%s %s", pw, hashed);
            return 0;
        }

        if (pw[0] == 'z')

        {
            pw[0] = '@';
        }

        pw[0]++;

        if (pw[0] == '[')
        {
            pw[0] = 'a';
        }

    }

    //appends another character to the end of test password
    strcat(pw, temp);

    //test for all possible 2 character passwords
    for (int j = 0; j < 52; j++)
    {
        for (int i = 0; i < 52; i++)
        {
            char *hashed = crypt(pw, salt);
            if (strcmp(hashed, input) == 0)
            {
                printf("%s %s", pw, hashed);
                return 0;
            }

            if (pw[0] == 'z')
            {
                pw[0] = '@';
            }

            pw[0]++;

            if (pw[0] == '[')
            {
                pw[0] = 'a';
            }

        }

        if (pw[1] == 'z')
        {
            pw[1] = '@';
        }

        pw[1]++;

        if (pw[1] == '[')
        {
            pw[1] = 'a';
        }
    }

    strcat(pw, temp);

    //test for all possible 3 character passwords
    for (int k = 0; k < 52; k++)
    {
        for (int j = 0; j < 52; j++)
        {
            for (int i = 0; i < 52; i++)
            {
                char *hashed = crypt(pw, salt);
                if (strcmp(hashed, input) == 0)
                {
                    printf("%s %s", pw, hashed);
                    return 0;
                }

                if (pw[0] == 'z')
                {
                    pw[0] = '@';
                }

                pw[0]++;

                if (pw[0] == '[')
                {
                    pw[0] = 'a';
                }

            }

            if (pw[1] == 'z')
            {
                pw[1] = '@';
            }

            pw[1]++;

            if (pw[1] == '[')
            {
                pw[1] = 'a';
            }
        }
        if (pw[2] == 'z')
        {
            pw[2] = '@';
        }

        pw[2]++;

        if (pw[2] == '[')
        {
            pw[2] = 'a';
        }

    }

    strcat(pw, temp);
//test for all possible 4 character passwords
    for (int l = 0; l < 52 ; l++)
    {
        for (int k = 0; k < 52; k++)
        {
            for (int j = 0; j < 52; j++)
            {
                for (int i = 0; i < 52; i++)
                {
                    char *hashed = crypt(pw, salt);
                    if (strcmp(hashed, input) == 0)
                    {
                        printf("%s %s", pw, hashed);
                        return 0;
                    }


                    if (pw[0] == 'z')
                    {
                        pw[0] = '@';
                    }

                    pw[0]++;

                    if (pw[0] == '[')
                    {
                        pw[0] = 'a';
                    }

                }

                if (pw[1] == 'z')
                {
                    pw[1] = '@';
                }

                pw[1]++;

                if (pw[1] == '[')
                {
                    pw[1] = 'a';
                }
            }
            if (pw[2] == 'z')
            {
                pw[2] = '@';
            }

            pw[2]++;

            if (pw[2] == '[')
            {
                pw[2] = 'a';
            }

        }

        if (pw[3] == 'z')
        {
            pw[3] = '@';
        }

        pw[3]++;

        if (pw[3] == '[')
        {
            pw[3] = 'a';
        }
    }

    strcat(pw, temp);

//test for all possible 5 character passwords
    for (int m = 0; m < 52 ; m++)
    {
        for (int l = 0; l < 52 ; l++)
        {
            for (int k = 0; k < 52; k++)
            {
                for (int j = 0; j < 52; j++)
                {
                    for (int i = 0; i < 52; i++)
                    {
                        char *hashed = crypt(pw, salt);
                        if (strcmp(hashed, input) == 0)
                        {
                            printf("%s %s", pw, hashed);
                            return 0;
                        }


                        if (pw[0] == 'z')
                        {
                            pw[0] = '@';
                        }

                        pw[0]++;

                        if (pw[0] == '[')
                        {
                            pw[0] = 'a';
                        }

                    }

                    if (pw[1] == 'z')
                    {
                        pw[1] = '@';
                    }

                    pw[1]++;

                    if (pw[1] == '[')
                    {
                        pw[1] = 'a';
                    }
                }
                if (pw[2] == 'z')
                {
                    pw[2] = '@';
                }

                pw[2]++;

                if (pw[2] == '[')
                {
                    pw[2] = 'a';
                }

            }

            if (pw[3] == 'z')
            {
                pw[3] = '@';
            }

            pw[3]++;

            if (pw[3] == '[')
            {
                pw[3] = 'a';
            }
        }
        if (pw[4] == 'z')
        {
            pw[4] = '@';
        }

        pw[4]++;

        if (pw[4] == '[')
        {
            pw[4] = 'a';
        }
    }

    printf("Password not found!");

    return 0;
}

/*
Appendix:

These are the passwords the program attempts to crack, with username on the left and hash functioned passwords on the right.

anushree:50xcIMJ0y.RXo == YES
brian:50mjprEcqC/ts == CA
bjbrown:50GApilQSG3E2 == UPenn
lloyd:50n0AAUD.pL8g == lloyd
malan:50CcfIk1QrPr6 == maybe
maria:509nVI8B9VfuA == TF
natmelo:50JIIyhDORqMU == nope
rob:50JGnXUgaafgc == ROFL
test:50fkUxYHbnXGw == rofl
stelios:51u8F0dkeDSbY == NO
zamyla:50cI2vYkF0YU2 == LOL

*/