#include <bits/stdc++.h>
using namespace std;

// -5000 <= a, b, c, d <= 2000
int _a, _b, _c, _d; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	while(true)
	{
		// I-1. 테스트 케이스는 여러줄에 걸쳐 입력된다.
		// I-2. 각 테스트 케이스는 4개의 정수 a, b, c, d로 이루어져 있다.
		// I-2-1. [a, b]는 출생일의 범위, [c, d]는 사망일의 범위이다.
		cin >> _a >> _b >> _c >> _d;
		// I-3. a, b, c, d의 입력이 모두 0일 경우 프로그램을 종료한다.
		if(_a == 0 && _b == 0 && _c == 0 && _d == 0)
		{
			return 0;
		}
		
		// O-1. 각 테스트 케이스마다 최소나이와 최대나이를 공백으로 나눠 출력한다. 	
		cout << _c - _b << ' ' << _d - _a << '\n';
	}
	
	return 0;
}