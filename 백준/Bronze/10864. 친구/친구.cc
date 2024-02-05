#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1000
int _n;
// 0 <= M <= 1000
int _m;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 도현이네 반 학생의 수 N, M이 주어진다.
	cin >> _n >> _m;
	vector<int> vi(_n, 0);
	
	int a, b;
	for(int i = 0; i < _m; ++i)
	{
		// I-2. 둘째 줄부터 M개의 줄에는 친구 관계를 나타내는 A B가 한 줄에 하나씩 주어진다.
		// A B가 입력으로 주어진 경우에는 A B 또는 B A가 다시 입력으로 주어지는 경우는 없다.	
		cin >> a >> b;
		
		vi[a-1]++;
		vi[b-1]++;
	}
	// O-1. 첫째 줄부터 N번째 줄에 걸쳐서 각 학생의 친구의 수를 1번 학생부터 출력한다. 
	for(int i = 0; i < vi.size(); ++i)
	{
		cout << vi[i] << '\n';
	}
	
	return 0;
}