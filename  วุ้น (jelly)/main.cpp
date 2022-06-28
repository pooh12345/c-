#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{


    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int t = sizeof(a)/sizeof(a[0]);
  sort(a,a+t);

   // cout<<a[2];
int c = 0;
while(true) {

        if(a[0] == 1 && a[1] == 1 && a[2] == 1) {

            break;

        }

    if(a[2] % 2 == 0) {
        int g = a[2] / 2;

        a[2] = g;

c++;
    }else{

    int g = (a[2] - 1) / 2;

    a[2] = g;

c++;
    }
 //cout<<a[0]<<a[1]<<a[2];
    sort(a,a+t);








}



 //cout<<a[0]<<a[1]<<a[2];

cout<<c;




    return 0;
}
