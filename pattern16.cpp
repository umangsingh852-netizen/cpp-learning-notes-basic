#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while (row<=n){
        //Print space (ist triangle)
        int space = n-row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //Print second Triangle
        int j = 1;
        while(j <= row){
            cout<<j;
            j = j+1;
        }
        //Print third Triangle
        int start = i -1;
        while (start){
            cout<<start;
            start = start -1;
        }


        cout<<endl;
        row = row + 1;
    }
}