//Check if the given array is sorted or not

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);

    }
    bool flag=false;
    for(int j=0;j<n-1;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(v[j]>v[i])
            {
                flag=true;
                break;
            }
        }
    }
    if(flag==true)
    {
        cout<<"not sorted";
    }
    else{
        cout<<"sorted";
    }
    return 0;

}