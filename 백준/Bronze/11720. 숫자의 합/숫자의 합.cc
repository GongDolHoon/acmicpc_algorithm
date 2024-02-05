#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 100
int _n;

string _s;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 숫자의 개수 N이 주어진다.
	cin >> _n;
	// I-2. 둘째 줄에 숫자 N개가 공백없이 주어진다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		_ret += _s[i] - '0';
	}
	// O-1. 입력으로 주어진 숫자 N개의 합을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}