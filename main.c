#include <stdio.h>
#include <stdlib.h>

/** \brief principalement principal
 *
 * \return int
 *
 */
int main()
{
    int val_user;

    printf("Entrez un nombre: ");
    scanf("\n%i", &val_user);

    printf("\n\n%i\n", Factoriel(val_user)) ;

    return EXIT_SUCCESS;
}

/** \brief MaFactoriel de ouf
 *
 * \param a int
 * \return int
 *
 */
int Factoriel(int a)
{
    int i;

    for(i=a-1; i>=1; i--){
        a *= i;
    }
}
