// Bài 124: Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không.
#include <iostream>
#include <math.h>
#define Max 100
using namespace std;

void get_the_array(int a[], int n){
    do{
        if (n <= 0 || n > Max){
            cout << " invalid valued return";
        }
    }while (n <= 0 || n > Max);
    for(int i = 1; i <= n; i++){
        printf("input the value of a[%d]: ",i);
        scanf("%i", &a[i]);
    }
}

bool kiem_tra_phan_tu(int a[], int n){
    bool num;
    for (int i = 1; i <= n; i++ ){
        if (a[i] < 2004){
            if ( a[i] % 2 == 0){
                num = true;
            }
            else{
                num = false;
            }
        }
        else{
            break;
        }
    }
    return num;
}

int main(){
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    get_the_array(a, n);
    
    if (kiem_tra_phan_tu(a, n) == true){
        cout << "there exist at leat one element that less than 2004";
    }
    else {
        cout << "there's no element less than 2004";
    }
    
    return 0;
}


