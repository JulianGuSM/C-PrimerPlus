#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int arr[] = {3,1,4,82,7,88,44,66,23};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length;i++){
        for(int j=0;j<length-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int k=0;k<length;k++){
        cout << arr[k] << " , ";
    }

    return 0;
}
