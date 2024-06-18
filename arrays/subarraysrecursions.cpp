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
void subarrays(int*arr,int n,int st){

    vector<int>* res = new vector<int>();

    for (int j = st; j < n; j++)
    {
        res->push_back(arr[j]);
        pprint(res);
        cout<<endl;
    }

    subarrays(arr,n,st+1);

    return;


}
int main()
{


    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    subarrays(arr,n,0);




   return 0;
}