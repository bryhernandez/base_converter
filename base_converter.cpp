#include <iostream>
using namespace std;

int main() {
  int base;
  cout << "What base? ";
  cin >> base;

  int convert;
  cout << "What do you want to convert? ";
  cin >> convert;

  cout << endl;
  for(int i = convert; i > 0; i = i/base){
    cout << convert << " / " << base << " -> " << convert%base << endl;
    convert = convert/base;
  }
  
  cout << endl;
  for(int i = converted.size()-1; i >= 0; i --)
    cout << converted[i];
  
}
