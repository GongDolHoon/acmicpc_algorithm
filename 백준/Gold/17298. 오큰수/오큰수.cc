#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1,000,000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 수열 A의 크기가 주어진다.
	cin >> _n; 
	stack<pair<int, int>> si;
	vector<int> vi_ret(_n, -1);
	int tmp;
	// I-2. 둘째 줄에 수열 A의 원소가 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> tmp;
		
		if(si.empty() == true)
		{
			si.push({tmp, i});
		}
		else
		{
			while(si.top().first < tmp)
			{
				vi_ret[si.top().second] = tmp;
				si.pop();
				
				if(si.empty() == true)
				{
					break;
				}
			}
			
			si.push({tmp, i});
		}
	} 
	
	// O-1. 총 N개의 수 NGE(1), NGE(2), ..., NGE(N)을 공백으로 구분해 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		cout << vi_ret[i] << ' ';	
	} 
	cout << '\n';
	
	return 0;
}