#include <bits/stdc++.h>
using namespace std;

int _a, _b, _c, _d;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 0; i < 3; ++i)
	{
		_a = 0;
		_b = 0;
		_c = 0;
		_d = 0;
		// I-1. 첫째 줄부터 셋째 줄까지 각 줄에 각각 한 번 던진 윷짝들의 상태를 나타내는 네 개의 정수가 빈칸을
		cin >> _a >> _b >> _c >> _d;
	
		int res = _a + _b + _c + _d;
		// O-1. 첫째 줄부터 셋째 줄까지 한 줄에 하나씩 결과를 도는 A, 개는 B, 걸은 C, 윷은 D, 모는 E로 출력한다. 	
		switch(res)
		{
		case 0:
			cout << "D\n";
			break;
		case 1:
			cout << "C\n";
			break;
		case 2:
			cout << "B\n";
			break;
		case 3:
			cout << "A\n";
			break;
		case 4:
			cout << "E\n";
			break;
		default:
			break;
		}
	}
	
	return 0;
}