//
//  main.cpp
//  bài 104
//  viết chương trình nhập vào ngày, tháng, năm, tính xem ngày đó là ngày thứ bao nhiêu trong năm
//  Created by le hoang an on 2/1/21.
//

#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int day, month, year, s, i;
    printf("\nNhap vao ngay, thang, nam: ");
    scanf("%d%d%d", &day, &month, &year);
    
    s = day;
    for (i = 1; i < month; i++){
        switch (i){
            case 4: case 6: case 9: case 11: s+= 30;
                break;
            case 2: s += (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
                break;
            default: s += 31;
        }
    }
    printf("\nNgay thu %d trong nam", s);
    
    return 0;
}
