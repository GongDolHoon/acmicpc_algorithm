#include <bits/stdc++.h>
using namespace std;

// 1 <= m <= 12
int _m;
// 1 <= d <= 31
int _d; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 두 개의 정수가 각 줄에 걸쳐 입력된다.
	// I-1-1. 첫 번째 줄은 1~12 사이의 월을 입력한다.
	// I-1-2. 두 번째 줄은 1~31 사이의 일을 입력한다.
	cin >> _m >> _d;
	
	// O-1. 마지막 줄에 "Before", "After"나 "Special"을 출력한다. 
	if(_m < 2)
	{
		cout << "Before\n";
	}
	else if(_m == 2)
	{
		if(_d < 18)
		{
			cout << "Before\n";
		}
		else if(_d == 18)
		{
			cout << "Special\n";
		}
		else
		{
			cout << "After\n";
		}
	}
	else
	{
		cout << "After\n";
	}
	
	return 0;
}