// Bài 137: Tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số thực


#include <iostream>
#include <math.h>
#define Max 100
using namespace std;

void get_the_array(float a[], int n){
    do{
        if (n <= 0 || n > Max){
            cout << " invalid value return";
        }
    }while (n <= 0 || n > Max);
    for(int i = 0; i <= n; i++){
        printf("input the value of a[%d]: ",i);
        scanf("%f", &a[i]);
    }
}


float find_smallest_number(float a[], int n){
    float num = a[0];
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
    float a[n];
    get_the_array(a, n);
    float integer = find_smallest_number(a, n);
    float *ip = &integer;
    cout << ip;
    
    return 0;
}
