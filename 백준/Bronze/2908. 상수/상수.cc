#include <bits/stdc++.h>
using namespace std;

// 두 수는 같지 않은 세 자리 수이며, 0이 포함되어 있지 않다. 
int _a, _b;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 상근이가 칠판에 적은 두 수 A와 B가 주어진다.
	cin >> _a >> _b;
	
	string a = to_string(_a);
	string b = to_string(_b);
	
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	_a = stoi(a);
	_b = stoi(b);
	
	_ret = _a > _b ? _a : _b;
	
	// O-1. 첫째 줄에 상수의 대답을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}