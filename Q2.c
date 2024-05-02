#include <stdio.h>
 main() {
    int k[] = {1,3,9,10,76};
    int size = sizeof(k) / sizeof(k[0]);
    int small = k[0];

    for (int i = 1; i < size; i++) {
        if (k[i] < small) {
            small = k[i];
        }
    }
    printf("the smallest alement in array is: %d\n",small);
   }