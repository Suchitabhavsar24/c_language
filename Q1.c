#include <stdio.h>
main() {
    int num1;
    printf("enter the number: ");
    scanf("%d", &num1);

    switch (num1> 0) {
        case 1:
            printf("%d the number is positive\n", num1);
            break;
        case 0:
            switch (num1 < 0) {
                case 1:
                    printf("%d the number is nagative\n", num1);
                    break;
                case 0:
                    printf("%d it is zero\n", num1);
                    break;
            }
            break;
    }
}