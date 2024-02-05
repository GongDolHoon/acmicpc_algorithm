#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,000
int _n;

struct cmp {
	bool operator()(int a, int b)
	{
		return a < b;
	}
};

int _x;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 연상늬 개수 N이 주어진다.
	cin >> _n;
	
	priority_queue<int, vector<int>, cmp> pq;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 N개의 줄에는 연산에 대한 정보를 나타내는 정수 x가 주어진다.
		// I-2-1. 만약 x가 자연수라면 배열에 x라는 값을 넣는 연산이고,
		// I-2-2. x가 0이라면 배열에서 가장 큰 값을 출력하고 그 값을 배열에서 삭제하는 경우다.
		cin >> _x;
		
		// O-1. 입력에서 0이 주어진 횟수만큼 답을 출력한다.
		// O-2. 만약 배열이 비어 있는 경우인데 가장 큰 값을 출력하라고 한 경우에는
		// 0을 출력하면 된다. 
		if(_x == 0)
		{
			if(pq.empty() == true)
			{
				cout << "0\n";	
			}
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}	
		}
		else
		{
			pq.push(_x);
		}
	}
	
	return 0;
}