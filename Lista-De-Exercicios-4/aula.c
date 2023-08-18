#include <math.h>
#include <locale.h>
#include "aula.h"

float calculadora(char operador, float a, float b){

    setlocale(LC_ALL, "Portuguese");

    if(operador == '+')
        return a + b;

    if(operador == '-')
        return a - b;

    if(operador == '*')
        return a * b;

    if(b != 0)
        return a / b;

    printf("Não é possível efetuar a divisão.\n");

}

int soma_cubos(int n){

    if(n > 1)
        return pow(n, 3) + soma_cubos(n - 1);

    return n;

}

int somatorio(int n){

    if(n > 1)
        return n + somatorio(n - 1);

    return n;

}

int ehPrimo(int n){

    if(n <= 1)
        return 0;

    int i;

    for(i = 2; i < n; i++){

        if(n % i == 0)
            return 0;

    }

    return 1;

}

int somaPar(int n){

    int i, soma = 0;

    for(i = 2; i <= n; i += 2)
        soma += i;

    return soma;
}

int fatorial(int n){

    if(n > 1)
        return n * fatorial(n - 1);

    return 1;

}

int ehAnoBissexto(int ano){

    if(ano % 4 == 0 && ano % 100 != 0)
        return 1;

    if(ano % 400 == 0)
        return 1;

    return 0;

}
