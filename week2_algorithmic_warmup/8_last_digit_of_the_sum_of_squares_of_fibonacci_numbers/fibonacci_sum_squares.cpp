#include <iostream>
using namespace std;

int fib(long long num ){
    int pre=0,cur=1;
    num = num %60;
    if(num==0){
        return 0;}
    else if (num == 1){
        return 1;
    }
    else{
    for (long long i =2; i<=num; i++){
        int temp = (pre+cur)%60;
        pre = cur%10;
        cur = temp%10;
        
    }
    }
    
    return(cur%10); 
}

int main() {
    long long n = 0;
    cin >> n;
    int a = fib(n);
    int b = fib(n+1);
    
    cout<<(a*b)%10;
}
