#include <bits/stdc++.h>
using namespace std;

int _t;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	int a, b;
	string s;
	// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. A와 B는 콤마(,)로 구분되어 있다. (0 < A, B < 10)
	for(int i = 0; i < _t; ++i)
	{
		cin >> s;
		
		a = s[0] - '0';
		b = s[2] - '0';
		
		// O-1. 각 테스트 케이스마다 A+B를 출력한다.
		cout << a + b << '\n';
	}
	
	return 0;
}