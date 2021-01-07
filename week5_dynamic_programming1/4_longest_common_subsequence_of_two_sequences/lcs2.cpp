#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;

int lcs2(vector<int> &a, vector<int> &b) {
  vector< vector<int> > longest (a.size()+1,vector<int>(b.size()+1)) ;
  int i, j;
	for (i = 0; i <= a.size(); i++){
		for (j = 0; j <= b.size(); j++){
			if (i == 0 || j == 0)
				longest[i][j] = 0;

			else if (a[i - 1] == b[j - 1])
				longest[i][j] = longest[i - 1][j - 1] + 1;

			else
				longest[i][j] = std::max(longest[i - 1][j], longest[i][j - 1]);
		}
}
	return longest[a.size()][b.size()];

  
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  size_t m;
  std::cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  std::cout << lcs2(a, b) << std::endl;
}
