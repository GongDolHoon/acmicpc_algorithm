#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(26, 0); 
string _s;

bool _trigger = false;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 임한수의 영어 이름이 있다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		_vi[_s[i] - 'A']++;
	}
	
	for(int i = 0; i < 26; ++i)
	{
		if(_vi[i] % 2 == 1)
		{
			if(_trigger == true)
			{
				cout << "I'm Sorry Hansoo\n";
				return 0;
			}
			
			_trigger = true;
		}
	}
	
	string ret(_s.size(), ' ');
	
	int right = 0;
	int left = _s.size() - 1;
	
	for(int i = 0; i < 26; ++i)
	{
		if(_vi[i] >= 2)
		{
			ret[right++] = (char)(i + 'A');
			ret[left--] = (char)(i + 'A');
			_vi[i] -= 2; 
			i--;
			continue;
		}
	}
	
	if(_trigger == true)
	{
		for(int i = 0; i < 26; ++i)
		{
			if(_vi[i] % 2 == 1)
			{
				ret[right] = (char)(i + 'A');
				break;
			}
		}
	}
	// O-1. 첫째 줄에 문제의 정답을 출력한다.
	// 만약 불가능할 때는 "I'm Sorry Hansoo"를 출력한다. 
	// 정답이 여러 개일 경우에는 사전순으로 앞서는 것을 출력한다. 
	cout << ret << '\n';
	
	return 0;
}