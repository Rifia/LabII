#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	//делитель подходящего числа
	const int divider = 15;
	
	int i = 0;	
		
	//ввод числа разрядов
	int k;
	cout << "Enter k<=10: ";
	cin >> k;
	
	//максимально возможное число для перебора
	int limit = pow(10, k);
	limit--;
	cout << limit;
	cout<<"\n";
	
	//кол-во обязательных перестановок 2 и 6, которые должны быть в числе
	int c = 0;
	for(int i = k - 2; i>=1; i-- ){
		c+=i;
	}
	c*=2;
	cout << c;
	
	//всего k-значных чисел для перебора без проверки делимости на 3
    c = c*2*((limit+1)/1000);
    cout<<c;
	
	return 0;
}
