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
void subarrayprint(int*arr, int n , int st,vector<int>*res){

    if(st==n){
        return;
    }

    
    res->push_back(arr[st]);
    pprint(res);
    cout<<endl;
    
    subarrayprint(arr,n,st+1,res);

}
void subarrays(int*arr,int n,int st){

    if(st==n){
        return;
    }

    vector<int>* res = new vector<int>();

    
    subarrayprint(arr,n,st,res);

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