#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1,000
int _n; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 정수 N이 주어진다.
	cin >> _n;
	
	vector<int> vi(_n, 0);
	for(int i = 0; i < _n; ++i)
	{
		vi[i] = i + 1;
	}
	
	// O-1. 첫째 줄에 버리는 카드들을 순서대로 출력한다.
	// 제일 마지막에 남게 되는 카드의 번호를 출력한다. 
	for(int i = 0; i < _n - 1; ++i)
	{
		cout << vi[0] << ' ';
		vi.push_back(vi[1]);
		vi.erase(vi.begin(), vi.begin() + 2);
	}
	
	cout << vi[0] << '\n';
	
	return 0;
}