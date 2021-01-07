#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<float> array;   // sample vector
array.push_back(0.123);
array.push_back(1.234);
array.push_back(2.345);
array.push_back(3.456);
array.push_back(4.567);

int index = -1;
float f = array[0];
cout << f << endl;
}
