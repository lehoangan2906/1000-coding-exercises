//
//  main.cpp
//  bài 101
//  viết chương trình nhập vào tháng, năm, hãy cho biết tháng đó có bao nhiêu ngày
//
//  Created by le hoang an on 1/31/21.
//

#include <iostream>
#include <math.h>
using namespace std;

const int minYear = 1900, maxYear = 10000;
int KiemTraNamNhuan (int nam){
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

void TimSoNgayTrongThang (int  thang, int nam){
    switch (thang)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("\n co 31 ngay");
            break;
        case 4: case 6: case 9: case 11:
            printf("\nco 30 ngay");
            break;
        case 2:
            int Check = KiemTraNamNhuan(nam);
            if(Check == 1)
            {
                printf("\nco 29 ngay");
            }
            else{
                printf("\n co 38 ngay");
            }
    }
}

int main()
{
    int Thang, Nam;
    do
    {
        printf("\nnhap vao thang: ");
        scanf("%d", &Thang);
        if (Thang < 1 || Thang > 12)
            printf("\nDu lieu thang khong hop le. Xin nhap thang khac");
        }while(Thang < 1 || Thang > 12);
        do{
            printf("\nNhap vao nam: ");
            scanf("%d", &Nam);
            if(Nam < minYear || Nam > maxYear){
                printf("\nDu lieu nam khong hop le. xin nhap nam khac");
            }
        }while(Nam < minYear || Nam > maxYear);
        
        TimSoNgayTrongThang(Thang, Nam);
    return 0;
}
