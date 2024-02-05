#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 50
int _n; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 파일 이름의 개수 N이 주어진다.
	cin >> _n;
	
	vector<string> vs(_n);
	// I-2. 둘째 줄부터 N개의 줄에는 파일 이름이 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vs[i];
	}
	
	string s = vs[0];
	
	for(int i = 0; i < vs[0].size(); ++i)
	{
		for(int j = 1; j < _n; ++j)
		{
			if(vs[0][i] != vs[j][i])
			{
				s[i] = '?';
			}
		}
	}
	
	// O-1. 첫째 줄에 패턴을 출력하면 된다. 
	cout << s << '\n';
	
	return 0;
}