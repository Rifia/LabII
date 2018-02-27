#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main() {
    
    ifstream file("input.txt");//open file
    
    string filename;
    cin >> filename;
    ofstream ofs(filename.c_str());
    
    char *str = new char [1024];//count strings
    int i=0;
    while (!file.eof())
    {
        file.getline(str, 1024, '\n');
        i++;
    }
    delete[]str;
    
    for(int j = i; j<i; j++){
       
        }
return 0;
}
