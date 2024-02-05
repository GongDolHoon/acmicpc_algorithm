#include <bits/stdc++.h>
using namespace std;

// 1 <= X <= 12
// 1 <= Y <= 31
int _x, _y;

int _ret;

vector<int> _vi(12, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 빈 칸을 사이에 두고 x와 y가 주어진다.
	cin >> _x >> _y;
	
	_vi[0] = 31;
	_vi[1] = 28;
	_vi[2] = 31;
	_vi[3] = 30;
	_vi[4] = 31;
	_vi[5] = 30;
	_vi[6] = 31;
	_vi[7] = 31;
	_vi[8] = 30;
	_vi[9] = 31;
	_vi[10] = 30;
	_vi[11] = 31;
	
	for(int i = 0; i < _x - 1; ++i)
	{
		_ret += _vi[i];
	}
	
	_ret += _y;
	// O-1. 첫째 줄에 x월 y일이 무슨 요일인지에 따라 SUN, MON, TUE, WED, THU, FRI, SAT 중
	// 하나를 출력한다. 
	switch(_ret % 7)
	{
	case 0:
		cout << "SUN\n";
		break;
	case 1:
		cout << "MON\n";
		break;
	case 2:
		cout << "TUE\n";
		break;
	case 3:
		cout << "WED\n";
		break;
	case 4:
		cout << "THU\n";
		break;
	case 5:
		cout << "FRI\n";
		break;
	case 6:
		cout << "SAT\n";
		break;
	defualt:
		break;
	}
	
	return 0;
}