#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int fact = 1;
  
  while(n >= 1){
    fact = fact * n;
    n--;
  }
  cout<<"Factorial of No: "<<fact;
 
  
  return 0;
}