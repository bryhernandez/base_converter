#include <iostream>
#include <vector>
using namespace std;

char change(int x){
  if(x == 10)
    return 'A';
  if(x == 11)
    return 'B';
  if(x == 12)
    return 'C';
  if(x == 13)
    return 'D';
  if(x == 14)
    return 'E';
  if(x == 15)
    return 'F';

  return 0;
}

int main() {
  cout << "1. Binary" << endl
  << "2. Decimal" << endl
  << "3. Hexadecimal" << endl;

  int base;
  cin >> base;

  int convert;
  cout << "What do you want to convert? ";
  cin >> convert;

  cout << endl;
  vector<int> converted;
  if(base == 1){
    for(int i = convert; i > 0; i = i/2){
      cout << convert << " / " << 2 << " -> " << convert%2 << endl;
      converted.push_back(convert%2);
      convert = convert/2;
    }
  }else if(base == 2){
    for(int i = convert; i > 0; i = i/10){
      cout << convert << " / " << 10 << " -> " << convert%10 << endl;
      converted.push_back(convert%10);
      convert = convert/10;
    }
  } else if(base == 3){
    for(int i = convert; i > 0; i = i/16){
      cout << convert << " / " << 16 << " -> " << convert%16 << endl;
      converted.push_back(convert%16);
      convert = convert/16;
    }
  }
  
  cout << endl;
  for(int i = converted.size()-1; i >= 0; i --)
  if(converted[i] > 9)
    cout << change(converted[i]);
  else 
    cout << converted[i];
  
}
