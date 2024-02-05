#include <bits/stdc++.h>
using namespace std;

vector<string> _vs(8);

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 0; i < 8; ++i)
	{
		// I-1. 첫째 줄부터 8개의 줄에 체스판의 상태가 주어진다.
		// '.'은 빈 칸이고, 'F'는 위에 말이 있는 칸이다.	
		cin >> _vs[i];
		
		if(i % 2 == 0)
		{
			for(int j = 0; j < 8; j += 2)
			{
				if(_vs[i][j] == 'F')
				{
					_ret++;
				}
			}
		}
		else
		{
			for(int j = 1; j < 8; j += 2)
			{
				if(_vs[i][j] == 'F')
				{
					_ret++;
				}
			}
		}
	}
	
	// O-1. 첫째 줄에 문제의 정답을 출력한다. 
	cout << _ret << '\n'; 
	
	return 0;
}