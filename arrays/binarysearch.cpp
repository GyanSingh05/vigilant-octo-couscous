#include<iostream>
using namespace std;

int binarysearch(int arr[],int n , int key){

int st=0;
int nd=n-1;

while(st<=nd){

int mid;

mid=(st+nd)/2;

    if(arr[mid]<key){
        st=mid+1;
    }

    else if(arr[mid]>key){
        nd=mid-1;
    }

    else if(arr[mid]==key){
        return mid;
    }


}

    return -1;

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


    cout<<binarysearch(arr,n,key);




   return 0;
}