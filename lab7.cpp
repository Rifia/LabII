#include <iostream>
using namespace std;

int length;

void read_road (bool **&m, int n)
{
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>m[i][j];
}

void write_road (int *num, int n)
{
	cout<<'0'<<' ';
	int i=1;
	while (i<length+1)
	{
		for (int j=0; j<n; j++)
			if (i == num[j]) cout<<j<<' ';
		i++;
	}
		
}

bool check (int *block, int b, int j)
{
	for (int i=0; i<b; i++)
		if (block[i] == j) return false;
	
	return true;
}

void search (bool **&a, int n, int j, int *&num, bool &f, int step, int *block, int b)
{
	if (j==1) 
	{
		f = true;
		length = num[j] = step;
	}
	else
	{
		num[j]=step;
		for (int k=0; k<n && !f; k++)
			if (a[j][k]==1 && check(block, b, k)) search (a, n, k, num, f, step+1, block, b);
		if (!f) num[j]=-1;
	}
	
}

int main ()
{
	int b;
	int *block = new int [b];
	cin>>b;
	cout<<"BLOCKED: ";
	for (int i=0; i<b; i++)
		cin>>block[i];
	
	int n;
	cin>>n;
	
	int *num = new int [n];
	for (int i=0; i<n; i++)
		num[i]=-1;
		
	bool **a = new bool *[n];
	for (int i=0; i<n; i++)
		a[i] = new bool[n];
	read_road (a, n);
	
	bool f = false;
	int step = 0;
	for (int j=0; j<n && !f; j++)
		if (a[0][j] == 1 && check(block, b, j)) search (a, n, j, num, f, step+1, block, b);
	
	if (f)
		write_road (num, n);
	else 
		cout<<"NO ROAD BETWEEN 0 AND 1";
		
	return 0;
}
