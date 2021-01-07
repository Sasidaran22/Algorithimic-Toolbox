#include <iostream>
using namespace std;
int gcd_naive(int a, int b) {
  int rem=1;
  	if(a%b==0)
  	return b;
  	if(b%a==0)
  	return a;
	if(a==b)
	return a;
  while(1)
  {	
	rem=a%b;
	if(a%rem==0&&b%rem==0)
	break;  
	a=b;
	b=rem;
  }
  return rem;
  
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
