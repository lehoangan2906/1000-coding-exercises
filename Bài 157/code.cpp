#include <bits/stdc++.h>
#define MAX 100
using namespace std;

void inputArray(float A[], int &n){
    do{
        printf("input the size of the array: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\ninvalid number");
        }
    }while(n <= 0 || n > MAX);

    for(int i = 0; i < n; i++){
        printf("\nInput the element A[%d]: ", i);
        scanf("%f", &A[i]);
    }
}

void outputArray(float A[], int n){
    for (int i = 0; i < n; i++){
        printf("\nA[%d] = %f", i, A[i]);
    }
}

void solve(float A[],int n){
    float max = A[0];
    float min = A[0];
    for(int i = 0; i < n; i++){
        max = (A[i] > max) ? A[i] : max;       // if A[i] > max is true the, then max = A[i], if it is false then max = max
        min = (A[i] < min) ? A[i] : min; 
    }

    printf("\nDoan [a, b] chua tat ca cac gia tri trong mang la: [%f, %f];", min, max);
}

int main(){
    int n;
    float A[MAX];

    inputArray(A, n);
    outputArray(A, n);
    solve(A, n);

    return 0;
}