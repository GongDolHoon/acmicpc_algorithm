#include <bits/stdc++.h>
using namespace std;

// 3 <= N <= 5000
int _n;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	
	int a = _n / 5;
	
	for(int i = a; i > a - 6; --i)
	{
		if(i < 0)
		{
			break;
		}
		
		int b = _n - i * 5;
		if(b % 3 == 0)
		{
			_ret = b / 3 + i;	
			break;
		}
	}
	
	// O-1. 상근이가 배달하는 봉지의 최소 개수를 출력한다.
	// 만약 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다. 
	if(_ret == 0)
	{
		cout << "-1\n";
	}
	else
	{
		cout << _ret << '\n';
	}
	
	return 0;
}