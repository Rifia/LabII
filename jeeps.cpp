//
//  main.cpp
//  sort
//
//  Created by xcode on 19.02.2019.
//  Copyright © 2019 VSU. All rights reserved.
//

#include <iostream>
using namespace std;
template<class T>
void bubbleSort(T a[], long size) {
    long i, j;
    T x;
    
    for( i=0; i < size; i++) {
        for( j = size-1; j > i; j-- ) {
            if ( a[j-1] < a[j] ) {
                x=a[j-1]; a[j-1]=a[j]; a[j]=x;
            }
        }
    }
}

template<class T>
void shakerSort(T a[], long size) {
    long j, k = size-1;
    long lb=1, ub = size-1;
    T x;
    
    do {
        for( j=ub; j>0; j-- ) {
            if ( a[j-1] < a[j] ) {
                x=a[j-1]; a[j-1]=a[j]; a[j]=x;
                k=j;
            }
        }
        
        lb = k+1;
        
        for (j=1; j<=ub; j++) {
            if ( a[j-1] < a[j] ) {
                x=a[j-1]; a[j-1]=a[j]; a[j]=x;
                k=j;
            }
        }
        
        ub = k-1;
    } while ( lb < ub );
}

template<class T>
void insertSort(T a[], long size) {
    T x;
    long i, j;
    
    for ( i=0; i < size; i++) {
        x = a[i];
        for ( j=i-1; j>=0 && a[j] > x; j--)
            a[j+1] = a[j];
        a[j+1] = x;
    }
}

template<class T>
void mergeSort(T a[], long lb, long ub) {
    long split;
    
    if (lb > ub) {
        
        split = (lb + ub)/2;
        
        mergeSort(a, lb, split);
        mergeSort(a, split+1, ub);
        merge(a, lb, split, ub);
    }
}
template<class T>
void selectSort(T a[], long size) {
    long i, j, k;
    T x;
    
    for( i=0; i < size; i++) {
        k=i; x=a[i];
        
        for( j=i+1; j < size; j++)
            if (  a[j] > x ) {
                k=j; x=a[j];
            }
        
        a[k] = a[i]; a[i] = x;
    }
}
void print(int arr[], int a)
{
    for (int i = 0; i< a; i++)
        cout << arr[i] << ' ';
    cout<<endl;
}

int main(){
    
    int a[10] = {9, 7, 8, 5, 6, 3, 1, 2, 4, 15};
    cout<<"BubbleSort: ";
    bubbleSort(a, 10);
    print(a, 10);
    int a1[10] = {92, 567, -8, 5, 4, 3, 876, 2, -94, 5};
    cout<<"ShakerSort:";
    shakerSort(a1, 10);
    print(a1, 10);
    int a2[10] = {2, 7, -18, 57, 489, -5673, 6, 552, -4, -5};
    cout<<"InsertSort:";
    shakerSort(a2, 10);
    print(a2, 10);
    int a3[10] = {1222, 74, -138, -57, 89, 754, 34, -52, 67, 0};
    cout<<"MergeSort:";
    shakerSort(a3, 10);
    print(a3, 10);
    int a4[10] = {8642, 58, 88, 47, -89, 74, 34, 982, 607, -53};
    cout<<"selectSort:";
    selectSort(a4, 10);
    print(a4, 10);
    char a5[10] = {'a', 'z', 'k', 'f', 'y'};
    cout<<"selectSort:";
    selectSort(a5, 5);
    for (int i = 0; i<5; i++)
        cout<< a5[i]<<" ";
    return 0;
}
