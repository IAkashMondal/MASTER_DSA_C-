#include<iostream>
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};
int size=5;
 for(int i=0;i< size;i++){
    arr[i]=1;

 };
 for(int i=0;i<5;i++){
     cout << arr[i]  <<" ";
};
cout<< endl;
return 0;
}