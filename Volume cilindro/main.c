#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main()
{

    float volume, elevado;
    int  altura, raio;

    setlocale(LC_ALL,"portuguese");

    printf("Digite a altura: ");
    scanf("%i", &altura);
    printf("Digite um raio: ");
    scanf("%i", &raio);

    elevado = pow(raio,2) * altura;
    volume = 3.1416 * elevado;

    printf("O volume do cilindro é %5.2f", volume);
    return 0;

}
