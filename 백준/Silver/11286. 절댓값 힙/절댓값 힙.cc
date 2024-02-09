#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,000
int _n;

struct cmp {
	bool operator()(const int a, const int b)
	{
		int ca = abs(a);
		int cb = abs(b);
		
		if(ca == cb)
		{
			return a > b;
		}
		
		return ca > cb;
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 연산의 개수 N이 주어진다.
	cin >> _n;
	priority_queue<int, vector<int>, cmp> pq;
	int x;
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 N개의 줄에는 연산에 대한 정보를 나타내는 정수 x가 주어진다.
		// 만약 x가 0이 아니라면 배열에 x라는 값을 넣는(추가하는) 연산이고,
		// x가 0이라면 배열에서 절대값이 가장 작은 값을 출력하고 그 값을 배열에서 제거하는 경우	
		cin >> x;
		
		// O-1. 입력에서 0이 주어진 회숫만큼 답을 출력한다.
		// 만약 배열이 비어 있는 경우에는 절대값이 가장 작은 값을 출력하라고
		// 한 경우에는 0을 출력하면 된다. 
		if(x == 0)
		{
			if(pq.empty() == true)
			{
				cout << "0\n";
			}
			else
			{
				int a = pq.top();
				pq.pop();
				cout << a << '\n';
			}
		}
		else
		{
			pq.push(x);	
		}
	}
	
	return 0;
}