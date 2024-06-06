//Find the unique number in a given Array where all the elements are 
//being repeated twice with one value being unique.

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
    for(int j=0;j<n-1;j++)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if((v[j]==v[i])&&(i!=j))
            {
                count++;
            }
            
        }
        if(count==0)
        {
            cout<<"The unique element is: "<<v[j]<<endl;
        }
    }
    return 0;

}