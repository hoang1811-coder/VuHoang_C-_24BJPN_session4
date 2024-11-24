#include <stdio.h>

int main() {
    int month;
    printf("Nhap vao thang (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: // Tháng 1 - 31 ngày
        case 3: // Tháng 3 - 31 ngày
        case 5: // Tháng 5 - 31 ngày
        case 7: // Tháng 7 - 31 ngày
        case 8: // Tháng 8 - 31 ngày
        case 10: // Tháng 10 - 31 ngày
        case 12: // Tháng 12 - 31 ngày
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4: // Tháng 4 - 30 ngày
        case 6: // Tháng 6 - 30 ngày
        case 9: // Tháng 9 - 30 ngày
        case 11: // Tháng 11 - 30 ngày
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2: // Tháng 2 - 28 ho?c 29 ngày (nam nhu?n)
            printf("Thang 2 co 28 hoac 29 ngay.\n");
            break;
        default:
            printf("So thang nhap khong hop le?.\n");
            break;
    }

    return 0;
}
