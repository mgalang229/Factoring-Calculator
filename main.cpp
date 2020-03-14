#include <iostream>
using namespace std;

int main(){

  int num, factors[100], counter = 1, counter2 = 1;

  cout << "Enter a number to factor: ";
  cin >> num;

  cout << "Factors are: \n";
  for(int i = 1; i <= num; i++){
    if(num % i == 0){
      counter++;
      cout << i << endl;
      factors[counter] = i;
    }
  }

  counter2 = counter;
  cout << "In summary: \n";
  for(int i = 2; i <= counter; i++){
    cout << factors[i] << " * " << factors[counter2] << " = " << num << endl;
    counter2--;
    if(factors[i] == factors[counter2]){
      break;
    }
  }

  return 0;
}