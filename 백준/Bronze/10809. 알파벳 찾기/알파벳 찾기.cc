#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(26, -1);
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
	cin >> _s;
	
	// O-1. 각각의 알파벳에 대해서, 
	// a가 처음 등장하는 위치, b가 처음 등장하는 위치, ... z가 처음 등장하는 위치를 공백으로 구분해서 출력한다.
	// 만약, 어떤 알파벳이 단어에 포함되어 있지 않다면 -1을 출력한다. 
	// 단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_vi[_s[i] - 'a'] == -1)
		{
			_vi[_s[i] - 'a'] = i;	
		}
	}
	
	for(int i = 0; i < 26; ++i)
	{
		cout << _vi[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}