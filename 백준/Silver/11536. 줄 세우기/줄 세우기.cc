#include <bits/stdc++.h>
using namespace std;

// 2 <= N <= 20
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N개의 이름이 주어진다.
	cin >> _n;
	vector<string> vs(_n);
	// I-2. 다음 N개의 줄에는 각 선수들의 이름이 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vs[i];
	}
	
	vector<int> vi(_n - 1);
	
	for(int i = 1; i < _n; ++i)
	{
		if(vs[i-1] > vs[i])
		{
			vi[i-1] = 1;
		}
		else if(vs[i-1] < vs[i])
		{
			vi[i-1] = 2;
		}
	}
	
	int max = *max_element(vi.begin(), vi.end());
	int min = *min_element(vi.begin(), vi.end());
	
	// O-1. 이름이 증가하는 순으로 나타나면 INCREASING, 감소하는 순이면 DECREASING을 한 줄에 출력한다.
	// 만약 위의 두 경우가 아니라면 NEITHER를 출력한다. 
	if(max == min)
	{
		if(max == 2)
		{
			cout << "INCREASING\n";
		}
		else 
		{
			cout << "DECREASING\n";
		}
	}
	else
	{
		cout << "NEITHER\n";
	}
	
	return 0;
}