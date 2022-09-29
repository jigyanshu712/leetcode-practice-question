#include<iostream>
using namespace std;
bool palindrome(int);
int main(){
    int n;
    bool p;
    cout<<"enter a number " <<endl;
    cin>>n;
    p=palindrome(n);
    if(p)
    {
        cout<<" it is a palindrome number";
    }
    else
        cout<<"it is not a palindrome number";


return 0;
}



bool palindrome(int x){
    int r,temp;
    long long rev=0;
    if(x==0)
        return true;
    if(x<0 ||x%10==0)
        return false;

    temp=x;

    while(temp!=0){
        r=temp%10;
        rev=(rev*10)+r;
        temp=temp/10;

    }
    if(rev==x)
        return true;
    else
    return false;


}
