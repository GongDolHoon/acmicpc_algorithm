#include <bits/stdc++.h>
using namespace std;

// 주어지는 단어의 길이는 1,000,00을 넘지 않는다. 
string _s;

vector<int> _vi(26, 0);

bool _trig = false;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 알파벳 대문자로만 이루어진 단어가 주어진다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] >= 'A' && _s[i] <= 'Z')
		{
			_vi[_s[i] - 'A']++;
		}
		else 
		{
			_vi[_s[i] - 'a']++;
		}
	}
	
	int max = *max_element(_vi.begin(), _vi.end());
	int max_idx = max_element(_vi.begin(), _vi.end()) - _vi.begin();
	
	for(int i = 0; i < _vi.size(); ++i)
	{
		if(_vi[i] == max)
		{
			if(i != max_idx)
			{
				_trig = true;
			}
		}
	}
	
	// O-1. 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다.
	// 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다. 
	if(_trig == true)
	{
		cout << "?\n";
	}
	else
	{
		cout << (char)(max_idx + 'A') << '\n';
	}
	
	return 0;
}