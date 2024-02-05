#include <bits/stdc++.h>
using namespace std;

// _n <= 100
int _n;
int _ret;

vector<bool> _vb(1001, true);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 줄에 수의 개수 N이 주어진다.
	cin >> _n;
	
	// I-2. 다음으로 N개의 수가 주어지는데, 수는 1,000이하의 자연수이다.
	int t;
	
	_vb[0] = false;
	_vb[1] = false;
	for(int i = 2; i <= 1000; ++i)
	{
		for(int j = 2; j * i <= 1000; ++j)
		{
			_vb[i * j] = false;
		}
	}
	
	while(_n--)
	{
		cin >> t;
		
		if(_vb[t] == true)
		{
			_ret++;
		}
	}
	
	// O-1. 주어진 수들 중 소수의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}