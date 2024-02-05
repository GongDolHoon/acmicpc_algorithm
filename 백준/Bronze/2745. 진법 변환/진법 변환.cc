#include <bits/stdc++.h>
using namespace std;

// B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다. 
string _n;
// 2 <= B <=26
int _b;

long long _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 B가 주어진다.
	cin >> _n >> _b;
	
	// I-2. B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.
	for(int i = 0; i < _n.size(); ++i)
	{
		if(_n[i] >= '0' && _n[i] <= '9')
		{
			_ret += (_n[i] - '0') * (long long)pow(_b, _n.size() - i - 1);
		}
		else if(_n[i] >= 'A' && _n[i] <= 'Z')
		{
			_ret += (_n[i] - 'A' + 10) * (long long)pow(_b, _n.size() - i - 1);
		}	}
	
	// O-1. 첫째 줄에 B진법 수 N을 10진법으로 바꾸어 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}