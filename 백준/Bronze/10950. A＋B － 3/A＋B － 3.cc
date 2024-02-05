#include <bits/stdc++.h>
using namespace std;

int _t;
// 0 < A, B < 10
int _a;
int _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	while(_t--)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다.
		cin >> _a >> _b;
		
		// O-1. 각 테스트 케이스마다 A+B를 출력한다. 	
		cout << _a + _b << '\n';
	}
	
	return 0;
}