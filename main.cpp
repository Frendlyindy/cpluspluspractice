#include <iostream>
using namespace std;
#include <vector>

int numFirst(){
  return 3;
};

class Character{
  public:
    string name;
    int age;

};

int numSecond(){
  return 3;
};

int main() {
  string firstName;
  Character mickeyMouse;
  mickeyMouse.name = "Mickey Mouse";
  mickeyMouse.age = 94;
  string jeeps[3];
  int sam = numFirst() + numSecond();
  vector<int> v = {7,8,9};
  int numbers[5] = {1,2,3,4,5};
  for(int i = 0; i < 5; i++){
    cout << numbers[i] << "\n";
  }
  cout << sam << "\n";
  for (auto i = v.begin(); i != v.end(); ++i)
    {cout << *i << "\n";}
  cout << "Type your first name: ";
  cin >> firstName;
  if(firstName == "Bradley"){
    cout << "Hello there " << firstName <<"!\n";
  jeeps[0] = "Disneyland";
  jeeps[1] = " fun,";
  jeeps[2] = " pal!\n";
  cout << "Let's have some " << jeeps[0] << jeeps[1] << jeeps[2];
  cout << "My name is " << mickeyMouse.name << " and I am " << mickeyMouse.age;
  }
  else{
    cout << "Unauthorized user. Please try again.";
  }
};