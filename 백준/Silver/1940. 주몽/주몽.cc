#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 15,000
int _n;
// 1 <= M <= 10,000,000
int _m;

int _ret;

bool cmp(int a, int b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 재료의 개수 N이 주어진다.
	cin >> _n;
	vector<int> vi(_n, 0);
	
	// I-2. 두 번째 줄에는 갑옷을 만드는 데 필요한 수 M이 주어진다.
	cin >> _m;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-3. 마지막 셋째 줄에는 N개의 재료들이 가진 고유한 번호들이 공백을 사이에 두고 주어진다.	
		cin >> vi[i];
	}
	
	sort(vi.begin(), vi.end(), cmp);
	
	int left = 0;
	int right = vi.size() - 1;
	
	while(left < right)
	{
		if(vi[left] + vi[right] == _m)
		{
			_ret++;
			left++;
			right--;
		}
		else if(vi[left] + vi[right] > _m)
		{
			right--;
		}
		else
		{
			left++;
		}
	}
	
	// O-1. 첫째 줄에 갑옷을 만들 수 있는 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}