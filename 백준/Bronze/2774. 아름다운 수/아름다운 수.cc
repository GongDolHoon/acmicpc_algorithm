#include <bits/stdc++.h>
using namespace std;

int _t;
string _x; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 다음 줄부터 아름다운 정도를 알고 싶은 수 X가 주어진다.
		cin >> _x;	
		
		vector<bool> vb(10, false);
		
		for(int i = 0; i < _x.size(); ++i)
		{
			vb[_x[i] - '0'] = true;
		} 
		
		int ret = 0;
		
		for(int i = 0; i < 10; ++i)
		{
			if(vb[i] == true)
			{
				ret++;
			}
		}
		
		// O-1. 각각의 테스트 케이스마다 X의 아름다운 정도를 한 줄에 하나씩 입력으로 주어진 순서대로 출력한다. 
		cout << ret << '\n';
	}	
	
	return 0;
}