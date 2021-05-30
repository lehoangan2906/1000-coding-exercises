// Bài 123: Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số nguyên
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


int find_smallest_number(int a[], int n){
    int num = a[0];
    for (int i = 0; i <= n; i++){
        if (a[i] < a[0]){
            num = a[i];
        }
    }
    return num;
}

int main(){
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    get_the_array(a, n);
    int integer = find_smallest_number(a, n);
    int *ip = &integer;
    cout << ip;
    
    return 0;
}
