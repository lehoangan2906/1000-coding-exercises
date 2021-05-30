// Bài 138: Tìm vị trí của giá trị chẵn đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì sẽ trả về -1

#include <iostream>
#include <math.h>
using namespace std;
#define Max 100

void input_the_array(int a[], int n){
    do{
        if(n < 0 || n > Max){
            cout << "invalid value return";
        }
    }while(n < 0 || n > Max);
    for (int i = 0; i < n; i++){
        printf("\ninput the value of a[%d]: ",i);
        scanf("%i", &a[i]);
    }
}

int check_the_even_number(int a[], int n){
    int eve;
    for (int i = 0; i < n; i++){
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
    input_the_array(a, n);
    int d = check_the_even_number(a, n);
    cout << " the first even number: " << d << endl;
    return 0;
}

