#include <iostream>
#include <vector>
using namespace std;

vector<int> optimal_summands(int n) {
  vector<int> summands;int result=0;
 	for(int i=1;i<=n;i++)
 	{
 		if((n-result-i)>=i+1||(n-result-i)==0)
 		{	
 			summands.push_back(i);
 			result+=i;
		}
			if(result==n)
			break;
	}
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (int i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
