#include <bits/stdc++.h>
using namespace std;

int _ret;
// 1 <= money <= 999
int _money;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 한 줄로 이루어져 있고, 타로가 지불할 돈 1개가 쓰여져있다.
	cin >> _money;
	
	_money = 1000 - _money;
	
	while(_money > 0)
	{
		if(_money >= 500)
		{
			_ret++;
			_money-=500;
		}
		else if(_money >= 100)
		{
			_ret++;
			_money-=100;
		}
		else if(_money >= 50)
		{
			_ret++;
			_money-=50;
		}
		else if(_money >= 10)
		{
			_ret++;
			_money-=10;
		}
		else if(_money >= 5)
		{
			_ret++;
			_money-=5;
		}
		else if(_money >= 1)
		{
			_ret++;
			_money-=1;
		}
	}
	
	// O-1. 제출할 출력 파일은 1행으로만 되어 있다. 잔돈에 포함된 매수를 출력하시오. 
	cout << _ret << '\n';
	
	return 0;
}