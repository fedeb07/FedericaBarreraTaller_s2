#include <stdio.h>
int main(int argc, char const *argv[])
{
    //char Mensaje[9] = { 'h','o','l','a','m','u','n','d','o'};
    char Mensaje[9];
    for (int i=0; i < 9; i++)
    {
        prinf("ingrese un caracter: ");
        scanf("%c",&Mensaje[i]);
    }

    return 0; 
}