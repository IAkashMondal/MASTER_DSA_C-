#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<" Add n"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<< i+1;
            if(j!=i){ //i representing last char
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i+1;j++){
            cout<< i+1;
            if(j!=i){ //i representing last char
                cout<<"*";
            }
        }
        cout<<endl;
    }
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     cout <<" Add n"<<endl;

//     for(int i=0;i<n;i++){
        
//     }
// }