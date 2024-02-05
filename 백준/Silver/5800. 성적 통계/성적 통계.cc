#include <bits/stdc++.h>
using namespace std;

// 1 <= K <= 100
int _k;
// 2 <= n <= 50
int _n;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 중덕 고등학교에 있는 반의 수 K가 주어진다.
	cin >> _k;
	
	// I-2. 다음 K개 줄에는 각 반의 학생수 N과 각 학생의 수학 성적이 주어진다.
	for(int i = 0; i < _k; ++i)
	{
		int max = INT_MIN;
		int min = INT_MAX;
		int max_gap = INT_MIN;
		
		cin >> _n;
		
		vector<int> vi(_n, 0);
		for(int j = 0; j < _n; ++j)
		{
			cin >> vi[j];
		}
		
		sort(vi.begin(), vi.end(), cmp);
		
		max = vi[0];
		min = vi[_n - 1];
		
		int gap = 0;
		
		for(int i = 0; i < _n - 1; ++i)
		{
			gap = vi[i] - vi[i + 1];
			
			if(gap > max_gap)
			{
				max_gap = gap;	
			}	
		}
		// O-1. 각 반에 대한 출력은 다음과 같이 두 줄로 이루어져 있다.
		// O-1-1. 첫째 줄에는 "Class X"를 출력한다.
		cout << "Class " << i + 1 << '\n';
		// O-1-2. 둘째 줄에는 가장 높은 점수, 낮은 점수, 성적을 내림차순으로 정렬했을 때
		// 가장 큰 인접한 점수 차이를 예제 출력과 같은 형식으로 출력한다. 	
		cout << "Max " << max << ", Min " << min << ", Largest gap " << max_gap << '\n';
	}
	
	
	return 0;
}