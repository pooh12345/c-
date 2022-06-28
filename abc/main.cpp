#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1,n2,n3;
int num[3];

    cin>>num[0]>>num[1]>>num[2];
char a[3];

cin>>a[0]>>a[1]>>a[2];

int t = sizeof(num)/sizeof(num[0]);


sort(num,num + t);
for(int i = 0; i < 3;i++) {

    if(a[i] == 'A') {

        cout<<num[0]<<"\t";

    }



    if(a[i] == 'B') {

        cout<<num[1]<<"\t";

    }


    if(a[i] == 'C') {

        cout<<num[2]<<"\t";

    }










}








    return 0;
}
