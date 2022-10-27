#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &numz)
{
    int mx = INT_MIN;
	for(int i = 0; i < numz.size(); i++){
		for(int j = i + 1; j < numz.size(); j++){
			int liquid = (j-i)*min(numz[i], numz[j]);
			mx = max(mx,liquid);
		}
	}
    return mx;
}

int main() {
    vector<int> numz {1, 4, 2, 3};
  
    cout << "Maximum amount of liquid is: " << maxArea(numz);
  
    return 0;
}
