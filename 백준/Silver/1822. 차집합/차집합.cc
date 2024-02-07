#include <bits/stdc++.h>
using namespace std;

// 1 <= a, b <= 500,000
int _a;
int _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 집합 A의 원소의 개수 n(A)와
	// 집합 B의 원소의 개수 n(B)가 빈 칸을 사이에 두고 주어진다.
	cin >> _a >> _b;
	map<int, int> mii;
	int item;
	// I-2. 둘째 줄에는 집합 A의 원소가,
	for(int i = 0; i < _a; ++i)
	{
		cin >> item;
		mii[item] = 1;
	}
	
	int dup = 0;
	// I-3. 셋째 줄에는 집합 B의 원소가 빈 칸을 사이에 두고 ㅜㅈ어진다.
	for(int i = 0; i < _b; ++i)
	{
		cin >> item;
		if(mii.find(item) != mii.end())
		{
			mii[item]++;
			dup++;
		}
	}
	
	// O-1. 첫째 줄에 집합 A에는 속하면서 집합 B에는 속하지 않는 원소의 개수를 출려갛ㄴ다.
	// O-2. 다음 줄에는 구체적인 원소를 빈 칸 사이에 두고 증가하는 순서대로 출력한다.
	// O-3. 집합 A에는 속하면서 집합 B에는 속하지 않는 원소가 없다면 첫째 줄에 0만을 출력하면
	// 된다. 
	int ret_n = mii.size() - dup;
	cout << ret_n << '\n';
	if(ret_n == 0)
	{
		return 0;
	}
	
	for(auto element: mii)
	{
		if(element.second == 1)
		{
			cout << element.first << ' ';
		}
	}
	cout << '\n';
	
	return 0;
}