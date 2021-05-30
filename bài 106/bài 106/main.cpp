//
//  main.cpp
//  bài 106
//  Viết hàm tính S = CanBacN(x)
//  Created by le hoang an on 2/1/21.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double S;
    float x, n;
    printf("\nNhap x: ");
    scanf("%f", &x);
    
    printf("\nNhap n: ");
    scanf("%f", &n);
    n = 1/ n;
    S = pow(x, n);
    
    printf("Can bac %.2f cua %.2f la %.2f", 1/n, x, S);
    
    return 0;
}
