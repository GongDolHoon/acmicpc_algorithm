#include <bits/stdc++.h>
using namespace std;

// 0 < A, B < 10
int _a, _b;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 A와 B가 주어진다. 
	cin >> _a >> _b;
	
	_ret = _a - _b;
	// O-1. 첫째 줄에 A-B를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}