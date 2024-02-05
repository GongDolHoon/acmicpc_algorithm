#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 8
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	vector<int> vi(_n, 0);
	
	for(int i = 0; i < vi.size(); ++i)
	{
		vi[i] = i + 1;
	}
	
	// O-1. 첫째 줄부터 N!개의 줄에 걸쳐서 모든 순열을 사전순으로 출력한다. 
	do {
		for(int i = 0; i < _n; ++i)
		{
			cout << vi[i] << ' ';
		}
		cout << '\n';
	} while(next_permutation(vi.begin(), vi.end()));
	
	return 0;
}