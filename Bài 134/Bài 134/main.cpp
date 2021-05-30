// Bài 134: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực

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
    for (int i = 0; i < n; i++){
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

float find_smallest_number_in_the_array(float a[], int n){
    float num = a[0];
    for (int i = 0; i < n; i++){
        if ( a[i] < a[0]){
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
    
    float num =  find_smallest_number_in_the_array(a, n);
    cout << num << " " ;
    
    return 0;
}

