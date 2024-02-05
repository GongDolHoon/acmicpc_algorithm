#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 50
int _n;

bool cmp(const string a, const string b)
{
	if(a.size() == b.size())
	{
		int sum_a = 0;
		int sum_b = 0;
		
		for(int i = 0; i < a.size(); ++i)
		{
			if(a[i] >= '1' && a[i] <= '9')
			{
				sum_a += a[i] - '0';
			}
			
			if(b[i] >= '1' && b[i] <= '9')
			{
				sum_b += b[i] - '0';
			}
		}
		
		if(sum_a == sum_b)
		{
			return a < b;
		}
		return sum_a < sum_b;
	}
	return a.size() < b.size();
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 기타의 개수 N이 주어진다. 
	cin >> _n;
	vector<string> vs(_n);
	
	// I-2. 둘째 줄부터 N개의 줄에 시리얼 번호가 하나씩 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vs[i];		
	}
	
	sort(vs.begin(), vs.end(), cmp);
	
	// O-1. 첫째 줄부터 차례대로 N개의 줄에 한줄에 하나씩 시리얼 번호를 정렬한 결과를 출력한다. 
	for(int i = 0; i < vs.size(); ++i)
	{
		cout << vs[i] << '\n';
	}
	
	return 0;
}