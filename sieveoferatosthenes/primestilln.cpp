#include<iostream>
#include<vector>
using namespace std;

namespace algo{


void markmultiples(int*arr,int i){


}


int* getprime(int n){


    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i]=i+1;
    }
    

    for (int i = 0; i < n; i++)
    {
        
    }
    



    


    return arr;



}


}

int main()
{


    int n;
    cin >> n;

    
    int*arr = algo::getprime(n);


    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            cout << arr[i] << " ";
        }
    }
    
    delete arr;


    return 0;
}