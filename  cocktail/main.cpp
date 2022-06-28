#include <iostream>

using namespace std;

int main()
{

    int n = 0;



    cin>>n;
    int a[n];
    for(int i = 0;i< n;i++) {

        cin>>a[i];



    }

    int aa = 0;

    cin>>aa;
int sum = 0;
int count = 0;
    for(int i = 0;i< n;i++) {
           //sum = 0;
            for(int j = i + 1;j< n;j++) {

            sum=a[i] + a[j];


            if(sum == aa) {

                //cout<<sum;
count++;

            }






            }

    }




cout<<count;










    return 0;
}
