#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool> prime(n,1);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]==true){
            for(int j=2*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }

    while(1){
        int num;
        cin>>num;
        if(prime[num]){
            cout<<"Prime"<<endl;
        }else
            cout<<"Not Prime"<<endl;
    }
    return 0;
}