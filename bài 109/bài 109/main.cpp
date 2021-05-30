//
//  main.cpp
//  bài 109
//  Viết chương trình in bảng cửu chương ra màn hình
//  Created by le hoang an on 2/1/21.
//

#include <iostream>
#include <math.h>
using namespace std;

int tinhluythua(int x, int y){
    if (y == 0) return 1;
    if (y == 1) return x;
    return x * tinhluythua(x, y - 1);
        }

int main() {
    int x, y, luythua;
    printf("\nNhap vao x: ");
    scanf("%d", &x);
    printf("\nNhap vao y: ");
    scanf("\%d", &y);
    luythua = tinhluythua(x, y);
    cout << luythua << endl;
    return 0;
}
