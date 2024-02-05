#include <bits/stdc++.h>
using namespace std;

// 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며
// 알파벳 소문자로만 이루어져 있다. 
string _s;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 단어가 주어진다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] == 'a' || _s[i] == 'e' || _s[i] == 'o' || _s[i] == 'i' || _s[i] == 'u')
		{
			_ret++;
		}
	}
	
	// O-1. 첫째 줄에 모음의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}