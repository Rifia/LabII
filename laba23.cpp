#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in;
    in.open("input.txt");
    
    string str;
    int linenum = 0;
    
    while (getline(in, str)) {
        cout << str<< endl;
        linenum++;
        
    }
    
    in.close();
    in.open("input.txt");
    cout << "количество строк = " << linenum << endl;;
    
    ofstream out;
    out.open("output.txt");
    if(!out.is_open()){
        cout<<"File not found";
    }
    else cout<<"File is opened"<<endl;
    
    int count = 0;
    
    while (getline(in, str)) {
        cout << str << endl;
        count++;
        for(int i = 0; i<str.length();i++)
            if(str[i]<='0' && str[i]>='9')
    }
    
    in.close();
    out.close();
   
    return 0;
