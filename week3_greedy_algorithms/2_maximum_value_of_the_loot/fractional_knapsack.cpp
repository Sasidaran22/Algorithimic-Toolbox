#include <iostream>
#include <vector>
using namespace std;
using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0,frac,y=0.0;int tot;
  for(int i=0;weights[i]!='\0';i++)
  {	y=0.0;frac=0.0;
  	for(int j=i;weights[j]!='\0';j++)
  	{
	  frac=float(values[j])/float(weights[j]);
	  
	  if(y<frac)
	  {
	  	y=frac;
	  	int temp=weights[i];
	  	weights[i]=weights[j];
	  	weights[j]=temp;
	  	temp=values[i];
	  	values[i]=values[j];
	  	values[j]=temp;
	  }
	}
	for(int k=0;k<weights[i];k++)
	{
		tot=tot+1;
		if(tot>capacity)
		return value;
		value=value+y;
	}
  }
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  printf("%.4lf", optimal_value) ;cout<< std::endl;
  return 0;
}
