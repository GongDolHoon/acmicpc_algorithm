#include <bits/stdc++.h>
using namespace std;

// 각각의 패킷은 한줄에 하나씩 입력이 되며 공백으로 시작되거나 끝나지 않으며,
// 대문자만 입력이 된다. 
string _s;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	while(true)
	{
		_ret = 0;
		getline(cin, _s);
		// I-1. #이 들어오기 전까지 계속 입력을 받는다.
		if(_s == "#")
		{
			return 0;
		}
		
		for(int i = 0; i < _s.size(); ++i)
		{
			if(_s[i] == ' ')
			{
				continue;
			}
			_ret += (i + 1) * (_s[i] - 'A' + 1);
		}
		
		// O-1. 각각의 패킷에 따라 한줄에 하나씩 Quicksum을 출력하라.	
		cout << _ret << '\n';
	}
	
	return 0;
}