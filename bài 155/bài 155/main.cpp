// Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất

#include <iostream>
#include <math.h>
#define Max 100
using namespace std;

void input_the_array(float a[], int &n){
    do{
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > Max){
            printf("\ninvalid value return ");
        }
    }while(n <= 0 || n > Max);
    for(int i = 0; i < n; i++)
        {
            printf("\nNhap a[%d]: ", i);
            scanf("%f", &a[i]);
        }
}

void distances(float a[], float b[], int n, int x){
    
    // find the distance from a to x
    
    for (int i = 0; i < n; ++i){
        b[i] = abs(a[i] - x);
    }
}

float find_max(float b[], int n){
    int max = b[0];
    for (int i = 1; i < n; ++i){
        if (b[i] > max){
            max = b[i];
        }
    }
    return max;
}

void output_answer(float a[], float b[], int n){
    printf("\n the furthest value from x is: ");
    int max = find_max(b, n);
    for (int i = 0; i < n; ++i){
        if(b[i] == max){
            printf("%8.3f", a[i]);
        }
    }
}

int main(){
    int n;
    float a[Max];
    float b[Max];
    input_the_array(a, n);
    
    float x;
    printf("\nInput the value of x: ");
    scanf("%f", &x);
    
    distances(a, b, n, x);
    output_answer(a, b, n);
    return 0;
}
