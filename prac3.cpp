//Move negative number to one side
#include<iostream>
#include<vector>
using namespace std;
void negativenumber(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(nums[i]>0){
            i++;
        }
        else if(nums[j]<0){
            j--;
        }
        else{
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> a;
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    for(int i = 0; i < n;i++){
        int data;
        cin>>data;
        a.push_back(data);
    }
   negativenumber(a);
    for(int i = 0; i < n;i++){
       cout<<a[i]<<" ";
    }
    return 0;
}