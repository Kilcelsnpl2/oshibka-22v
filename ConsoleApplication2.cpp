#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  double p, m, Q, K;
  cout << "p = ";
  cin >> p;
  
  cout << "m = ";
  cin >> m;
  
  cout << "Q = ";
  cin >> Q;
  
  cout << "K = ";
  cin >> K;
  
  double n;
  n = (K - 1) / K;
  
  //with full regeneration
  double n1;
  n1 = 1 - (1 / p);
  
  //with partial regeneration
  double n2;
  n2 = ((p - 1) * (pow(m, n) - 1)) / (pow(m, n) * (p - 1) - Q * (p - pow(m, n)));
  
  //in the absence of regeneration
  double n3;
  n3 = 1 - (1 / pow(m, n));
  
  
  cout << "Efficiency with full regeneration = " << n1;
  cout << "\nEfficiency with partial regeneration = " << n2;
  cout << "\nEfficiency in the absence of regeneration = " << n3;
}