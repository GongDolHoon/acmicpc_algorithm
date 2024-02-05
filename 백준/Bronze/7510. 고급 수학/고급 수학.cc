#include <bits/stdc++.h>
using namespace std;

// 1 <= vi[i] <= 40,000
vector<int> _vi(3, 0);
int _n;

bool cmp(const int a, const int b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫째 줄에는 테스트 케이스의 개수 n이 주어진다.
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 각 테스트 케이스는 세 정수 1 <= a, b, c <= 40000으로 이루어져 있다.
		for(int j = 0; j < 3; ++j)
		{
			cin >> _vi[j];
		}
		
		sort(_vi.begin(), _vi.end(), cmp);
		// O-1. 각 테스트 케이스마다 "Scenario #i:"를 출력한다. 
		// i는 테스트 케이스 번호이며, 1부터 시작한다.
		// 그 다음 줄에는 입력으로 주어진 삼각형이 직각 삼각형인 경우에는 'yes"
		// 아닌 경우에는 "no"를 출력한다. 
		cout << "Scenario #" << i + 1 << ":\n";
		if(pow(_vi[0], 2) + pow(_vi[1], 2) == pow(_vi[2], 2))
		{
			cout << "yes\n\n";
		}
		else
		{
			cout << "no\n\n";
		}
	}
	
	return 0;
}