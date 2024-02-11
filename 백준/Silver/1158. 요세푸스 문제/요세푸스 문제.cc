#include <bits/stdc++.h>
using namespace std;

// 1 <= K <= N <= 5,000
int _n, _k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 K가 빈 칸을 사이에 두고 순서대로 주어진다.
	cin >> _n >> _k;
	
	vector<int> vi(_n);
	for(int i = 0; i < _n; ++i)
	{
		vi[i] = i + 1;
	}
	
	// O-1. 예제와 같이 요세푸스 순열을 출력한다. 
	cout << '<';
	int cycle = 0;
	while(vi.size() != 1)
	{
		cycle += (_k - 1);
		cycle %= vi.size();
		cout << vi[cycle] << ", ";
		vi.erase(vi.begin() + cycle);
	}
	cout << vi[0] << ">\n";
	
	return 0;
}