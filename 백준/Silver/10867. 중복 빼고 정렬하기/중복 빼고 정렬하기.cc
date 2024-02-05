#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
	return a < b;
}

// 1 <= N <= 100,000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 수의 개수 N이 주어진다.
	cin >> _n;
	
	vector<int> vi(_n);
	
	// I-2. 둘째 줄에는 숫자가 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi[i];
	}
	
	sort(vi.begin(), vi.end(), cmp);
	vi.erase(unique(vi.begin(), vi.end()), vi.end());
	
	// O-1. 첫째 줄에 수를 오름차순으로 정렬한 결과를 출력한다.
	// 이 때, 같은 수는 한 번만 출력한다. 
	for(int i = 0; i < vi.size(); ++i)
	{
		cout << vi[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}