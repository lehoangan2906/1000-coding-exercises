// Bài 132: Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên

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

void output_even_numbers(int a[], int n){
    for (int i = 1; i <= n; ++i){
        if (a[i] % 2 == 0){
            printf("%i", a[i]);
            printf(" ");
        }
    }
}


// Driver code to test these above function
int main(){
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    
    int a[n];
    input_the_array(a, n);
    output_even_numbers(a, n);

    return 0;
}

