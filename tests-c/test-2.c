#include <stdio.h>

int main() {
    int num;
    printf("Enter a numbero: ");
    fflush(stdout);
    if (scanf("%d", &num) == 1) {
        printf("You entered: %d\n", num);
    } else {
        printf("No valid input received.\n");
    }
    return 0;
}