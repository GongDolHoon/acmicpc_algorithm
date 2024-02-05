#include <bits/stdc++.h>
using namespace std;

// 2 <= N <= 100,000
int _n;
// 1 <= K <= N
int _k; 

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 두 개의 정수 N과 K가 한 개의 공백을 사이에 두고 순서대로 주어진다.
	cin >> _n >> _k;
	// I-1-1. 첫 번째 정수 N은 온도를 측정한 전체 날짜의 수이다.
	// I-1-2. 두 번째 정수 K는 합을 구하기 위한 연속적인 날짜의 수이다.
	vector<int> vi_input(_n, 0);
	vector<int> vi_ret(_n - _k + 1, 0);
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄에는 매일 측정한 온도를 나타내는 N개의 정수가 빈칸을 사이에 두고 주어진다.
		cin >> vi_input[i];
	}
	
	for(int i = 0; i < _k; ++i)
	{
		vi_ret[0] += vi_input[i];
	}
	
	for(int i = 1; i < _n - _k + 1; ++i)
	{
		vi_ret[i] = vi_ret[i-1] - vi_input[i-1] + vi_input[i+_k-1];
	}
	
	_ret = *max_element(vi_ret.begin(), vi_ret.end());
	
	// O-1. 첫째 줄에는 입력되는 온도의 수열에서 연속적인 K일의 온도의 합이 최대가 되는 값을 출력한다. 
	cout << _ret << '\n';
	 
	return 0;	
}
