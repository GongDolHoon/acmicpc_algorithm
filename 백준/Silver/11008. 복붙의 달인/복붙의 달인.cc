#include <bits/stdc++.h>
using namespace std;

// T <= 25
int _t;

// len(s) <= 10,000 
// len(p) <= 100
string _s, _p;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에는 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	int ret;
	int pos;
	int len;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄에 2개의 문자열 s와 p가 공백으로 구분되어 입력되며,
		// 한신이는 p를 복사하여 s를 만들어내는 것을 목표로 한다.
		cin >> _s >> _p;
		
		ret = _s.size();
		len = _p.size();
		
		while((pos = _s.find(_p)) != string::npos)
		{
			_s.erase(0, pos + len);
			ret -= (len - 1);
		}
		
		// O-1. 각 테스트 케이스에 맞는 한신이가 p를 이용하여 s를 타이핑할 때 걸리는 최소 시간을 출력하라. 	
		cout << ret << '\n';
	}
	
	return 0;
}