#include <bits/stdc++.h>
using namespace std;

int _t;
string _s;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	cin.ignore();
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루여져 있으며, N개의 수가 공백으로 구분되어서 주어진다. 	
		getline(cin, _s);	
		_ret = 0;
		
		int pos = 0;
		while((pos = _s.find(' ')) != string::npos)
		{
			_ret += stoi(_s.substr(0, pos));
			_s.erase(0, pos + 1);	
		}
		_ret += stoi(_s);
		
		// O-1. 각 테스트 케이스마다 입력받은 수 N개의 합을 한 줄에 하나씩 입력받은 순서대로 주어진다.	
		cout << _ret << '\n';
	}	
	
	return 0;
}