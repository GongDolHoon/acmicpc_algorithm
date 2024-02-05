#include <bits/stdc++.h>
using namespace std;

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.
	cin >> _s;
	
	// O-1. 첫째 줄에 입력으로 주어진 단어에서 대문자는 소문자로, 소문자는 대문자로 바꾼 단어를 출력한다.
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] >= 'A' && _s[i] <= 'Z')
		{
			_s[i] += 32;
		}
		else
		{
			_s[i] -= 32;
		}
	}
	
	cout << _s << '\n';
	
	return 0;
}