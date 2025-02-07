#include<iostream>
using namespace std;
int main(){
    int num, j, i;
    cout<<"Enter length of X: "<<endl;
    cin>>num;
    for (i = 1; i <= num; i++){
        for (j = 1; j <= num; j++){
            if (i == j || i + j == num+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}