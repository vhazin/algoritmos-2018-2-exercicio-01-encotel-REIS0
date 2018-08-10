#include <stdio.h>
#include <string.h>

int main(void){

    char numero[30];
    char frase[30];
    printf("exemplo: ISTO-E-UM-EXEMPLO\n");
    printf("digite a frase: ");
    scanf("%s", &frase);

    int i;
    int j = 0;
    for(i = 0; i < 30; i++){
        if (frase[i] == 'A' || frase[i] == 'B' || frase[i] == 'C'){
            numero[j] = '2';
        }
        if (frase[i] == 'D' || frase[i] == 'E' || frase[i] == 'F'){
            numero[j] = '3';
        }
        if (frase[i] == 'G' || frase[i] == 'H' || frase[i] == 'I'){
            numero[j] = '4';
        }
        if (frase[i] == 'J' || frase[i] == 'K' || frase[i] == 'L'){
            numero[j] = '5';
        }
        if (frase[i] == 'M' || frase[i] == 'N' || frase[i] == 'O'){
            numero[j] = '6';
        }
        if (frase[i] == 'P' || frase[i] == 'Q' || frase[i] == 'R' || frase[i] == 'S'){
            numero[j] = '7';
        }
        if (frase[i] == 'T' || frase[i] == 'U' || frase[i] == 'V'){
            numero[j] = '8';
        }
        if (frase[i] == 'W' || frase[i] == 'X' || frase[i] == 'Y' || frase[i] == 'Z'){
            numero[j] = '9';
        }
        else if (isalpha(frase[j]) == 0){
            numero[j] = frase[i];
        }
        j++;
        }

    printf("%s", numero);
    return 0;
    }
