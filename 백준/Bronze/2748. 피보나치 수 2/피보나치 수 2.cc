#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 90
int _n;

vector<long long> _vi(100, 0);

long long fibonacci(int n)
{
	if(n == 0 || n == 1)
	{
		return _vi[n];
	}
	
	if(_vi[n] != 0)
	{
		return _vi[n];
	}
	else
	{
		_vi[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return _vi[n];
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	_vi[0] = 0;
	_vi[1] = 1;
	
	// I-1. 첫째 줄에 n이 주어진다.
	cin >> _n;
		
	// O-1. 첫째 줄에 n번째 피보나치 수를 출력한다. 
	cout << fibonacci(_n) << '\n';
	
	return 0;
}