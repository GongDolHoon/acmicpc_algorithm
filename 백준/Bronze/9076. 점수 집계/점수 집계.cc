#include <bits/stdc++.h>
using namespace std;

int _t;

bool cmp(int a, int b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다. 
	cin >> _t;
	// I-2. 각 테스트 케이스는 한 줄에 다섯 심판이 준 점수 다섯 개의 정수 
	// Ni(1 ≤ Ni ≤ 10, i = 1, 2, ..., 5)가 하나의 공백을 사이에 두고 주어진다.
	for(int i = 0; i < _t; ++i)
	{
		vector<int> vi(5, 0);
		for(int j = 0; j < 5; ++j)
		{
			cin >> vi[j];
		}
		
		sort(vi.begin(), vi.end(), cmp);
		
		// O-1. 각 테스트 케이스에 대해서 총점을 한 줄씩 출력한다. 
		// 만일 점수 조정을 거쳐서 다시 점수를 매기려고 하는 경우에는 총점 대신 KIN을 출력한다.	
		if(vi[3] - vi[1] >= 4)
		{
			cout << "KIN\n";
		}
		else
		{
			cout << vi[1] + vi[2] + vi[3] << '\n';	
		}
	}
	
	return 0;
}