#include <bits/stdc++.h>
using namespace std;

// 1 < T < 500
int _t; 

// 1 < N < 10
int _n; 

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 맨 위의 첫 번째 줄에 T는 테스트 케이스를 의미한다.
    cin >> _t;
    
    int total = 0;
    int maxi = 0;
    for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스의 첫 번째 줄에는 n이 주어지고, n은 후보자의 수를 의미하며,
        cin >> _n;
        total = 0;
		maxi = 0;
		
		vector<int> candidates(_n);
        vector<int> maxCandidates;

        for(int j = 0; j < _n; ++j) 
		{
        	// I-3. 다음 n번째 줄에는 순서대로 각 후보자가 받은 득표 수를 입력받는다.
            cin >> candidates[j];
            total += candidates[j];
            maxi = max(maxi, candidates[j]);
        }

        for(int j = 0; j < _n; ++j)
        {
        	if(candidates[j] == maxi) 
        	{
        		maxCandidates.push_back(j+1);	
			}
		}	
            
		// O-1. 각 테스트 케이스는 첫 번째 줄부터 순서대로 출력된다. 최대 득표자가 과반수 득표를 했을 경우에는
		// "majority winner R", 절반 이하의 득표를 하였을 경우에는 "minority winner R"가 되며,
		// 최대 득표자가 없을 경우에는 "no winner"를 출력한다
        if(maxCandidates.size() > 1) 
		{
			cout << "no winner\n";	
		}
        else if(total / 2 >= maxi) 
		{
			cout << "minority winner " << maxCandidates[0] << '\n';	
		}
        else 
		{
			cout << "majority winner " << maxCandidates[0] << '\n';	
		}
    }
    
    return 0;
}