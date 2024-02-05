#include <bits/stdc++.h>
using namespace std;

// 1 <= a, b, c <= 30,000
int _a, _b, _c; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	vector<int> vi(3, 0);
	
	while(true)
	{
		// I-1. 입력은 여러 개의 테스트케이스로 주어지며 마지막 줄에는 0.0이 입력된다.
		// I-2. 각 테스트 케이스는 모두 30,000보다 작은 양의 정수로 주어지며, 각 입력은 변의 길이를 의미한다.
		for(int i = 0; i < 3; ++i)
		{
			cin >> vi[i];
		}
		
		if(vi[0] == 0 && vi[1] == 0 && vi[2] == 0)
		{
			return 0;
		}
		
		int max_index = max_element(vi.begin(), vi.end()) - vi.begin();
		int sum = 0;
		
		for(int i = 0; i < 3; ++i)
		{
			if(i == max_index)
			{
				continue;
			}
			
			sum += pow(vi[i], 2);
		}
		
		// O-1. 각 입력에 대해 직각 삼각형이 맞다면 "right", 아니면 "wrong"을 출력한다. 	
		if(sum == pow(vi[max_index], 2))
		{
			cout << "right\n";
		}
		else
		{
			cout << "wrong\n";
		}
	}
	
	return 0;
}