#include <iostream>
using namespace std;

int main()
{
  char* arr;
  
  arr = new char[1024*64];
  for (int i = 0;i<1024;i++)
  {
    *((int*)(arr+i*64)) = 1;
  }

  int sum = 0;
  for(int num = 0;num<100;num++)
  {
  for (int i = 0;i<1024;i++)
     sum+=*((int*)(arr+i*64));
  }
  cout<<sum<<endl;
  return 0;
}
