#include <iostream>
#include <vector>
using namespace std;
int main() {
    double sum = 0.0; int s = 0, r, l, min = 0, n;
	  cin >> n; 
    vector<double> a; a.reserve(n); 
    
	for (int i = 0; i < n; i++) {
	cin >> a[i];
	if (a[i]<0){sum += a[i]; s++;} 
		else{ 
			if(sum < min){min = sum; r = i-1; l = r-s+1;} 
			sum = 0.0; s = 0.0;
			}
	}
	for (int i = l; i <= r; i++) cout << a[i] << ' ';
	return 0;
}