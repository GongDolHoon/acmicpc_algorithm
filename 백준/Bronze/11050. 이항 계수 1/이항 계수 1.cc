#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 10
int _n;
// 0 <= K <= N
int _k; 

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 K가 주어진다.
	cin >> _n >> _k;
	
	_ret = 1;
	
	for(int i = _n; i > _n - _k; --i)
	{
		_ret *= i;
	}
	
	for(int i = 2; i <= _k; ++i)
	{
		_ret /= i;
	}
	
	// O-1. (N K)를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}