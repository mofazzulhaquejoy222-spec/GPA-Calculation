#include<iostream>
using namespace std;
int main ()
{
   int i,n,a,j;
   cout<<"enter total subject number";
   cin>>n;
   double grade_point[10];
   for(i=1;i<=n;i++){
    cout<<"grade point for subject"<<i<<endl;
    cin>>grade_point[i];
   }
   int credit[10];
   int sum=0;
   for(j=1;j<=n;j++){
    cout<<"credit number for subject"<<j<<endl;
    cin>>credit[j];
    sum=sum+credit[j];
   }
   cout<<"total credit number"<<sum<<endl;
   double r,sum_a=0,g[10];
   for(i=1;i<=n;i++){
    //for(j=1;j==i;j++){
        //for(a=1;a<=n;a++){
        g[i]=grade_point[i]*credit[i];
        //}
        cout<<g[i]<<endl;
        sum_a=sum_a+g[i];
    //}
    //sum_a=sum_a+g[a];
   }
   //sum_a=sum_a+g[i];
   cout<<"sum of grade and credit : "<<sum_a<<endl;
   r=sum_a/sum;
   cout<<"your GPA is : "<<r<<endl;
   return 0;

}
