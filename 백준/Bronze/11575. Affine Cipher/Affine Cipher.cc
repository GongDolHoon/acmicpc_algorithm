#include <bits/stdc++.h>
using namespace std;

// 1 <= t <= 50
int _t;

// 0 < a, b <= 1,000,000
// a는 26와 서로소 
int _a, _b;

// 0 < |s| < 1,000,000
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스의 첫 번째 줄에는 두 정수 a와 b의 값이 주어진다.
		cin >> _a >> _b;
		// I-3. 각 테스트 케이스의 두 번째 줄에는 평문 s가 주어진다.  
		cin >> _s;
		
		int x = 0;
		int y = 0;
		
		for(int i = 0; i < _s.size(); ++i)
		{
			x = _s[i] - 'A';
			y = (_a * x + _b) % 26;
			_s[i] = y + 'A';
		}
		
		// O-1. 각 테스트 케이스마다 한 줄에 한 개씩 평문 s를 암호문으로 치환한 결과를 출력한다. 	
		cout << _s << '\n';
	}
	
	return 0;
}