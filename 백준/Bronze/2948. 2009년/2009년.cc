#include <bits/stdc++.h>
using namespace std;

int _d, _m;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	vector<int> vi(12, 0);
	
	vi[0] = 31;
	vi[1] = 28;
	vi[2] = 31;
	vi[3] = 30;
	vi[4] = 31;
	vi[5] = 30;
	vi[6] = 31;
	vi[7] = 31;
	vi[8] = 30;
	vi[9] = 31;
	vi[10] = 30;
	vi[11] = 31;
		
	// I-1. 첫째 줄에 D와 M이 주어진다.
	cin >> _d >> _m;
	
	int ret = 0;
	
	for(int i = 0; i < _m - 1; ++i)
	{
		ret += vi[i];
	}
	
	ret += _d;
	
	// O-1. 2009년 M월 D일의 요일을 영어로 출력한다. 
	switch(ret % 7)
	{
	case 0:
		cout << "Wednesday\n";
		break;
	case 1:
		cout << "Thursday\n";
		break;
	case 2:
		cout << "Friday\n";
		break;
	case 3:
		cout << "Saturday\n";
		break;
	case 4:
		cout << "Sunday\n";
		break;
	case 5:
		cout << "Monday\n";
		break;
	case 6:
		cout << "Tuesday\n";
		break;
	default:
		break;
	}
	
	return 0;
}