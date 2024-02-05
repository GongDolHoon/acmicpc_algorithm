#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 10,000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	vector<int> vi(_n);
	
	// I-2. 둘째 줄에 순열이 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi[i];
	}
	
	bool trigger = true;
	
	for(int i = 0; i < _n; ++i)
	{
		if(vi[i] == i + 1)
		{
			continue;
		}
		else
		{
			trigger = false;
			break;
		}
	}
	
	if(trigger == true)
	{
		cout << "-1\n";
		return 0;
	}
	
	prev_permutation(vi.begin(), vi.end());
	
	// O-1. 첫째 줄에 입력으로 주어진 순열의 이전에 오는 순열을 출력한다.
	// 만약, 사전순으로 가장 처음에 오는 순열인 경우에는 -1을 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		cout << vi[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}