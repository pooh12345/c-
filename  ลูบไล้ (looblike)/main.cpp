#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

 int n;

 cin>>n;
 int a[n];

 for(int i = 0; i < n; i++ ) {


    cin>>a[i];



 }

int p = sizeof(a)/sizeof(a[0]);
//sort(a,a+p,greater<int>());
int c = 0;
int m = 0;
vector<int> temp;
/*for(int i = 0; i < n; i++ ) {
        c = 0;
        for(int j = i  ; j < n; j++ ) {
      if(a[i] == a[j]) {













      }

//cout<<c;





}



}
*/
int l = 0;

for(int i = 0; i < n; i++ ) {
      if(count(a, a + p, a[i]) >= l) {

        l=count(a, a + p, a[i]);
       // cout<<a[i];
      }



}

for(int i = 0; i < n; i++ ) {

      if(count(a, a + p, a[i]) == l) {

        temp.push_back(a[i]);

      }





}



sort(temp.begin(),temp.end());
for(int i = 0; i < temp.size(); i++ ) {



            if(temp[i] != temp[i + 1]) {


                cout<<temp[i]<<" ";



            }









}









    return 0;
}
