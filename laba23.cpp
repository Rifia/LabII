#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in;
    string fileinput;
    cout << "enter file name: ";
    getline(cin, fileinput);
    in.open(fileinput);
    
    string str;
    int linenum = 0;
    
    while (getline(in, str)) {
        linenum++;
    }
    in.close();
    
    in.open(fileinput);
    
    ofstream out;
    out.open("output.txt");
    
    if(!out.is_open()){
        cout<<"File not found";
    }
    else cout<<"File is opened"<<endl;
    
    int count = 0;
    
    while (getline(in, str)) {
        count++; 
        bool q = true;
        for(int i = 0; i<str.length(); i++){
            if( str[i]<'0' || str[i]>'9') {
				q = false; 
				break;
			}
        }
		if ( q == true || count >= linenum - 1){
			out << str << '\n';
			}
		}
    
    in.close();
    out.close();
   
    return 0;
	}
