#include <iostream>
#include <vector>
using namespace std;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
	int tot=0,temp=tank,cnt=0;
    for(int i=0;i<stops.size();i++)
    {	tot=stops[i];
    	
    	if(tot>temp)
    	{
    		temp=stops[i-1];
    		temp=temp+tank;
    		cnt++;
		}
		if(tot-temp+tank>tank)
    	return -1;	
	}
	if(temp>=dist)
	return cnt;
	if(tot+tank>=dist)
	return ++cnt;
    return -1;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
