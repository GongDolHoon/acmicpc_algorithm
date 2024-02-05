#include <bits/stdc++.h>
using namespace std;

// 1 <= K <= 100000
int _k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 정수 K가 주어진다.
	cin >> _k;
	
	// I-2. 이후 K개의 줄에 정수가 1개씩 주어진다.
	// 정수가 "0"일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다.
	// 0 <= tmp <= 1,000,000
	int tmp;
	
	stack<int> si;
	
	for(int i = 0; i < _k; ++i)
	{
		cin >> tmp;
		
		if(tmp == 0)
		{
			si.pop();
		}
		else
		{
			si.push(tmp);
		}
	}
	
	int ret = 0;
	
	while(!si.empty())
	{
		ret += si.top();
		si.pop();
	}
	
	// O-1. 재민이가 최종적으로 적어 낸 수의 합을 출력한다. 
	cout << ret << '\n';
	
	return 0;
}