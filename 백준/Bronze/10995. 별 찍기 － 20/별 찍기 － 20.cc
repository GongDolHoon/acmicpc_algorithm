#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 100
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	
	// O-1. 첫째 줄부터 차례대로 별을 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		if(i % 2 == 0)
		{
			for(int j = 0; j < _n; ++j)
			{
				cout << "* ";
			}
		}
		else
		{
			for(int j = 0; j < _n; ++j)
			{
				cout << " *";
			}
		}
		cout << '\n';
	}
	
	return 0;
}