#include <stdio.h>

int main() {
    int n, tong = 0;

    // nhap vao so nguyen duong  
    do {
        printf("Nhap vao so nguyen duong : ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("nhap vao so nguyen duong lon hon 0!\n");
        }
    } while (n <= 0);

    // Tinh tong cac so tu 1 den n 
    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    // Hien thi ket qua 
    printf("Tong cac so tu 1 den  %d là: %d\n", n, tong);

    return 0;
}

