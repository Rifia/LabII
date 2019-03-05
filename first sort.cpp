
//
//  main.cpp
//  soryalg
//
//  Created by xcode on 05.03.2019.
//  Copyright © 2019 VSU. All rights reserved.
//

#include <iostream>
using namespace std;

void sft(int * a, int left, int right)
{
    int new_key;
    int son;
    new_key = a[left];
    while(left <= right/2)
    {
        son = 2*left;
        if( son < right && a[son] < a[son+1] )
            son++;
        if( new_key >= a[son] )
            break;
        a[left] = a[son];
        left = son;
    }
    a[left] = new_key;
}

void Pyramid_Sort(int * a, int n)
{
    int i, temp;
    for(i=n/2-1; i >= 0; i--)
        sft(a, i, n-1);
    for(i=n-1; i > 0; i--)
    {
        temp=a[i];
        a[i]=a[0];
        a[0]=temp;
        sft(a, 0, i-1);
    }
}

void print_arr(int * a, int n)
{
    cout << "Ваш массив: " << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main(int argc, const char * argv[])
{
    int n;
    cout << "Введите размер массива: \n";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = rand()%50;
    print_arr(a, n);
    Pyramid_Sort(a, n);
    cout << "Выполняем пирамидальную сортировку.. " << endl;
    print_arr(a, n);
    return 0;
}
