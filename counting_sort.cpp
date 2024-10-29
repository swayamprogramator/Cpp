
#include <iostream>
using namespace std;
void countsort(int arr[],int n){
    //finding maximum
    int max=0;
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

//making count array and store count of element in arr
    int *count=(int*)calloc(max+1,sizeof(int));
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    //finding cummalative sum
    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }

//output array and their updation
    int* output = (int*)malloc(n * sizeof(int));
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    string sorted sequence in main array
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}
int main() {
    int arr[]={1,3,2,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    countsort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
 

    return 0;
}
