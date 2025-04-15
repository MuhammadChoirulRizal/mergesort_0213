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
        return;
    }
    int mid =(low+high)/2;
    mergersort(low,mid);
    mergersort(mid + 1,high);

    int i= low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j <high)
    {
        if(arr[i]<=[j]
        {
            B[k]=arr[i];
            i++;

        }
        else 
        {
            B[k]=arr[j];
            j++;

        }
        k++;

    )
    }
    while(j<high)
    {
        B[k]=arr[j];
        j++;
        k=k+1;
    }
    while(i<<mid)
    {
        B[k]=arr[i];
        i++;
        k++;
    }
    for (int x=low; x<=high; x++)
    {
        arr[x]=B[x];
    }
)
void input ()
{
    cout <<"\nData setelah diurutkan(merge sort):";
    for (int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";

    }
    cout endl;
}
int main()
{
    input();
}