#include<vector>
#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#define all(v) v.begin(), v.end()
#define mp make_pair
#define pb push_back
#define endl '\n'

typedef long long int ll;

using namespace std;


int editDistmat(string str1, string str2, int m, int n) {
	vector<vector<int> >mat(m + 1, vector<int>(n + 1));

	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0)
				mat[i][j] = j;

			else if (j == 0)
				mat[i][j] = i;

			else if (str1[i - 1] == str2[j - 1])
				mat[i][j] = mat[i - 1][j - 1];

			else
				mat[i][j] = 1 + min(min(mat[i][j - 1], mat[i - 1][j]), mat[i - 1][j - 1]);
		}
	}

	return mat[m][n];
}
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	
	cout << editDistmat(str1, str2, str1.size(),
		str2.size())
		<< endl;
}

