#include <bits/stdc++.h>
using namespace std;

// 1 <= C <= B <= A <= 100
int _a, _b, _c;

// 1 <= X, Y <= 100
int _x, _y;

vector<int> _vi(101, 0);
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 문제에서 설명한 주차 요금 A, B, C가 주어진다.
	cin >> _a >> _b >> _c;
	
	for(int i = 0; i < 3; ++i)
	{
		// I-2. 다음 세 개 줄에는 두 정수가 주어진다.
		// 이 정수는 상근이가 가지고 있는 트럭이 주차장에 도착한 시간과 주차장에서 떠난 시간이다.	
		cin >> _x >>  _y;
		
		for(int j = _x; j < _y; ++j)
		{
			_vi[j]++;
		}
	}
	
	for(int i = 0; i < 101; ++i)
	{
		switch(_vi[i])
		{
		case 0:
			break;
		case 1:
			_ret += _a;
			break;
		case 2:
			_ret += (_b * 2);
			break;
		case 3:
			_ret += (_c * 3);
			break;
		default:
			break;
		}
	}
	
	// O-1. 첫째 줄에 상근이가 내야 하는 주차 요금을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}