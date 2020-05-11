#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include <cmath>
using namespace std;




int main()
{
    int t, p, length, index, diff, c {0}, n;
    int min_v, max_v;
    cin>>t;
    int co {0};
    for(int i = 0; i < t; i++)
    {
        cin>>p;
        int arr[p];
        n = sizeof(arr)/sizeof(arr[0]);
        for(int i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }
        vector <int> v;
        vector <int> v2;
        for(int i = 0; i < n ; i++)
        {
            diff = arr[i] - arr[i+1];
            if(abs(diff) <= 2)
            {
                c++;        
            }
            else
            {
                v.push_back((c+1));
                c = 0;
            }
        }
        sort(v.begin(), v.end());
        //for(int i = 0; i < v.size();i++)
       // {
       //     min_v = v
       //     i
       // }

       min_v = v[0];
       max_v = v.back();


       cout<<min_v<<" "<<max_v<<endl;


    }
}
