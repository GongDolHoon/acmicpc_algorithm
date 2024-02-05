#include <bits/stdc++.h>
using namespace std;

// 0 < n < 101
int _n;
int _ret;

vector<bool> _vb(101, false);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 손님의 수 N이 주어진다.
	cin >> _n;
	
	int tmp;
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄에 손님이 들어오는 순서대로 각 손님이 앉고 싶어하는 자리가 입력으로 주어진다.	
		cin >> tmp;
		
		if(_vb[tmp] == false)
		{
			_vb[tmp] = true;
		}
		else
		{
			_ret++;
		}
	}
	
	// O-1. 첫째 줄에 거절당하는 사람의 수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}