#include <stdio.h>

int main() {
    int num;
    int check = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 1) {
        check = 0;
    } else {
        
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                check = 0; 
                break;     /
            }

        }

    }

    if (check == 1) {
        printf("%d is Prime\n", num);
    } else {
        printf("%d is NOT Prime\n", num);
    }

    return 0;
}
