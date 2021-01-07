#include <iostream>
int main() {
  int m;
  std::cin >> m;
  int cnt=m/10,n=(m-cnt*10)%5,i=(m-cnt*10)/5; 
  std::cout << n+cnt+i<<"\n";
}
