#include <bits/stdc++.h>
using namespace std;

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	while(true)
	{
		bool trig = false;
		// I-1. 입력은 여러 개의 비트 스트링으로 이루어져 있다.
		// 각 비트 스트링은 한 줄로 이루어져 있고, 길이는 1~31 비트이다.
		// 또, 비트 스트링의 마지막 문자는 e 또는 o이다. (e: 짝수 패리티, o: 홀수 패리티) 
		cin >> _s;
		// I-2. 마지막 줄에는 '#'이 주어진다. 
		if(_s == "#")
		{
			return 0;
		}
		
		if(_s[_s.size() -1] == 'e')
		{
			trig = true;
		}
		else
		{
			trig = false;
		}
		
		int ret = 0;
		
		for(int i = 0; i < _s.size() - 1; ++i)
		{
			ret += _s[i] - '0';	
		}
		
		if(ret % 2 == 0)
		{
			if(trig == true)
			{
				_s[_s.size() -1] = '0';
			}
			else
			{
				_s[_s.size() -1] = '1';
			}
		}
		else
		{
			if(trig == true)
			{
				_s[_s.size() -1] = '1';
			}
			else
			{
				_s[_s.size() -1] = '0';
			}
		}
		
		// O-1. 입력으로 주어진 각각의 비트 스트링에 대해서,
		// 마지막 문자를 올바른 비트로 바꾼 비트 스트링을 출력한다. 	
		cout << _s << '\n';
	}
	
	return 0;
}