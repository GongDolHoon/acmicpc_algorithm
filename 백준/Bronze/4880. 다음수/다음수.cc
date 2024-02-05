#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	vector<int> vi(3, 0);
	
	while(true)
	{
		for(int i = 0; i < 3; ++i)
		{
			// I-1. 입력은 여러 개의 테스트 케이스로 이루어져 있다. 
			// I-1-1. 각 테스트 케이스는 수열의 연속하는 세 정수 a1, a2, a3이 한 줄에 주어진다.
			cin >> vi[i];		
		} 
		
		// I-1-2. 입력의 마지막 줄에는 0이 세 개 주어진다.	
		if(vi[0] == 0 && vi[1] == 0 && vi[2] == 0)
		{
			return 0;
		}
		
		// O-1. 각 테스트 케이스에 대해서, 등차수열이면 AP를, 등비수열이면 GP를 출력한 뒤, 다음 항을 출력한다.	
		if((vi[2] - vi[1] == vi[1] - vi[0]) && (vi[1] - vi[0] != 0))
		{
			cout << "AP " << vi[2] + (vi[1] - vi[0]) << '\n';
		}
		else
		{
			cout << "GP " << vi[2] * (vi[1] / vi[0]) << '\n';
		}
	}
	
	return 0;
}