#include<iostream>
using namespace std;
int main()
{

    int n , key ;

    cin >> n >> key;
    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    


    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key){
            cout<<"key found at- "<<i+1<<"th index";
        }

    }
    
    
    




   return 0;
}