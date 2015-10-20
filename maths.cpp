#include <iostream>

int main(){
	std::cout << "press 1 to add\npress 2 to subtract\n";
  int choice;
  std::cin >> choice;
  int a, b;
  std::cout << "enter two integers\n";
  std::cin >> a >> b;
  if(choice == 1){
    std::cout << a + b << '\n';
  }
  else if(choice == 2){
    std::cout << b - a << '\n';
  }
  else std::cout << "whoops\n";
}
