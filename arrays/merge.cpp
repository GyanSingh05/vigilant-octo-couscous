#include<iostream>
#include<vector>
using namespace std;

namespace algo{


    void merge(int *arr,int st, int mid, int nd){

        int n1 = mid-st+1;
        int n2 = nd-mid;


        int* ist = new int[n1];
        int* sec = new int[n2];


        for (int i = 0; i < n1; i++)
        {
            ist[i]=arr[st+i];
        }
        

        for (int i = 0; i < n2; i++)
        {
            sec[i]=arr[mid+1+i];
        }
        


        int iptr=0;
        int sptr=0;
        int kptr=st;

        while(iptr<n1 && sptr<n2){

            if(ist[iptr]<=sec[sptr]){

                arr[kptr]=ist[iptr];
                iptr++;
                kptr++;

            }

            else{
                arr[kptr]=sec[sptr];
                sptr++;
                kptr++;
            }





        }

        while(iptr<n1){

    	    arr[kptr]=ist[iptr];
            iptr++;
            kptr++;

        }

        while(sptr<n2){
            arr[kptr]=sec[sptr];
            sptr++;
            kptr++;
        }
        



        for (int i = 0; i < nd+1; i++)
        {
            cout<<arr[i]<<" ";
        }
        


    }
}
int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    algo::merge(arr,0,(n-1)/2,n-1);
    




   return 0;
}