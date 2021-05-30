// Bài 129 + 131: Viết hàm nhập, xuất mảng 1 chiều các số nguyên

#include <iostream>
#include <math.h>
#define Max 100
using namespace std;

void input_the_array(int a[], int n){
    do{
        if (n <= 0 || n > Max){
            cout << "invalid value of n";
        }
    }while( n <= 0 || n > Max);
    
    for (int i = 1; i <= n; ++i){
        printf("\nNhap a[%d]: ", i);
        scanf("%i", &a[i]);
    }
}

void output_the_array(int a[], int n){
    for (int i = 1; i <= n; ++i){
        printf("%i", a[i]);
        printf(" ");
    }
}

// Driver code to test these above function
int main(){
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    
    int a[n];
    input_the_array(a, n);
    output_the_array(a, n);
    
    return 0;
}

