//sort colors
#include<iostream>
#include<vector>
using namespace std;
void sortcolors(vector<int>& nums){
    int n = nums.size();
    // int left = 0;
    // int right = n - 1;
    // int index = 0;
    // while(index<=right){
    //     if(nums[index]==0){
    //         swap(nums[index],nums[left]);
    //         left++;
    //         index++;
    //     }
    //     else if(nums[index]==2){
    //         swap(nums[index],nums[right]);
    //         right--;
    //     }
    //     else{
    //         index++;
    //     }
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    for(int i = 0; i < n;i++){
        if(nums[i]==0){
            zerocount++;
        }
        if(nums[i]==1){
            onecount++;
        }
        if(nums[i]==2){
            twocount++;
        }
    }
    int index = 0;
    for(int i = 0; i < zerocount;i++){
        nums[index++] = 0;
    }
    for(int i = 0; i < onecount;i++){
        nums[index++] = 1;
    }
    for(int i = 0; i < twocount;i++){
        nums[index++] = 2;
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
    sortcolors(a);
    for(int i = 0; i < n;i++){
       cout<<a[i]<<" ";
    }
    return 0;
}
// 0 0 1 2 0 2 1 0