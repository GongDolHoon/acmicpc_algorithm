#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,0000,0000
long long _n;
// 2 <= B <= 36
int _b;

string _ret;

vector<string> _vs(36);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 B가 주어진다.
	cin >> _n >> _b;
	
	for(int i = 0; i < 36; ++i)
	{
		if(i >= 0 && i <= 9)
		{
			_vs[i] = i + '0';
		}
		
		if(i >= 10 && i < 36)
		{
			_vs[i] = i + 'A' - 10;
		}
	}
	
	while(_n > 0)
	{
		_ret += _vs[_n % _b];
		_n /= _b;
	}
	
	reverse(_ret.begin(), _ret.end());
	
	// O-1. 첫째 줄에 10진법 수 N을 B진법으로 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}