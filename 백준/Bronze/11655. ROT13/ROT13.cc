#include <bits/stdc++.h>
using namespace std;

// S의 길이는 100을 넘지 않는다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 알파벳 대문자, 소문자, 공백, 숫자로만 이루어진 문자열 S가 주어진다.
	getline(cin, _s);
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] >= 'A' && _s[i] <= ('A' + 12))
		{
			_s[i] += 13;
		}
		else if(_s[i] >= ('A' + 13) && _s[i] <= 'Z')
		{
			_s[i] -= 13;
		}
		else if(_s[i] >= 'a' && _s[i] <= ('a' + 12))
		{
			_s[i] += 13;
		}
		else if(_s[i] >= ('a' + 13) && _s[i] <= 'z')
		{
			_s[i] -= 13; 
		}	
	}
	
	// O-1. 첫째 줄에 S를 ROT13으로 암호화한 내용을 출력한다. 
	cout << _s << '\n';
	
	return 0;
}