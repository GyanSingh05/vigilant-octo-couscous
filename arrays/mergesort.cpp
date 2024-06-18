#include<iostream>
using namespace std;

namespace srt{


    void merge(int *arr,int st , int mid , int nd){

        
        
        
        

    }

    void mergesort(int *arr,int st,int nd){

        if(st>=nd){
            return;
        }
        int mid = ( st + nd ) / 2;

        mergesort(arr,st,mid);
        mergesort(arr,mid+1,nd);
        merge(arr,st,mid,nd);

        
            
    }

}
int main()
{


    int n ;

    cin >> n ;
    
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    srt::mergesort(arr,0,n-1);

    

    for (int i = 0; i < n; i++)
        {
            cout << arr[i]<<" ";
        }

    delete[] arr;
   return 0;
}