#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int val_user;
    int test;
    int results;

    printf("Entrez un nombre: ");
    scanf("\n+%i", &val_user);


    for(i=val_user-1; i>=1; i--){
        val_user *= i;
    }

    printf("\n\n%i\n", val_user);

    return EXIT_SUCCESS;
}
