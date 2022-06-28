#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    //vector<int> maxx;

    for(int i = 0; i < n;i++) {

        cin>>a[i];

    }
    int sum = 0;
    int sum1 = 0;
    if(n % 2 == 0) {
          for(int i = 0; i < n;i=i + 2) {

                //cout<<a[i];
int t = abs(a[i] - a[i + 1]);
sum = sum + t;




          }

          //cout<<sum;
         //maxx.push_back(sum);
 for(int i = 1; i < n;i=i + 2) {

                //cout<<a[i];
                if(i == n - 1) {
                 int t = abs(a[0] - a[n - 1]);
                    sum1=sum1+t;
                    break;
                }
int t = abs(a[i] - a[i + 1]);

sum1=sum1+t;



          }



//cout<<sum1;
if(sum > sum1) {
   cout<<sum;


}else if(sum < sum1){

cout<<sum1;

}else{
cout<<sum1;
}


    }else{
              for(int i = 0; i < n - 1;i=i + 2) {

                //cout<<a[i];
int t = abs(a[i] - a[i + 1]);
sum = sum + t;




          }

          //cout<<sum;

 for(int i = 1; i < n - 1;i=i + 2) {

                //cout<<a[i];
                if(i == n - 1) {
                 int t = abs(a[0] - a[n - 1]);
                    sum1=sum1+t;
                    break;
                }
int t = abs(a[i] - a[i + 1]);

sum1=sum1+t;



          }



//cout<<sum1;

if(sum > sum1) {
   cout<<sum;


}else if(sum < sum1){

cout<<sum1;

}else{
cout<<sum1;
}










    }











    return 0;
}
