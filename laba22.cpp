#include <iostream>
#include <cstring>
using namespace std;

string arr(char r){
    string word;
    switch(r){
        case '0': word = "zero"; break;
        case '1': word = "one"; break;
        case '2': word = "two"; break;
        case '3': word = "three"; break;
        case '4': word = "four"; break;
        case '5': word = "five"; break;
        case '6': word = "six"; break;
        case '7': word = "seven"; break;
        case '8': word = "eight"; break;
        case '9': word = "nine"; break;
    }
    return word;
}

int main()
{
    string a; int z = -1;
    getline(cin, a);
    unsigned long w = a.length();
    char* b = new char[5*w];
    for(int i = 0; i<w; i++){
        if(a[i]>='0'&&a[i]<='9'){
            string word = arr(a[i]);
            unsigned long y = word.length();
            for (int i = 0; i < y; i++) {
                z++;
                *(b+z) = word[i];
            }
        }
        else {z++; *(b+z)=a[i];}
    }
    for(int j=0;j<=z;j++)cout<<*(b+j);
    delete[]b;
    cout << endl;
    
    return 0;
}
