#include <bits/stdc++.h>
using namespace std;

// 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다. 
string _s;

vector<int> _vi(26, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 단어 S가 주어진다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		_vi[_s[i] - 'a']++;
	}
	
	// O-1. 단어에 포함되어 있는 a의 개수, b의 개수 ... z의 개수를 공백으로 구분해서 출력한다. 
	for(int i = 0; i < _vi.size(); ++i)
	{
		cout << _vi[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}