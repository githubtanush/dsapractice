//shift all elements by k or we can say that rotate array 
#include<iostream>
#include<vector>
using namespace std;
void rotatearray(vector<int>& a,int& k){
    //sbse pehle mein k size ka ek temporary array hi bna leta hu 
    int n = a.size();
    int temp[k];
    for(int i = 0; i < k;i++){
        temp[i] = a[n-k+i];
    }
    //now assi hun element shift krde aa 
    for(int i = n - 1; i >= k ; i--){//es loop vich tu baar baar i-- krna vi bhul reha
        a[i] = a[i-k];//hun hoyga rotate oh vi k element naal 
    }

    //hun assi saara temp di value pa dene hai oda ch 
    for(int i = 0; i < k;i++){//yeh condition kaha tak chlegi yaad rkho yrr
        a[i] = temp[i];
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
    int k ;
    cout<<"Enter how many rotations do you want in an array : "<<endl;
    cin>>k;
    k = k % a.size();
    rotatearray(a,k);
    for(int i = 0; i < n;i++){
       cout<<a[i]<<" ";
    }
    return 0;
}
//10 20 30 40 50 