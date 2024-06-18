#include<iostream>
#include<vector>
using namespace std;
int main()
{


   vector<int>*  res= new vector<int>();
   res->push_back(10);
   res->push_back(20);

   cout<<res->size(); 



   return 0;
}