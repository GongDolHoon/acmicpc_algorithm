#include <bits/stdc++.h>
using namespace std;

vector<long long> _vl(25, 0);
int _n;

long long fibo(int n)
{
	if(n == 0 || n == 1)
	{
		return _vl[n];
	}
	
	if(_vl[n] == 0)
	{
		_vl[n] = fibo(n-1) + fibo(n-2);
		return _vl[n];
	}
	else
	{
		return _vl[n];
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	_vl[0] = 0;
	_vl[1] = 1;
	// I-1. 첫째 줄에 n이 주어진다. n은 20보다 작거나 같은 자연수 또는 0이다.
	cin >> _n;
	
	// O-1. 첫째 줄에 n번째 피보나치 수를 출력한다.
	cout << fibo(_n) << '\n';
	
	return 0;
}