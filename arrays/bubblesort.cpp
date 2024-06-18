#include<iostream>
using namespace std;
namespace srt{


    void swap(int *a, int *b){

        int temp = *a;
        *a=*b;
        *b=temp;

    }

    bool check(int *a, int *b){
        if( *a > *b){
            return true;
        }
        return false;
    }

    void sort(int *arr,int n){

        for (int i = n-1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if(check(arr+j,arr+j+1)){
                    swap(arr+j,arr+j+1);
                }
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            cout<< arr[i] <<" ";
        }
        
       
        
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

    srt::sort(arr,n);

    delete[] arr;



   return 0;
}