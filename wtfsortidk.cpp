#include <iostream>
using namespace std;

void Sift(int a[], int left, int right){
    int new_key;
    int son, i = left;
    new_key=a[i];
    son = 2 * i + 1;
    while (i < right/2){
        if(i < right && a[son + 1] < a[son]) son ++;
        if (new_key < a[son]) break;
        a[i] = a[son]; i = son;
        son = 2 * i + 1;
    }
    a[i] = new_key;
}
void Pyramid_sort(int a[], int n){
    int left, right;
    left = n/2;
    right = n;
    while(left > 0){
        left--; Sift(a, left, right);
        while(right > 0){
            int temp = a[0];
            a[0] = a[right];
            a[right] = temp;
            right--;
            Sift(a, left, right);
        }
    }
}


int main(){
    int a[9] = {6, 42, 12, 55, 94, 18, 44, 67, 6};
    Pyramid_sort(a, 9);
    for (int i = 0; i < 9; i++) cout << a[i];
    return 0;
}
