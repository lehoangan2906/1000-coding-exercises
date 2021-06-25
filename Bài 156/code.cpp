#include <bits/stdc++.h>
#define MAX 100
using namespace std;

void inputArray(float A[], int &n){
    do{
        printf("input the size of the array: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\ninvalid value of n!");
        }
    }while(n <= 0 || n > MAX);

    for(int i = 0; i < n; i++){
        printf("input the value of A[%d]: ", i);
        scanf("%f", &A[i]);
    }
}

void distance(float A[], float B[], float x, int &n){
    for(int i = 0; i < n; i++){
        B[i] = abs(A[i] - x);
    }
}

float compare(float B[], int &n){
    float min = B[0];
    for(int i = 1; i < n; i++){
        if(B[i] < min){
            min = B[i];
        }
    }
    return min;
}

void output_answer(float a[], float b[], int &n){
    printf("\n the nearest value from x is: ");
    int min = compare(b, n);
    for (int i = 0; i < n; i++){
        if(b[i] == min){
            printf("%8.3f", a[i]);
        }
    }
}

int main(){
    float A[MAX];
    float B[MAX];
    int n;
    float x;

    inputArray(A, n);
    printf("\nInput the number x: ");
    scanf("%f", &x);

    distance(A, B, x, n);

    output_answer(A, B, n);

    return 0;
}