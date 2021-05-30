//
//  main.cpp
//  bài 100 viết chương trình giải phương trình bậc 2
//
//  Created by le hoang an on 1/31/21.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c;
    float delta;
    printf("nhap vao so a = ");
    scanf("%f", &a );
    printf("nhap vao so b = ");
    scanf("%f", &b );
    printf("nhap vao so c = ");
    scanf("%f", &c );
    
    if (a == 0){
        if(b == 0){
            if(c == 0){
                cout << "phuong trinh co vo so nghiem"<< endl;
            }
            else {
                cout << "phuong trinh vo nghiem" << endl;
            }
        }
    }
    else{
        delta = b * b - 4 * a * c;
        if (delta > 0){
            float x1 = (-b + sqrt(delta)) / 2 * a;
            float x2 = (-b + sqrt(delta)) / 2 * a;
            cout <<" phuong trinh co hai nghiem x1 " << x1 << "va x2 " << x2 << endl;
        }
        else if ( delta == 0){
            float x = -b / (2 * a);
            cout << " phuong trinh co nghiem kep x = " << x << endl;
        }
        else{
            cout << "phuong trinh vo nghiem" << endl;
        }
        
    }
    return 0;
}
