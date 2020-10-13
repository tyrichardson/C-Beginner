#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct namect {
    char * fname; // using pointers instead of arrays
    char * lname;
    int letters;
};

void getinfo(struct namect * pst);

int main(void)
{
    struct namect * pst;
    getinfo(pst);
    printf("fname = %s, lname = %s\n", pst->fname, pst->lname);

    free(pst->fname);
    free(pst->lname);

    return 0;
}

void getinfo(struct namect * pst)
{
    int SLEN = 3;
    char temp[SLEN];
    printf("Please enter \"Ty\".\n");
    fgets(temp, SLEN, stdin);

    // allocate memory to hold firstname
    pst->fname = (char *)malloc(strlen(temp) + 1);

    // copy name to allocated memory
    strcpy(pst->fname, temp);

    printf("Please enter \"No\".\n");
    scanf(" "); // makes operations pause for next user input
    fgets(temp, SLEN, stdin);

    pst->lname = (char *)malloc(strlen(temp) + 1);

    strcpy(pst->lname, temp);

}