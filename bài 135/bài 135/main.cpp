// Bài 135: Viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về -1

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

float find_the_first_positive_number_in_the_array(float a[], int n){
    float pos;
    for (int i = 0; i < n; ++i){
        if (a[i] > 0){
            pos = a[i];
            break;
        }
        else{
            pos = -1;
        }
    }
    return pos;
}



int main(){
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    
    float a[n];
    input_elements(a, n);
    int positive_number = find_the_first_positive_number_in_the_array(a, n);
    cout << positive_number;
        
    return 0;
}


