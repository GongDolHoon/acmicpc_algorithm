#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;

// 단어는 알파벳 솜누자로만 되어있고 중복되지 않으며, 길이는 최대 100이다. 
string _s;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 단어의 개수 N이 들어온다.
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄부터 N개의 줄에 단어가 들어온다. 	
		cin >> _s;
		
		vector<int> vi(26, 0);
		for(int j = 0; j < _s.size() - 1; ++j)
		{
			if(_s[j] == _s[j+1])
			{
				continue;
			}
			
			vi[_s[j] - 'a']++;
		}
		
		vi[_s[_s.size() - 1] - 'a']++;
		
		if(*max_element(vi.begin(), vi.end()) >= 2)
		{
			continue;
		}
		else
		{
			_ret++;
		}
	} 
	
	// O-1. 첫째 줄에 그룹 단어의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}