#include <iostream>
#include <string>
using namespace std;

string rpl (char k){
    string word;
    switch (k){
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
        default: word = k;
    }
    return word;
}

int main()
{
    string str;
    string str1;
    char w;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        char w = *(str+i);
        str1 += rpl(w);
    }
    
    
    return 0;
}

