#include <iostream>
#include <cstring>
using namespace std;
void getline( char* buffer, streamsize num);

string arr(int r){
    string word;
    switch(r){
	case 48: word = "zero"; break;
	case 49: word = "one"; break;
	case 50: word = "two"; break;
	case 51: word = "three"; break;
	case 52: word = "four"; break;
	case 53: word = "five"; break;
	case 54: word = "six"; break;
	case 55: word = "seven"; break;
	case 56: word = "eight"; break;
	case 57: word = "nine"; break;
	}
return word;
}

int main()
{
	string a, word; int z = -1, r; 
	getline(cin, a);
	int w = a.length();
	int size = w*5;
	char* b = new char[size];
	for(int i = 0; i<w; i++){
	    r = int (a[i]);
	    if(r>=48&&r<=57){
		word = arr(r);
	        int y = word.length(); 
	        for (int i = 0; i < y; i++) {
			z++;
			*(b+z) = word[i];
		}
	   }
	    else {z++; *(b+z)=a[i];}
	}
	for(int j=0;j<=z;j++)cout<<*(b+j);
	
	return 0;
}
