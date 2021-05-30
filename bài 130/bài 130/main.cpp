// Bài 128 + 130: Viết hàm nhập, xuất mảng 1 chiều các số thực

#include <iostream>
#include <math.h>
#define Max 100
using namespace std;

void input_the_array(float a[], int n){
    do{
        if (n <= 0 || n > Max){
            cout << "invalid value of n";
        }
    }while( n <= 0 || n > Max);
    
    for (int i = 1; i <= n; ++i){
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void output_the_array(float a[], int n){
    for (int i = 1; i <= n; ++i){
        printf("%8.3f", a[i]);
    }
}

// Driver code to test these above function
int main(){
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    
    float a[n];
    input_the_array(a, n);
    output_the_array(a, n);
    
    return 0;
}
