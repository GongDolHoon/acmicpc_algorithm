#include <bits/stdc++.h>
using namespace std;

// 1 <= K <= N
// max(1, k) <= N <= 1000
int _k, _n; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 K가 주어진다.
	cin >> _n >> _k;
	vector<bool> vb(_n + 1, false);
	
	int cycle = 0;
	// O-1. 첫째 줄에 K번째 지워진 수를 출력한다. 
	for(int i = 2; i <= _n; ++i)
	{
		if(vb[i] == true)
		{
			continue;
		}
		
		for(int j = i; j <= _n; j += i)
		{
			if(vb[j] == true)
			{
				continue;
			}
			
			vb[j] = true;
			cycle++;
			
			if(cycle == _k)
			{
				cout << j << '\n';
				return 0;
			}
		}
	}
	
	return 0;
}