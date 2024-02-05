#include <bits/stdc++.h>
using namespace std;

// 1 <= t <= 10
int _t;
// 1 <= n <= 10^6
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	while(_t--)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있고, n이 주어진다. 
		cin >> _n;
		string s = "";
		while(_n != 0)
		{
			s += (char)((_n % 2) + '0');
			_n /= 2;
		}
		
		// O-1. 각 테스트 케이스에 대해서, 1의 위치를 공백으로 구분에 줄 하나에 출력한다. 	
		for(int i = 0; i < s.size(); ++i)
		{
			if(s[i] == '1')
			{
				cout << i << ' ';
			}
		}
		
		cout << '\n';
	}
	
	return 0;
}