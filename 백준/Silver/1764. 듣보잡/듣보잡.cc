#include <bits/stdc++.h>
using namespace std;

// 1 <= N, M <= 500,000
int _n;
int _m;

int _ret_num;

map<string, int> _msi;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 듣도 못한 사람의 수 N, 보도 못한 사람의 수 M이 주어진다.
	cin >> _n >> _m;
	
	string name;
	// I-2. 이어서 둘째 줄부터 N개의 줄에 걸쳐 듣도 못한 사람의 이름과,
	for(int i = 0; i < _n; ++i)
	{
		cin >> name;
		
		_msi[name] = 1;
	}
	// N+2째 줄부터 보도 못한 사람의 이름이 순서대로 주어진다.
	for(int i = 0; i < _m; ++i)
	{
		cin >> name;
		
		if(_msi.find(name) != _msi.end())
		{
			_msi[name] = 2;
			_ret_num++;
		}
	}
	
	// O-1. 듣보잡의 수와 그 명단을 사전순으로 출력한다. 
	cout << _ret_num << '\n';
	for(auto element: _msi)
	{
		if(element.second == 2)
		{
			cout << element.first << '\n';
		}
	}
	
	return 0;
}