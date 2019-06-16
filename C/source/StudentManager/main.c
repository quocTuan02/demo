#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
struct User {
    char name[99];
    char addres[99];
    int age;
};
typedef struct User User;

struct Mark {
    int toan;
    int ly;
    int hoa;
    int sum;
};
typedef struct Mark Mark;

struct Student {
    char id[10];
    struct User user;
    char school[100];
    struct Mark mark;
};
typedef struct Student Student;


void setStudent(Student *sv) {
    fflush(stdin);
    printf("So bao danh: ");
    fflush(stdin);
    gets(sv->id);
    printf("Ho va ten: ");
    fflush(stdin);
    gets(sv->user.name);
    printf("Tuoi: ");
    fflush(stdin);
    scanf("%d", &sv->user.age);
    printf("Que quan: ");
    fflush(stdin);
    gets(sv->user.addres);
    printf("Truong:");
    gets(sv->school);
    printf("Toan: ");
    fflush(stdin);
    scanf("%d", &sv->mark.toan);
    printf("Ly: ");
    fflush(stdin);
    scanf("%d", &sv->mark.ly);
    printf("Hoa: ");
    fflush(stdin);
    scanf("%d", &sv->mark.hoa);
    sv->mark.sum = sv->mark.toan + sv->mark.ly + sv->mark.hoa;
}

void getStudent(Student *sv) {
    printf("\n%-10s%-20s%-20s%-20s%-5d%-5d%-5d%-5d",
           sv->id, sv->user.name, sv->user.addres, sv->school,
           sv->user.age, sv->mark.toan, sv->mark.ly, sv->mark.hoa
    );
}

void inputList(Student *sv, int numberOfStudents) {
    for (int i = 0; i < numberOfStudents; ++i) {
        printf("Sinh vien thu : %d/%d\n", i + 1, numberOfStudents);
        setStudent(&sv[i]);
    }
}


void printList(Student *list, int numberOfStudents) {
    printf("\n%-10s%-20s%-20s%-20s%-5s%-5s%-5s%-5s",
           "SBD", "NAME", "ADDRES", "SCHOOL",
           "AGE", "TOAN", "LY", "HOA");
    for (int i = 0; i < numberOfStudents; ++i) {
        getStudent(&list[i]);
    }
}

void sortByTotaScore(Student *sv, int numberOfStudents) {
    for (int i = 0; i < numberOfStudents - 1; ++i) {
        for (int j = i + 1; j < numberOfStudents; ++j) {
            if (sv[i].mark.sum < sv[j].mark.sum) {
                Student temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

void printByMark(Student *sv, int numberOfStudents, int totaScore) {
    for (int i = 0; i < numberOfStudents; ++i) {
        if (sv[i].mark.sum >= totaScore) {
            getStudent(&sv[i]);
        }
    }
}

void add(Student *list, int *numberOfStudents) {
    (*numberOfStudents)++;
    list = realloc(list, (*numberOfStudents) * sizeof(Student));
    setStudent((list+*numberOfStudents-1));
}

void removeByIndex(Student *list, int *numberOfStudents, int index) {
    for (int i = index + 1; i < *numberOfStudents; ++i) {
        list[i - 1] = list[i];
    }
    (*numberOfStudents)--;
    list = realloc(list, (*numberOfStudents) * sizeof(Student));
}

int searchByName(Student *list, int *numberOfStudents, char name[]){
    for (int i = 0; i < *numberOfStudents ; ++i) {
        if (strcasecmp(list->user.name,name)==0){
            return i;
        }
    }
    return -1;
}



int main() {
    int *numberOfStudents;
    Student *student;
    int choose;
    printf("Tong so hoc sinh: ");
    scanf("%d", numberOfStudents);
    student = (Student *) malloc(*numberOfStudents * sizeof(Student));
    while(true){
        printf("\n-----MENU----"
               "\n1. Nhap danh sach sinh vien."
               "\n2. Danh sach sinh vien."
               "\n3. Danh sach sinh vien co tong diem 3 mon lơn hon 15."
               "\n4. Tim sinh vien theo ten."
               "\n5. Xoa xinh vien theo ten."
               "\n6. Sap xep sinh vien theo tong diem."
               "\n0. Thoat.\n"
               );

        switch (choose){
            case 1:{
                inputList(student,*numberOfStudents);
                getch();
                break;
            }
            case 2:{
                printList(student,*numberOfStudents);
                getch();
                break;
            }
            case 3:{

                getch();
                break;
            }
            case 4:{
                getch();
                break;
            }
            case 5:{
                getch();
                break;
            }
            case 6:{
                getch();
                break;
            }
            case 0:{
                exit(0);
            }
            default:{
                printf("chon sai cmnr @@@");
            }

        }

    }

//    printf("\n***********************\n");
//    inputList(student, *numberOfStudents);
//    printf("\n***********************\n");
//    printList(student, *numberOfStudents);
//    printf("\n***********************\n");
//    add(student, numberOfStudents);
//    printf("\n***********************\n");
//    printList(student, *numberOfStudents);
//    printf("\n***********************\n");            03c83naj406036j
//    removeByIndex(student, numberOfStudents, 0);
//    printf("\n***********************\n");
//    printList(student, *numberOfStudents);

    free(student);





//    int n,x,p=0;
//    printf("value n:");
//    scanf("%d",&n);
//    printf("value x:");
//    scanf("%d",&x);
//    int a[n+1];
//    for (int j = n; j >=0 ; j--) {
//        printf("value a[%d]:",j);
//        scanf("%d",&a[j]);
//    }
//
//    for (int i = n; i > 0; i--) {
//        p=(p+a[i])*x;
//    }
//    p+=a[0];
//    printf("%d",p);

}