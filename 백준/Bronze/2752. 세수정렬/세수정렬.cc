#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
	return a < b;
}

vector<int> _vi(3, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 정수 세 개가 주어진다.
	for(int i = 0; i < 3; ++i)
	{
		cin >> _vi[i];
	}
	
	sort(_vi.begin(), _vi.end(), cmp);
	
	// O-1. 제일 작은 수, 그 다음 수, 제일 큰 수를 차례대로 출력한다. 
	for(int i = 0; i < 3; ++i)
	{
		cout << _vi[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}