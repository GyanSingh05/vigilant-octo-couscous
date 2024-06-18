#include<iostream>
using namespace std;
namespace srt{


    void swap(int *a, int *b){

        int temp = *a;
        *a=*b;
        *b=temp;

    }

    void sort(int *arr,int n){


        for (int i = 0; i < n - 1; i++) {
            int min_index = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }


            }

            
            if (min_index != i) {
                srt::swap(arr + i, arr + min_index);
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << arr[i]<<" ";
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