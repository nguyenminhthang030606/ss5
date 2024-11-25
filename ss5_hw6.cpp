#include <stdio.h>

int main() {
    float so1, so2;
    int lua_chon;

    // Nhap hai so bat ki
    printf("Nhap so thu nhat: ");
    scanf("%f", &so1);
    printf("Nhap so thu hai: ");
    scanf("%f", &so2);

    // Hien thi menu va thuc hien cac chuc nang 
    do {
        printf("\nMAY TINH\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1:
            printf("Tong cua %.2f và %.2f là: %.2f\n", so1, so2, so1 + so2);
            break;
            case 2:
            printf("Hieu cua %.2f và %.2f là: %.2f\n", so1, so2, so1 - so2);
            break;
            case 3:
            printf("Tich cua %.2f và %.2f là: %.2f\n", so1, so2, so1 * so2);
            break;
            case 4:
                if (so2 != 0) {
                printf("Thuong cua %.2f và %.2f là: %.2f\n", so1, so2, so1 / so2);
                } else {
                printf("Không the chia cho 0!\n");
                }
            break;
            case 5:
            printf("Thoat chuong trinh.\n");
            break;
            default: 
            printf("Lua chon không hop le, vui long thu lai.\n");
        }
    } while (lua_chon != 5);

    return 0;
}

