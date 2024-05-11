#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter decimal: ";
    cin>>num;

    string bin="";
    while(num>0){
        if(num%2==1){
            bin+="1";
        }else{
            bin+="0";
        }

        num=num/2;

    }
    reverse(bin.begin(), bin.end());
    cout<<bin<<endl;
    int n=stoi(bin);
    cout<<n<<endl;
    cout<<"Setting 2nd bit to one"<<endl;
    int mask=1<<2;
    int newN=10 | mask;
    cout<<newN<<endl;
 
 
    return 0;
}