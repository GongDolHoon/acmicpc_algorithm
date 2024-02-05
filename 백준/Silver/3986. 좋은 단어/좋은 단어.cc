#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 100
int _n;

// 단어의 길이는 2와 100,000사이이며,
// 모든 단어 길이의 합은 1,000,000을 넘지 않는다. 
string _s;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 단어의 수 N이 주어진다.
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 N개의 줄에는 A와 B로만 이루어진 단어가 한 줄에 하나씩 주어진다.
		cin >> _s;
		
		int length = _s.size();
		if(length % 2 == 1)
		{
			continue;
		}
		
		for(int j = 1; j < _s.size(); ++j)
		{
			if(j == 0)
			{
				j++;
			}
			
			if(_s[j] == _s[j-1])
			{
				_s.erase(j-1, 2);
				j -= 2;
			}
		}
		
		if(_s.size() == 0)
		{
			_ret++;
		}
	}
	
	// O-1. 첫째 줄에 좋은 단어의 수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}