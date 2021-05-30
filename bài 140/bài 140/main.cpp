// Bài 140: Hãy tìm giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì sẽ trả về -1

#include <iostream>
#include <math.h>
using namespace std;
#define Max 100

void input_the_array(float a[], int n){
    do{
        if(n < 0 || n > Max){
            cout << " invalid value of n";
        }
    }while(n < 0 || n > Max);
    for (int i = 0; i < n; ++i){
        printf("\nInput the value of the menbers: ");
        scanf("%f", &a[i]);
    }
}

float find_the_first_positive_number(float a[], int n){
    for (int i = 0; i < n; ++i){
        if (a[i] > 0){
            return a[i];
        }
    }
    return -1;
}

float find_the_smallest_positive_number(float a[], int n){
    float smallest = find_the_first_positive_number(a, n);
    if (smallest == -1){
        return -1;
    }
    for (int i = 0; i < n; ++i){
        if (a[i] > 0 && a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    return smallest;
}

int main(){
    int n;
    printf("\nInput the array members: ");
    scanf("%d", &n);
    
    float a[n];
    input_the_array(a, n);
    float val = find_the_smallest_positive_number(a, n);
    cout << "the smallest positive value is: " << val << endl;
    return 0;
}
