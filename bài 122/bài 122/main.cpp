// Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực

#include <iostream>
#include <math.h>
#define Max 100
using namespace std;


void input_elements(float a[], int n){
    do{
        if (n < 0 || n > Max){
            cout << "invalid number";
        }
    }while (n < 0 || n > Max);
    for (int i = 1; i <= n; i++){
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

float find_greatest_number_in_the_array(float a[], int n){
    float num = a[0];
    for (int i  = 1; i <= n; i++){
        if (a[i] > num){
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
    input_elements(a, n);
    float greatest_number = find_greatest_number_in_the_array(a, n);
    
    printf("\nPhan tu lon nhat trong mang la %.3f", greatest_number);
    return 0;
}
