/* Leia um valor de hora e informe quantos minutos se passaram desde o in�cio do dia*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL,"portuguese");
    int hora, min, result;

    printf("\n\tQue horas s�o agora? (escreva apenas as horas) ");
    scanf("%i", &hora);
    printf("\n\tE, quantos minutos? (escreva apenas os minutos) ");
    scanf("%i", &min);

    result=(hora*60)+min;

    printf("\n\tDesde o in�cio do dia, se passaram %i minutos", result);
    printf ("\n\n\t");

    system ("pause");
    return 0;
}
