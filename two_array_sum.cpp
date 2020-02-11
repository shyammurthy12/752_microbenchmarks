#include <iostream>
#include <memory>
using namespace std;
int main()
{
  char* arr;
   
  arr = new char[1024*128];
  for (int i = 0;i<2048;i++)
  {
    *((int*)(arr+i*64)) = 1;
  }

  int sum = 0;
  for(int num = 0;num<100;num++)
  {
  for (int i = 0;i<512;i++)
  {
     sum+=*((int*)(arr+i*64));
     sum+=*((int*)(arr+(i+1024)*64));
  }
  }
  cout<<sum<<endl;
  return 0;
}
