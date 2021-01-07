#include <iostream>
#include <vector>
using namespace std;
int getchange(int Coins[], int n, int Money) {
	if(Money<3)
	return Money;
	vector<int> Ways(Money + 1,10000);
	Ways[0] = 0;Ways[1]=0;
	for (int i = 1; i <= Money; i++) {
		for (int c = 0; c < n; c++) {
			if (i >= Coins[c]) {
				int sub_res = Ways[i - Coins[c]];
				if (sub_res != 10000 && sub_res + 1 < Ways[i])
					Ways[i] = sub_res + 1;
			}
		}
	}
	return Ways[Money];
}

int main() {
  int m;
  std::cin >> m;
  int arr[]={1,3,4};
  std::cout << getchange(arr,3,m) <<endl;
}
