#include <bits/stdc++.h>
using namespace std;

// 1 <= E <= 15
int _e;
// 1 <= S <= 28
int _s;
// 1 <= M <= 19
int _m;

int _ret = 1;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 세 수 E, S, M이 주어진다. 
	cin >> _e >> _s >> _m;
	
	while(true)
	{
		if((_ret % 15 == _e % 15) && (_ret % 28 == _s % 28) && (_ret % 19 == _m % 19))
		{
			break;	
		}
		
		_ret++;	
	}
	
	// O-1. 첫째 줄에 E S M으로 표시되는 가장 빠른 연도를 출력한다.
	// 정답이 음수가 나오는 경우는 없다. 
	cout << _ret << '\n';
	
	return 0;
}