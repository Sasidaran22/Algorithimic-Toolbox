#include <iostream>
//int fibonacci_naive(int n) {
//    if (n <= 1)
//        return n;
//
//    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
//}

int fibonacci_fast(int n) {
    long long sum=0,f1=0,f2=1;
    for(int i=0;i<n;i++)
    {
    	sum=f1+f2;
    	f2=f1%10;
    	f1=sum%10;
	}
    
    return sum%10;
}
//
//void test_solution() {
//    assert(fibonacci_fast(3) == 2);
//    assert(fibonacci_fast(10) == 55);
//    for (int n = 0; n < 20; ++n)
//        assert(fibonacci_fast(n) == fibonacci_naive(n));
//}

int main() {
    int n = 0;
    std::cin >> n;

    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
