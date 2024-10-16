#include<bits/stdc++.h>
using namespace std;
int binary(int m[],int left, int right, int target){
    if(left>right){
        cout<<left<<endl;
        cout<<right;
        return -1;
    }
    else{
        int mid = (left+right)/2;
        if(m[mid]==target){
            return mid;
        }
        else if(m[mid]>target){
            return binary(m,left,mid-1,target);
        }
        else{
            return binary(m,mid+1,right,target);
        }
    }
}
int main(){
    int m[] = {1,4,5,10,12,17,24,29,30};
    int size = sizeof(m) / sizeof(m[0]);
    cout << binary(m, 0, size - 1,4);
}