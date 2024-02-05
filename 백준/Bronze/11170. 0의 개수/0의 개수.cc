#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 20
int _t;
// 0 <= N <= M <= 1,000,000
int _n;
int _m;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 테스트 케이스의 수 T가 주어진다.
	cin >> _t;
	
	// I-2. 각 줄에는 N과 M이 주어진다. 
	for(int i = 0; i < _t; ++i)
	{
		cin >> _n >> _m;
		
		int ret = 0;
		
		for(int j = _n; j <= _m; ++j)
		{
			string s = to_string(j);
			for(int k = 0; k < s.size(); ++k)
			{
				if(s[k] == '0')
				{
					ret++;
				}
			}
		}
		// O-1. 각각의 테스트 케이스마다 N부터 M까지의 0의 개수를 출력한다.	
		cout << ret << '\n';
	}
		
	return 0;
}