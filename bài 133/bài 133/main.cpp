// Bài 133: Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số thực

#include <iostream>
#include <math.h>
#define Max 100
using namespace std;

void get_the_array(int a[], int n){
    do{
        if (n <= 0 || n > Max){
            cout << " invalid valued return";
        }
    }while (n <= 0 || n > Max);
    for(int i = 0; i <= n; i++){
        printf("input the value of a[%d]: ",i);
        scanf("%i", &a[i]);
    }
}


void find_negative_number(int a[], int n){
    for (int i = 0; i <= n; i++){
        if (a[i] < 0){
            printf("%d", a[i]);
            printf("\n");
        }
    }
}

int main(){
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    get_the_array(a, n);
    find_negative_number(a, n);
    
    return 0;
}
