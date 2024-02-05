#include <bits/stdc++.h>
using namespace std;

// 1 <= x, y <= 2^31-1
long long _x;
long long _y;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	while(true)
	{
		// I-1. 한 줄에 걸쳐 한 테스트 케이스가 입력된다.
		// 첫 번째 정수는 분자고 두 번째는 분모이다.
		cin >> _x >> _y;
		// I-2. "0 0"입력이 들어오는 라인에서 입력을 종료한다.
		if(_x == 0 && _y == 0)
		{
			return 0;
		}
		
		// O-1. 각 테스트 케이스에 대해 한 줄에 걸쳐 주어진 입력에 맞는
		// 대분수를 공백토큰으로 구분하여 출력하라. 	
		cout << _x / _y << ' ' << _x % _y << " / " << _y << '\n';
	}
	
	return 0;
}