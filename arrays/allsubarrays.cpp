#include<iostream>
#include<vector>
using namespace std;
void pprint(vector<int>* res){
    for (int i = 0; i < res->size(); i++)
    {
        cout << (*res)[i] << " ";
    }

    return;
    
}
int main()
{


    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for (int i = 0; i < n; i++)
    {
        vector<int>* res = new vector<int>();

        for (int j = i; j < n; j++)
        {
            res->push_back(arr[j]);
            pprint(res);
            cout<<endl;
        }

        
        
    }
    
    





   return 0;
}