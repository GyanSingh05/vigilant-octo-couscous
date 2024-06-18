#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key,int st,int nd){
    
    if(st>nd){
        return -1;
    }
    int mid = (st+nd)/2;
    
    if(arr[mid]>key){
        return binarysearch(arr,n,key,st,mid-1);
    }

    else if(arr[mid]<key){
        return binarysearch(arr,n,key,mid+1,nd);
    }

    else if(arr[mid]==key){
        return mid;
    }


    

}


int main()
{


    int n , key ;

    cin >> n >> key;
    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout<<binarysearch(arr,n,key,0,n-1);



   return 0;
}