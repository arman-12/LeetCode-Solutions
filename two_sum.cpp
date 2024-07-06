#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,target;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >>target;

    int sum,l = 0,m = 0,flag = 0;
    for(int i = 0; i < 10; i++)
    {   sum = 0;
        int k = i;
        for(int j = 0; j < 10; j++)
        {   if(j == k)
        {
            continue;
        }
        else
        {
           sum = arr[i] + arr[j];
        if(sum == target)
        {
            l = i;
            m = j;
            flag = 1;
        } 
        }
        }
        if(flag == 1)
        {
            break;
        }
    }
    cout << l <<" "<< m;
    return 0;
}