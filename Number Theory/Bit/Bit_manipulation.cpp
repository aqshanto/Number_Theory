#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void PrintBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<(1&(num>>i));
    }cout<<endl;
}

void solve(){
    int n;
    cin>>n;

    //Multiply by 2
    cout<<(n<<1)<<endl;
    PrintBinary(n<<1);

    //divided by 2
    cout<<(n>>1)<<endl;
    PrintBinary(n>>1);

    //uppercase letter to lowercase letter
    cout<<(char)('A'|(1<<5))<<endl;
    cout<<(char)('B'|' ')<<endl; // ' ' == (1<<5)

    //lowercase to uppercase letter
    cout<<(char)('b'& (~(1<<5)))<<endl;
    cout<<(char)('a'& '_')<<endl; // '_' == (~(1<<5))

    /*clear LSB
    00000111011 -> 00000100000
    so, 00000111011 & (~(00000011111)) = 00000100000
    so, 00000111011 & (11111100000) = 00000100000
    */
    PrintBinary(59);
    cout<< (59 & (~((1<<5)-1)))<<endl;
    PrintBinary(59 & (~((1<<5)-1)));

    /*clear MSB
    00000111011 -> 00000001011 // suppose remove two MSB
    00000111011 & 00000001111 = 00000001011
    00000111011 & (00000010000-1) = 00000001011
    00000111011 & (00000001111) = 00000001011
    */
    cout<<(59 & ((1<<4)-1))<<endl;
    PrintBinary(59 & ((1<<4)-1));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}