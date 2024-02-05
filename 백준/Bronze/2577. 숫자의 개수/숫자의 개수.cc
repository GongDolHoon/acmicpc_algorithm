#include <bits/stdc++.h>
using namespace std;

// 100 <= a, b, c <= 999
int _a;
int _b;
int _c;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 A,
	// I-2. 둘째 줄에 B,
	// I-3. 셋째 줄에 C가 주어진다.
	cin >> _a >> _b >> _c;
	
	long long total = _a * _b * _c;
	vector<int> vi(10, 0);
	string st = to_string(total);
	
	for(int i = 0; i < st.size(); ++i)
	{
		vi[st[i] - '0']++;
	}
	
	// O-1. 첫째 줄에는 A * B * C의 결과에 0이 몇 번 쓰였는지를 출력한다.
	// O-2. 둘째 줄부터 열번 째 줄까지 A * B * C의 결과에 1부터 9까지의 숫자가 각각
	// 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다. 
	for(int i = 0; i < 10; ++i)
	{
		cout << vi[i] << '\n';
	}
	
	return 0;
}