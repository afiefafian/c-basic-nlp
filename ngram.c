#include <stdio.h>
#include <string.h>

int ngram(char text[], int n)
{
    if (n == 0)
    {
        printf("n is 0, skip process");
        return 0;
    }

    printf("text : %s \n", text);
    printf("n-gram : %i \n", n);

    int count = 0;
    char *token = strtok(text, " ");

    while (token != NULL)
    {
        count++;
        token = strtok(NULL, " ");
    }



    printf("count %i", count);


    return 0;
}

int main()
{
    char text[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

    ngram(text, 1);

    return 0;
}