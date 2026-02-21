#include<iostream>
using namespace std;

int main(){
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    cout<<" Enter your number: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        sum1 += i;
    }
    cout<<"1 + 2 + 3 + ... + "<< n <<"=" <<sum1 <<endl;
    cout<< n <<" + ... + 3 + 2 + 1"<<"=" <<sum1 <<endl;
    for(int i = 2; i <=n; i+=2){
        sum2 += i;
    }
    cout<<"2 + 4 + 6 + ... +  "<< n <<"=" <<sum2 <<endl;
    cout<< n <<" + ... + 6 + 4 + 2"<<"=" <<sum2 <<endl;
    for(int i = 3; i <= n; i += 2){
        sum3 += i;
    }
    cout<<"3 + 5 + 7 + ... +"<< n <<" = " << sum3 <<endl;
    cout<< n <<" + ... + 7 + 5 + 3"<<"= " << sum3 <<endl; 
    system("pause");
    return 0;

}
