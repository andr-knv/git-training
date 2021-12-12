#include <iostream> 

 
int main(){
  int n;
  int i;
  int res;
 
  std::cin >> n;
  res = 1;
  for (i = 1; i <= n; i++) {
	res = res * i;
  }
  std::cout << res;
  
}