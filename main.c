#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val_user;

    printf("Entrez un nombre: ");
    scanf("\n%i", &val_user);

    printf("\n\n%i\n", Factoriel(val_user)) ;

    return EXIT_SUCCESS;
}

int Factoriel(int f)
{
    int total

    if(f==0){
        return 1;
    }
    else{
        total = f*Factoriel(f-1);
        return total
    }

    //MON COMENTAIRE//
    //MON COMMENTAIRE SUR BRANCHE RECURISION//
    //MON COMMENTAIRE SUR BRANCHE RECURISION//
}
