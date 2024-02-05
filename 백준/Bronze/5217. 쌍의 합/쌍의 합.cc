#include <bits/stdc++.h>
using namespace std;

// t < 100
int _t;
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 수가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있고, n이 주어진다. 	
		cin >> _n;		
		
		// O-1. 각 테스트 케이스마다 n을 만드는 쌍을 사전순으로 출력한다.
		// n을 만드는 쌍이 없는 경우에는 아무것도 출력하지 않는다. 
		cout << "Pairs for " << _n << ": ";
		
		bool trig = false;
		
		for(int i = 1; i < _n; ++i)
		{
			for(int j = i + 1; j < _n; ++j)
			{
				if(i + j == _n)
				{
					if(trig == false)
					{
						trig = true;
						cout << i << ' ' << j;
					}
					else
					{
						cout << ", " << i << ' ' << j;			
					}
				}		
			}
		}
		cout << '\n';
	}
	
	return 0;
}