# include <bits/stdc++.h>
using namespace std;

void reversal(int arr[], int n){
    int start=0, end=n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    reversal(arr, 5);
    for(int i =0;i<5;i++)
    cout<<arr[i]<<" ";

    return 0;
}
