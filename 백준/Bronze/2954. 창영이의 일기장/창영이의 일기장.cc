#include <bits/stdc++.h>
using namespace std;

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 알파벳 소문자와 공백으로만 이루어진 문장이 하나 주어진다.
	getline(cin, _s);
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] == 'a' || _s[i] == 'e' || _s[i] == 'i' || _s[i] == 'o' || _s[i] == 'u')
		{
			_s.erase(i + 1, 2);
		}
	}
	
	// O-1. 둘째 줄에 창영이가 일기장에 작성한 문장을 원래 문장으로 바꾸어 출력한다. 
	cout << _s << '\n';
	
	return 0;
}