#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct SinhVien {
    char ten[45];
    int tuoi;
    char lop[15];
};

typedef struct SinhVien SV;

void nhapN(SV a[], int n);

void xuat(SV sv);

void xuatN(SV a[], int n);

void timKiemTheoTen(SV a[], int n, char name[]);

int main() {
    int key;
    int n;
    bool daNhap = false;
    do {
        printf("\nNhap so luong SV: ");
        scanf("%d", &n);
    } while (n <= 0);
    SV a[n];
    while (true) {
        printf("\n******************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN    **\n");
        printf("**      1. nhap danh sach sinh vien     **\n");
        printf("**      2. In danh sach sinh vien       **\n");
        printf("**      3. Tim kiem sinh vien theo ten  **\n");
        printf("**      0. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d", &key);
        switch (key) {
            case 1:
                printf("\nBan da chon nhap DS sinh vien!");
                nhapN(a, n);
                printf("\nBan da nhap thanh cong!");
                daNhap = true;
                break;
            case 2:
                if (daNhap) {
                    printf("\nBan da chon xuat DS sinh vien!");
                    xuatN(a, n);
                } else {
                    printf("\nNhap DS SV truoc!!!!");
                }

                break;
            case 3:
                printf("nhap ten:");
                char name[45];
                fflush(stdin);
                gets(name);
                timKiemTheoTen(a, n, name);
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                break;
        }
    }
}


void nhapN(SV a[], int n) {
    int i;
    printf("\n____________________________________\n");
    for (i = 0; i < n; ++i) {
        printf("\nNhap SV thu %d:", i + 1);
        printf("\nNhap ten: ");
        fflush(stdin);
        gets(a[i].ten);
        printf("Nhap tuoi: ");
        scanf("%d", &a[i].tuoi);
        printf("Nhap lop: ");
        fflush(stdin);
        gets(a[i].lop);
    }
    printf("\n____________________________________\n");
}

void xuat(SV sv) {
    printf("\n%-30s%-10d%-15s", sv.ten, sv.tuoi, sv.lop);
}

void xuatN(SV a[], int n) {
    int i;
    printf("\n____________________________________\n");
    printf("\n%-30s%-10s%-15s", "TEN", "TUOI", "LOP");
    for (i = 0; i < n; ++i) {
        xuat(a[i]);
    }
    printf("\n____________________________________\n");
}

void timKiemTheoTen(SV a[], int n, char name[]) {
    int i;
    for (i = 0; i < n; ++i) {
        if (strcasecmp(name, a[i].ten) == 0) {
            printf("\n%-30s%-10s%-15s", "TEN", "TUOI", "LOP");
            xuat(a[i]);
            return;
        }
    }
    printf("khong tim thay");
}
