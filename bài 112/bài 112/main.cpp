// Bài 112: Viết chương trình in ra hình chữ nhật có kích thước m x n
// 1. Hình chữ nhật đặc
// 2. Hình chữ nhật rỗng


#include <iostream>
#include <math.h>
using namespace std;

char hinh_chu_nhat_dac(int d, int r){
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= d; j++)
            cout << "*";
        printf("\n");
    }
    return 0;
}

char hinh_chu_nhat_rong(int d, int r){
    for (int i = 1; i <= r; i++){
        if (i == 1 || i == r ){
            for ( int j = 1; j <= d; j++){
            cout << "*";
            }
        }
        else {
            for (int j = 1; j <= d; j++){
                if (j == 1 || j == d){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int d, r;
    cout << "nhap vao chieu dai: ";
    cin >> d;
    cout << "nhap vao chieu rong: ";
    cin >> r;
    cout << hinh_chu_nhat_dac(d, r) << endl;
    cout << hinh_chu_nhat_rong(d, r) << endl;
    
    return 0;

}


