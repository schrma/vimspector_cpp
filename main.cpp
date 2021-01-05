#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int index = 0;
    int a = 0;
    for(int i = 0; i<10; i++)
    {
      index = i;
      a = a + i;
    }
    std::cout << "index=" << index << "\n";
    std::cout << "a=" << a << "\n";
    return 0;
}
