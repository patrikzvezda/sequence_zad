#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int izracunaj(int *b) {
printf(" = sequence number\n");
(*b)++;
return *b;
}

int main(){
int n, b = 0;

printf("Unesi broj:");
scanf("%d",&n);

 while (n !=1) {
  if (n%2==0) {
    n=n/2;
    izracunaj(&b);
    printf("b=%d",b); }
  else {
    n = 3 * n + 1;
    izracunaj(&b);
    printf ("b=%d",b);}
}}
