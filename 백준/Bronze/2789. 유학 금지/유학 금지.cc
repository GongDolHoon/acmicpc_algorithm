#include <bits/stdc++.h>
using namespace std;

// 단어는 적어도 3글자이며, 많아야 100글자이다. 
string _s;

string _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] == 'C' || _s[i] == 'A' || _s[i] == 'M' || _s[i] == 'B' || _s[i] == 'R'
			|| _s[i] == 'I' || _s[i] == 'D' || _s[i] == 'G' || _s[i] == 'E')
		{
				continue;
		}
		
		_ret.push_back(_s[i]);
	}
	// O-1. 입력으로 주어진 단어를 정부가 검열을 하면 어떻게 변하는지를 출력한다.
	// 즉, 단어에서 CAMBRIDGE에 포함된 알파벳을 모두 지운 뒤 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}