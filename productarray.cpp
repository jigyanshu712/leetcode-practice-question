#include<iostream>
#include<math.h>
using namespace std;
int divide(int dividend,int divisor){
    if(dividend==0)
        return 0;
    if(divisor==0){
        cout<<"divide by zero is impossible"<<endl;
        return 0;
    }
    int sign=(dividend<0)^(divisor<0);
    dividend=abs(dividend);
    divisor=abs(divisor);
    if(divisor==1){
        return(sign==0?dividend:-dividend);
    }
    int ans=exp(log(dividend)-log(divisor))+0.0000000001;
    return((sign==0)?ans:-ans);

}
int main(){
    int i,n,mul=1,count=0;
    cout<<"enter the size of the array\n";
    cin>>n;
    int a[n],ans[n];
    cout<<"enter the elements of the Array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0)
         count++;
        else
            mul=mul*a[i];
    }
    for(int i=0;i<n;i++){
        if(count>1){
            ans[i]=0;
        }
       else if(count==1){
                if(a[i]!=0)
                ans[i]=0;
                else
                    ans[i]=mul;

        }
        else{
            ans[i]=divide(mul,a[i]);
        }
    }
    cout<<"the product of the array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
return 0;
}
