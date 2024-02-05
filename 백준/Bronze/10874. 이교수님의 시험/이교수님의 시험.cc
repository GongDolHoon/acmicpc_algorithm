#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄은 시험을 볼 학생수를 나타내는 정수 N이 주어진다.
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. N번째 줄까지는 1에서 5 사이에 해당하는 정수 열개가 주어진다.
		// i번째 줄의 j번째 수는 i번째 학생이 고른 j번째 문제의 답을 의미한다.
		// 한 줄에 입력되는 수들은 공백으로 구분된다.	
		vector<int> vi(10, 0);
		int ret = 0;
		
		for(int j = 0; j < 10; ++j)
		{
			cin >> vi[j];
			
			if(vi[j] == ((j%5)+1))
			{
				ret++;
			}
		}
		// O-1. 재시험을 보아야하는 학생의 목록을 오름차순으로 출력한다.
		// 각 학생의 번호는 한 줄에 하나씩 출력한다. 
		if(ret == 10)
		{
			cout << i + 1 << '\n';
		}
	}
	
	return 0;
}