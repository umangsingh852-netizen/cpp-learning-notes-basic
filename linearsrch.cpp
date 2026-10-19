#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10] = {5, 76, 435, 23, 12, 45, 67, 89, 90, 34};

    cout<<"Enter the element to search: ";
    int key;
    cin>>key;

    bool found = search(arr, 10, key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

}