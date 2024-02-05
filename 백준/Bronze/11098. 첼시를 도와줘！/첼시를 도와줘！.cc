#include <bits/stdc++.h>
using namespace std;

// n <= 100
int _n;
// 1 <= p <= 100
int _p;

bool cmp(pair<long long, string> a, pair<long long, string> b)
{
	return a.first > b.first;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에는 테스트 케이스의 개수 n이 주어진다.
	cin >> _n;
	
	// I-2. 각 테스트 케이스의 첫 번째 줄 p는 고려해야될 선수의 수이다.
	while(_n--)
	{
		cin >> _p;
		
		string name;
		long long price;
		
		vector<pair<long long, string>> _vp;
		
		while(_p--)
		{
			cin >> price >> name;
			_vp.push_back({price, name});
		}	
		
		sort(_vp.begin(), _vp.end(), cmp);
		
		cout << _vp[0].second << '\n';
	}
	
	return 0;
}