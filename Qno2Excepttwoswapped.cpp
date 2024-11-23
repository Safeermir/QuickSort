// Given an array where all its elements are sorted in increasing order except two swapped
// elements, sort it in linear time. Assume there are no duplicates in the array.
// Here TC is O(n) as wer travers only one time in array i.e n operations depends upon the size 
#include<iostream>
#include<vector>
using namespace std;
void sortExceptTwo(vector<int>& v){
    int n=v.size();
    int x=-1;
    int y=-1;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            if(x==-1) x=i;
            y=i+1;
        }
    }
    if(x!=-1 && y!=-1) swap(v[x],v[y]);

}
int main(){
    vector<int> v={3, 8, 6, 7, 5, 9, 10};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sortExceptTwo(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}