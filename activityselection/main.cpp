#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

   vector<pair<int,int> > p;

   int n;

   cin>>n;
   int t1,t2;
   for(int i = 0; i < n; i++) {

    cin>>t1>>t2;


    p.push_back(make_pair(t1,t2));





   }

   sort(p.begin(),p.end());



    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        //cout << p[i].first << " "
             //<< p[i].second << endl;
    }




int c = 0;
int temp = 0;
   for (int i=0; i<n; i++)
    {
 cout << p[i].first << " "<< p[i].second << endl;
for(int j = i + 1; j < n; j++) {


       if(p[i].second  <= p[j].first) {

        c++;
// cout << p[i].first << " "<< p[i].second << endl;

             i=j - 1;

break;
        //cout<<c;

       }



}



    }




int o = 0;


/* for (int j = 1; j < n; j++)
    {
      // If this activity has start time greater than or
      // equal to the finish time of previously selected
      // activity, then select it
      if (p[j].first >= p[o].second)
      {
        cout<<j;

          o = j;
      }




    }



*/

cout<<c + 1;










    return 0;
}
