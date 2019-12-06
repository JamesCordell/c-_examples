// Example C program of swapping variables. 
#include <stdio.h>

void swapNormal(int *a,int *b) {
 int tmp = *a;
 *a = *b;
 *b = tmp;
}

void swapXOR(int *a,int *b) {

  if ( *a != *b ) {
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
  }
}

int main() {

int a =1;
int b =8;

printf("a: %i b:%i \n",a,b);

swapNormal(&a,&b);

printf("a: %i b:%i \n",a,b);

swapXOR(&a,&b);

printf("a: %i b:%i \n",a,b);

return 0;
}
