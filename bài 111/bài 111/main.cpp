//
//  main.cpp
//  bài 111
//  viết chương trình in ra tam giác cân có độ cao h
//  Created by le hoang an on 2/1/21.
//

#include <iostream>
#include <math.h>
using namespace std;

void triangle(int n)
{
    for (int i = 1; i <= n; i++){
        for (int k = n - i; k > 0; k--)
            cout << " ";
        
        for (int j = 1; j <= i; j++)
            cout << "* ";
            cout << endl;
        
    }
}
    

int main() {
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    triangle(n);
    return 0;
}
