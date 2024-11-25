#include <stdio.h>

int main() {
    // Khai bao gia tri va gan gia tri cho mot so nguyen bien cho truoc 
    int so_cho_truoc = 30; // so cho truoc la 30 
    int so_nhap;

    printf("Hay nhap mot so. Chuong trinh so ket thuc khi so nhap trung vai so cho truoc.\n");

    while (1) {
        //yeu cau nguoi dung nhap vao mot so 
        printf("Nhap so: ");
        scanf("%d", &so_nhap);

        //kiem tra so nhap co trung voi so cho truoc khong 
        if (so_nhap == so_cho_truoc) {
            printf("Bingo ban da nhap dung so %d. \n", so_cho_truoc);
            break;
        } else {
            printf("Sai roi thu lai nhe!\n");
        }
    }

    return 0;
}

