#include <bits/stdc++.h>
using namespace std;

int _k;
int _p;
int _m;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 K가 주어진다. 
	cin >> _k;
	// I-2. 각 테스트 케이스는 다음과 같이 구성되어 있다.
	// I-2-1. 첫째 줄에 참가자의 수 P와 자리의 수 M이 주어진다. (1 ≤ P, M ≤ 500) 
	// I-2-2. 다음 P개 줄에는 각 참가자가 원하는 자리가 주어진다. 
	// 자리는 1번부터 M번까지 있다. 입력으로 주어지는 참가자가 도착하는 순서이다.
	for(int i = 0; i < _k; ++i)
	{
		cin >> _p >> _m;	
		vector<int> vi(_m, 0);
		int tmp = 0;
		for(int j = 0; j < _p; ++j)
		{
			cin >> tmp;
			vi[tmp - 1]++;
		}
		
		int total = 0;
		
		for(int j = 0; j < _m; ++j)
		{
			if(vi[j] > 1)
			{
				total += (vi[j] - 1);
			}
		}
		
		// O-1. 각 테스트 케이스에 대해서, 대회에 참가하지 못하는 사람의 수를 출력한다.	
		cout << total << '\n';
	}
	
	return 0;
}