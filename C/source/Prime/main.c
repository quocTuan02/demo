#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool checkPrime(int);    // khai báo nhằm mục đích đặt hàm checkPrime() sau hàm main()

void main() {
    int n;      // khai báo biến n kiểu số nguyên
    printf("nhập n: ");     // in ra màn hình chuỗi "nhập n: "
    scanf("%d", &n);    //nhập giá trị cho n
    if (checkPrime(n)) {
        // gọi đến hàm checkPrime() trong đó truyền giá trị của n  cho đối số number của hàm checkPrime()
        printf("%d là số nguyên tố", n);
    } else printf("%d không phải là số nguyên tố", n);
}

bool checkPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}

