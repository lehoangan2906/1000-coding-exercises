// Bài 136: Tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì trả về -1

#include <iostream>
#include <math.h>
#define Max 100
using namespace std;


void input_elements(int a[], int n){
    do{
        if (n < 0 || n > Max){
            cout << "invalid number";
        }
    }while (n < 0 || n > Max);
    for (int i = 0; i < n; i++){
        printf("\nNhap a[%d]: ", i);
        scanf("%i", &a[i]);
    }
}

int find_the_last_even_number_in_the_array(int a[], int n){
    int eve;
    for (int i = n - 1; i < n; --i){
        if (a[i] % 2 == 0){
            eve = a[i];
            break;
        }
        else{
            eve = -1;
        }
    }
    return eve;
}



int main(){
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    
    int a[n];
    input_elements(a, n);
    int positive_number = find_the_last_even_number_in_the_array(a, n);
    cout << positive_number << " ";
        
    return 0;
}

