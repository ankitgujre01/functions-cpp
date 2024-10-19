#include<iostream>
using namespace std;
int sum(int num1,int num2){
     return num1 + num2;
}

int main(){
    int a,b;
    cout<<"enter numbers\n";
    cin>>a>>b;
    cout<<"total sum = "<<sum(a,b);
}
