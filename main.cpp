#include <iostream> 


using namespace std;
 
int factorial(int i)
{
  if (i==0) return 1;
  else return i*factorial(i-1);
}
 
int main()
{
  int n;
  int i;
  int res;
 
  cin >> n;
  cout << factorial(n);
  
}