#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 10000
int _n;
long long _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 n이 주어진다.
	cin >> _n;
	
	_ret = _n * (_n + 1) / 2; 
	
	// O-1. 1부터 n까지의 합을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}