#include <bits/stdc++.h>
using namespace std;

int _n;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.
	cin >> _n;
	
	for(int i = 1; i <= _n; ++i)
	{
		bool trig = false;
		if(i < 100)
		{
			_ret++;
			continue;
		}
		
		string s = to_string(i);
		int interval = (s[1] - '0') - (s[0] - '0');
				
		for(int j = 2; j < s.size(); ++j)
		{
			if(((s[j] - '0') - (s[j-1] - '0')) != interval)
			{
				trig = true;
				break;
			}
		}
		
		if(trig == false)
		{
			_ret++;
		}
	}
	// O-1. 첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}