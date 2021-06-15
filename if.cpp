//c++ program to check age of a user is eligible for voting or not
#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"enter age:";
  cin>>age;
  if(age>17){
    cout<<"\n you are eligible for voting";
  }
  else
  {
    cout<<"\n you are not eligible for voting";
    if(18-age==1)
    {
    cout<<"\n wait "<< 18-age <<" year for voting";
    }
      else
      {
          cout<<"\n wait "<<18-age<<" years for voting";
      }
  }
  return 0;
}
