#include <bits/stdc++.h>
using namespace std;

// 0 < A, B < 10
int _a, _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 여러 개의 테스트 케이스로 이루어져 있다. 
	// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며, 각줄에 A와 B가 주어진다.
	while(cin >> _a >> _b)
	{
		// O-1. 각 테스트 케이스마다 A+B를 출력한다. 
		cout << _a + _b << '\n';
	}
	
	return 0;
}