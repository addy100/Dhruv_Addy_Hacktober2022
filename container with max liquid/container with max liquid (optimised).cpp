#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &numz)
{
    int i = 0,j = numz.size() - 1, mx = INT_MIN;
	while(i < j)
	{
		int liquid = (j-i)*min(numz[i],numz[j]);
		mx = max(mx,liquid);
		if(numz[i] < numz[j])
		    i++;
		else
		    j--;
	}
	
	return mx;
}

int main() {
    vector<int> numz {1, 4, 2, 3};
  
    cout << "Maximum amount of liquid is: " << maxArea(numz);
  
    return 0;
}