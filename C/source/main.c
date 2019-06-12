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

void nhap(SV sv);

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
        printf("******************************************\n");
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
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                if (daNhap) {
                    printf("\nBan da chon xuat DS sinh vien!");
                    xuatN(a, n);
                } else {
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                printf("nhap ten:");
                char name[45];
                fflush(stdin);
                gets(name);
                timKiemTheoTen(a, n, name);
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
        }
    }
}


void nhap(SV sv) {
    printf("\nNhap ten: ");
    fflush(stdin);
    gets(sv.ten);
    printf("\nNhap tuoi: ");
    scanf("%d", &sv.tuoi);
    printf("\nNhap lop: ");
    fflush(stdin);
    gets(sv.lop);
}

void nhapN(SV a[], int n) {
    printf("\n____________________________________\n");
    for (int i = 0; i < n; ++i) {
        printf("\nNhap SV thu %d:", i + 1);
        nhap(a[i]);
    }
    printf("\n____________________________________\n");
}

void xuat(SV sv) {
    printf("\%-30s%-10d%-15s", sv.ten,sv.tuoi,sv.lop);
}

void xuatN(SV a[], int n) {
    printf("\n____________________________________\n");
    for (int i = 0; i < n; ++i) {
        printf("\nThong tin SV thu %d\n", i + 1);
        xuat(a[i]);
    }
    printf("\n____________________________________\n");
}

void timKiemTheoTen(SV a[], int n, char name[]) {
    for (int i = 0; i < n; ++i) {
        if (strcasecmp(name, a[i].ten) == 0) {
            xuat(a[i]);
            return;
        }
    }
    printf("khong tim thay");
}
