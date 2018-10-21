#include <stdio.h>

int hoandoivitri(int *controcuaa, int *controcuab) {
    scanf("gia tri a nhap vao\n", *controcuaa);
    scanf("gia tri b nhap vao\n", *controcuab);
    int tmp = *controcuaa;
    *controcuaa = *controcuab;
    *controcuab = tmp;
//    printf("hoan doi vi tri hai so");
//    printf("gia tri cua a sau khi doi", *controcuaa);
//    printf("gia tri cua b sau khi doi", *controcuab);
}

int main() {
    int a, b;
//  for (int i = 0; i <6 ; ++i) {
////        printf("hien thi cac phan tu trong mang\n",i++);
////        scanf("%d",&i);
////    }
    printf("nhap gia tri cua a",a);
    scanf("%d",&a);
    printf("nhap gia tri cua b",b);
    scanf("%d",&b);
    //hoan doi vi tri
    hoandoivitri(&a,&b);
    printf("gia tri sau khi doi");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}