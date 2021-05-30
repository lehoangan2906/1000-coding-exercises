//
//  main.cpp
//  bài 102
//  Viết chươg trình nhập vào một ngày, output là ngày kế tiếp ngày vừa nhập
//  Created by le hoang an on 1/31/21.
//

#include <iostream>
#include <math.h>
using namespace std;

const int Minyear = 1900, Maxyear = 10000;

int Kiemtranamnhuan (int nam){
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int timngaytrongthang (int thang, int nam){
    int ngaytrongthang ;
    switch (thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ngaytrongthang = 31;
            break;
        case 4: case 6: case 9: case 11:
            ngaytrongthang = 30;
            break;
        case 2:
            int check = Kiemtranamnhuan(nam);
            if ( check == 1){
                ngaytrongthang = 29;
            }
            else {
                ngaytrongthang = 28;
            }
    }
            return ngaytrongthang;
}

void timngayketiep (int ngay, int thang, int nam){
    int ngaytrongthang = timngaytrongthang(thang, nam);
    if (ngay < ngaytrongthang){
        ngay ++ ;
    }
    else if ( thang < 12){
        ngay = 1;
        thang ++;
    }
    else{
        ngay = thang = 1;
        nam ++;
    }
    printf("\nNgay ke tiep la: %d - %d - %d ", ngay, thang, nam);
}


//int main(){
//    int ngay, thang, nam;
//    do
//    {
//        printf("\nnhap vao nam: ");
//        scanf("%d", &nam);
//        if(nam < Minyear || nam > Maxyear)
//            printf("\ndu lieu khong hop le, kiem tra lai nam");
//        }while (nam < Minyear || nam > Maxyear);
//
//    do {
//        printf("\nnhap vao thang: ");
//        scanf("%d", &thang);
//        if(thang < 1 || thang > 12)
//            printf("\ndu lieu thang khong hop le, kiem tra lai thang");
//        }while (thang < 1 || thang > 12);
//
//    int ngaytrongthang = timngaytrongthang(thang, nam);
//    do
//    {
//        printf("\nnhap vao ngay: ");
//        scanf("%d", &ngay);
//        if(ngay < 1 || ngay > ngaytrongthang)
//            printf("\ndu lieu ngay khong hop le, kiem tra lai ngay");
//        }while (ngay < 1 || ngay > ngaytrongthang);
//
//    timngayketiep(ngay, thang, nam);
//
//    return 0;
//}

int main(){
    int ngay, thang, nam;
        printf("\nnhap vao nam: ");
        scanf("%d", &nam);
        printf("\nnhap vao thang: ");
        scanf("%d", &thang);
        printf("\nnhap vao ngay: ");
        scanf("%d", &ngay);

    while(nam < Minyear || nam > Maxyear){
            printf("\ndu lieu khong hop le, kiem tra lai nam");
        }
    while(thang < 1 || thang > 12){
            printf("\ndu lieu thang khong hop le, kiem tra lai thang");
        }
    int ngaytrongthang = timngaytrongthang(thang, nam);
    while(ngay < 1 || ngay > ngaytrongthang){
            printf("\ndu lieu ngay khong hop le, kiem tra lai ngay");
        }
    timngayketiep(ngay, thang, nam);
    
    return 0;
}
