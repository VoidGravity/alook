#include <stdio.h>

int main() {
 int number [] = {1,2,3,4,5,6,7,8,9,10} ;
 for (int i =0 ; i<number [9];i++) {
     printf ("%d",number[i]);
     if (i<9) printf (",");
 }
}