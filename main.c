#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main () {
char frase [100];

printf (" Digite uma frase : ") ;
fgets (frase , sizeof (frase) , stdin ) ; 
 

int len = strlen(frase)-2;

int comeco,fim,nulo;
fim = len;
nulo = 1;
 for (comeco = 0; comeco < fim ; comeco++) {

    if ( frase[comeco] ==' ') {
 comeco ++;
 }

    if (frase[fim] ==' '){
    fim--;
}

    if (frase[comeco] != frase[fim]) {
   nulo = 0;
    break;
}
 fim--;
 }
 if(nulo == 1){
 printf("Palindromo detectado");
 }
 else {
 printf(" Não é palindromo");
 }
 return 0;
 }