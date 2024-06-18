#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"give me the size of the array- "<<endl;
    cin>>n;

    int arr[n];

    for(int i = 0; i<n ; i++){
        cout<<"give me the "<<i<<"th number- ";
        cin >> arr[i];

    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    



   return 0;
}