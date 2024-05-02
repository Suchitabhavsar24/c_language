#include <stdio.h>
void squareElement(int*s, int k) {
    for (int i = 0; i < k; i++) {
        *(s + i) *= *(s + i);
    }
}
main() {
    int s[10], k;
    printf("enter the array size: ");
    scanf("%d", &k);
    printf("enter the element: %d\n", k);
    for (int i = 0; i<k; i++) {
        scanf("%d", &s[i]);
    }
    squareElements(s,k);
    printf("arrays sqere elements is :\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
}