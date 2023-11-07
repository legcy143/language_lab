#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  std::cout << "har har  mahadev ~ cpp\n";
  const char *command = "cls"; // Replace with your desired command

  int result = system(command);

  if (result == 0)
  {
    std::cout << "Command executed successfully." << std::endl;
  }
  else
  {
    std::cerr << "Command failed." << std::endl;
  }

  return 0;
}