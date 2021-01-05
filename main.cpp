#include <iostream>
using namespace std;

int main( int argc, char *argv[], char *envp[] )
{
  int count;
  cout << "\nCommand-line arguments:\n";
  for( count = 0; count < argc; count++ )
    cout << "  argv[" << count << "]   "
      << argv[count] << "\n";
  cout << "Hello World!\n";
  int index = 0;
    int a = 0;
    for(int i = 0; i<10; i++)
    {
      index = i;
      a = a + i;
    }
    cout << "index=" << index << "\n";
    cout << "a=" << a << "\n";
    return 0;
}
