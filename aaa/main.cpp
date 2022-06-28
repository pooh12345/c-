#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  vector<int> arr;
    std::vector<int> arr2;
    std::vector<int> temp;
int count = 0;
  int n;

cin>>n;
int k;

for(int i = 0; i < n;i++) {


    cin>>k;
     arr.push_back(k);


}
while(arr.size() != 0){
int re = 0;

for(int j = 0; j < n - 1;j++) {

       re = abs(arr[j] - arr[j + 1]);
arr2.push_back(re);

cout<<re;
}
int max = *max_element(arr2.begin(), arr2.end());
cout << "maximum/largest element is: " << max << endl;
int t = 0;
for(int j = 0; j < arr2.size();j++) {
        if(arr2[j] == max) {
            t = j;
count++;
            break;

        }


}
//cout<<t;
//int y = find(arr.begin(), arr.end(), t);
int yy = t + 1;
arr.erase(arr.begin() + t,arr.begin() + yy + 1);
//arr.erase()
//cout<<arr[1];
//temp.push_back();


for(int j = 0; j < arr.size();j++) {

        cout<<arr[j];

}
}


    return 0;
}
