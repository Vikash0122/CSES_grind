#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
cin>>arr[i];
}
sort(arr,arr+n);
int count=0;
for(int i=0; i<n; i++)
{
    if(arr[i+1]==arr[i])
    continue;
    else
    count++;
}
cout<<count;
return 0;
}
//vikash0122
