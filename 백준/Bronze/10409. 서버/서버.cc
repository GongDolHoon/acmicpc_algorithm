#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 50, 1 <= T <= 500
int _n, _t;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 줄은 두 정수 n과 T이며, n은 일의 개수를 나타낸다. 
	cin >> _n >> _t;
	
	int due = 0;
	int t;
	
	for(int i = 0; i < _n; ++i)
	{
		cin >> t;
		due += t;
		
		if(due <= _t)
		{
			_ret++;	
		}
	}
	
	// O-1. 일이 First-come, First-served 규칙에 따라 처리될 때, T분 안에 완료될 수 있는 이들의 개수를 출력하라. 
	cout << _ret << '\n';
	
	return 0;
}