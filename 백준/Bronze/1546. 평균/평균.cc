#include <bits/stdc++.h>
using namespace std;

// N <= 1000
int _n;
double _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 시험을 본 과목의 수 N이 주어진다.
	cin >> _n;
	
	vector<double> vi(_n, 0);
	// I-2. 둘째 줄에 세준이의 현재 성적이 주어진다.
	int idx = 0;
	
	while(_n--)
	{
		cin >> vi[idx++];
	}
	
	double max = *max_element(vi.begin(), vi.end());
	
	for(int i = 0; i < vi.size(); ++i)
	{
		vi[i] = vi[i] / max * 100;
		_ret += vi[i];
	}
	
	_ret /= (double)vi.size();
	
	// O-1. 첫째 줄에 새로운 평균을 출력한다.  
	cout << _ret << '\n';
	
	return 0;
}