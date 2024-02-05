#include <bits/stdc++.h>
using namespace std;

// 0 < A, B < 10
int _a;
int _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 여러 개의 테스트 케이스로 이루어져 있다.
	while(true)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다.
		cin >> _a >> _b;
		
		// I-3. 입력의 마지막에는 0 두 개가 들어온다.	
		if(_a == 0 && _b == 0)
		{
			break;
		}
		
		// O-1. 각 테스트 케이스마다 A + B를 출력한다. 	
		cout << _a + _b << '\n';
	}
	
	return 0;
}