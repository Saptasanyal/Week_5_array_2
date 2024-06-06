//WAP to find the largest three elements in the array.

#include<iostream>
#include<vector>
#include<climits>
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
    int max1=INT_MIN;
    for(int j=0;j<n;j++){
        if(v[j]>max1){
            max1=v[j];
        }
    }
    int max2=INT_MIN;
    for(int j=0;j<n;j++){ 
        if((v[j]>max2)&&(v[j]!=max1)){
            max2=v[j];
        }
    }
    int max3=INT_MIN;
    for(int j=0;j<n;j++){ 
        if((v[j]>max3)&&(v[j]!=max2)&&(v[j]!=max1)){
            max3=v[j];
        }

    }
    cout<<max1<<" "<<max2<<" "<<max3<<endl;
    return 0;

}