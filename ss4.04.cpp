#include <stdio.h>

int main() {
    int month;
    printf("Nhap vao thang (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: // Th�ng 1 - 31 ng�y
        case 3: // Th�ng 3 - 31 ng�y
        case 5: // Th�ng 5 - 31 ng�y
        case 7: // Th�ng 7 - 31 ng�y
        case 8: // Th�ng 8 - 31 ng�y
        case 10: // Th�ng 10 - 31 ng�y
        case 12: // Th�ng 12 - 31 ng�y
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4: // Th�ng 4 - 30 ng�y
        case 6: // Th�ng 6 - 30 ng�y
        case 9: // Th�ng 9 - 30 ng�y
        case 11: // Th�ng 11 - 30 ng�y
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2: // Th�ng 2 - 28 ho?c 29 ng�y (nam nhu?n)
            printf("Thang 2 co 28 hoac 29 ngay.\n");
            break;
        default:
            printf("So thang nhap khong hop le?.\n");
            break;
    }

    return 0;
}
