#include <stdio.h>
int main() {
    int num;
    printf("Hay nhap mot so nguyen bat ki: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("So nay la so chan");
    } else {
        printf("So nay la so le");
    }
    return 0;
}
