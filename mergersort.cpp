#include <iostream>
using namespace std;
//repository name : mergesort_0213
//20240140213

int arr [20], B[20];
int n;
voiid input()
(
    while(true)
    {
        cout <<"masukkan panjang element array :";
        cin >>n;
        if (n<=20)
        {
            break;
        }
        else 
        {
            cout << "\nMaksimal panjang array adalah 20";

        }

    }
    cout << "\n----------"<<endl;
    cout << "\ninputan isi element array"<< endl;
    cout << "\n----------"<< endl;
    for (int i =0; i<n; i++)
    {
        cout << "array index ke-" << i <<":";
        cin >> arr[i];
    }
    void mergersort(int low, int high)
    {
        if(low>=high)
    }
)