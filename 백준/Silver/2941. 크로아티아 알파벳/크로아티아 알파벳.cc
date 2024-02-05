#include <bits/stdc++.h>
using namespace std;

// 알파벳 소문자와 '-', '='로만 이루어져 있다.
// 단어는 크로아티아 알파벳으로 이루어져 있다. 
string _s;

int _ret; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 최대 100글자의 단어가 주어진다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] == 'c')
		{
			if(_s[i+1] == '=' || _s[i+1] == '-')
			{
				i++;	
			}	
		}
		else if(_s[i] == 'd')
		{
			if(_s[i+1] == 'z' && _s[i+2] == '=')
			{
				i += 2; 
			}
			else if(_s[i+1] == '-')
			{
				i += 1;
			}
		}
		else if(_s[i] == 's')
		{
			if(_s[i+1] == '=')
			{
				i++;
			}
		}
		else if(_s[i] == 'z')
		{
			if(_s[i+1] == '=')
			{
				i++;
			}
		}
		else if(_s[i] == 'l')
		{
			if(_s[i+1] == 'j')
			{
				i++;
			}
		}
		else if(_s[i] == 'n')
		{
			if(_s[i+1] == 'j')
			{
				i++;
			}
		}
		
		_ret++;
	}
	
	// O-1. 입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}