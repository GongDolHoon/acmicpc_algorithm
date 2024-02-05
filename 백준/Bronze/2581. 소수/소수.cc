#include <bits/stdc++.h>
using namespace std;

// 1 <= M <= N <= 10,000
int _m;
int _n;

vector<bool> _vb(10001, true);

long long _ret_sum;
int _ret_min;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	_vb[0] = false;
	_vb[1] = false;
	
	for(int i = 2; i <= 10000; ++i)
	{
		for(int j = 2; j * i <= 10000; ++j)
		{
			_vb[i*j] = false;	
		}	
	}
	
	// I-1. 입력의 첫째 줄에 M이,
	// I-2. 둘째 줄에 N이 주어진다.
	cin >> _m >> _n;
	
	bool trigger = false;
	
	// O-1. M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을,
	for(int i = _m; i <= _n; ++i)
	{
		if(_vb[i] == true)
		{
			if(trigger == false)
			{
				trigger = true;
				_ret_min = i;
			}
			_ret_sum += i;
		}	
	}	
	
	if(trigger == false)
	{
		cout << "-1\n";
		return 0;
	}
	
	cout << _ret_sum << '\n';
	// O-2. 둘째 줄에 그 중 최솟값을 출력한다.
	cout << _ret_min << '\n';
	// O-3. 단, M이상 N이하의 자연수 중 소수가 없을 경우에는 첫째 줄에 -1을 출력한다. 
	
	return 0;
}