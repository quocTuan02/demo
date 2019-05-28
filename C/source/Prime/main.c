#include <stdio.h>



/*
int max (int *a[]){
    int  max=0;
    int size =(sizeof(*a)/sizeof(int));
    for (int i = 0; i < size ; ++i) {
        if (max<*a[i]) max=*a[i];
    }
    return max;
}


int chen(int *arr[],int value, int index){
    int size=(sizeof(*arr)/ sizeof(int))+1;
    int *arrNew[size];
    for (int i = 0; i < size ; ++i) {
        if (i<index){
            *arrNew[i]=*arr[i];
        } else if(i==index){
            *arrNew[i]=value;
        } else if ( i>index){
            *arrNew[i]=*arr[i-1];
        }
    }
    return *arrNew;
}

void printArr(int *arr[]){
    int size = (sizeof(*arr)/ sizeof(int));
    for (int i = 0; i < size ; ++i) {
        printf("%d\t",*arr[i]);
    }
}

 */

int main() {















    /*
    int arr[] = {0, 2, 3, 4, 5, 99, 7, 8, 9};

    printArr(arr);
    printf("\n");
    printArr(chen(arr,123,5));

*/
    /*
    int *ptr = arr;
    for (int i = 0; i < 9; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (;ptr<=&arr[8];ptr++){
        printf("%d\t",*ptr);
    }
    
*/


        /*
        int a=255;
        float f = 3.1415;

        int *ptr = &a;
        float *fPtr =&f;

        printf("\ndia chi bien a: %x",&a);
        printf("\ndia chi bien ptr : %x",ptr);


    */




/*
//
//    printf("nhap 1 ky tu :");
//    char a = getchar();
//    fflush(stdin);//xoa bo nho dem
//
// //   printf("nhap mot cau : ");
//    char name[99]="linh lam long";
//  //  gets(name);
//    // fflush(stdin);
//    int i;
//    for (i = 0; i < 25; ++i) {
//        printf("%c\n",name[i]);
//    }
//   // printf("%c", a);
//    printf("\n%s", name);
*/


//printf("max: %d",max(arr));



        return 0;

}