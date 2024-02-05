#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;
int _ret; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 문제의 개수 N이 주어진다.
	cin >> _n;
	
	vector<int> vi(_n, 0);
	int i = 0;
	while(_n--)
	{
		// I-2. 둘째 줄에는 N개 문제의 채점 결과를 나타내는 0 혹은 1이 빈 칸을 사이에 두고 주어진다.	
		cin >> vi[i++];	
	}
	
	if(vi[0] == 1)
	{
		_ret++;
	}
	
	for(int i = 1; i < vi.size(); ++i)
	{
		if(vi[i] == 1)
		{
			vi[i] = vi[i-1] + 1;
			_ret += vi[i];
		}
	}
	
	// O-1. 첫째 줄에 입력에서 주어진 채점 결과에 대하여 가산점을 고려한 총 점수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}