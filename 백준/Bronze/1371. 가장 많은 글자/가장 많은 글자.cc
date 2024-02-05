#include <bits/stdc++.h>
using namespace std;

// 각 줄은 최대 50개의 글자로 이루어져 있다.
// 각 줄에는 공백과 알파벳 소문자만 있다. 문장에 알파벳은 적어도 하나 이상 있다. 
string _s;

vector<int> _vi(26, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄부터 글의 문장이 주어진다.
	while(getline(cin, _s))
	{
		for(int i = 0; i < _s.size(); ++i)
		{
			if(_s[i] == ' ')
			{
				continue;	
			}	
			
			_vi[_s[i] - 'a']++;
		}	
	}
	
	// O-1. 첫째 줄에 가장 많이 나온 문자를 출력한다. 
	// 여러 개일 경우에는 알파벳 순으로 앞서는 것부터 모두 공백없이 출력한다. 
	int max = *max_element(_vi.begin(), _vi.end());
	
	for(int i = 0; i < 26; ++i)
	{
		if(_vi[i] == max)
		{
			cout << (char)(i + 'a');
		}
	}
	cout << '\n';
	
	return 0;
}