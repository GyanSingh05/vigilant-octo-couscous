#include<iostream>
using namespace std;


namespace algo{

    int partition(int* arr, int st, int nd){


        int pivot = arr[nd];
        int pi=st-1;


        for (int i = st; i < nd; i++)
        {
            if(arr[i]<pivot){
                pi++;
                swap(arr[pi],arr[i]);
            }
        }
        


        swap(arr[nd],arr[pi+1]);


        return pi+1;


    }

    void quicksort(int *arr,int st,int nd){

        if(st>=nd){
            return;
        }

        
        int pivot = partition(arr,st,nd);



        algo::quicksort(arr,st,pivot-1);

        algo::quicksort(arr,pivot+1,nd);



    }
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

    algo::quicksort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    delete[] arr;



    return 0;
}