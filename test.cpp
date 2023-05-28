#include <bits/stdc++.h>
using namespace std;

// the two sum problem

void merge(vector<int> &old, vector<int> left, vector<int> right){
    
    vector<int> v;
    int l=0, r=0;

   while(l< left.size() && r< right.size()){
        if(left[l]<right[r]){
            v.push_back(left[l]);
            l++;
        }else{
            v.push_back(right[r]);
            r++;
        }
    } 

	while(l< left.size()){
        v.push_back(left[l]);
        l++;
	}

	while(r<right.size()){
        v.push_back(right[r]);
        r++;
	}

    for(int i=0;i<old.size();i++){
        old[i]= v[i];
    }

}


void merge_sort(vector<int> &v , int l , int r){

    if(l>=r){
        return;
    }
    vector<int> left,right;  

    int m= l+(r-l)/2;

   for(int i=l;i<=m;i++){
       left.push_back(v[i]); 
   } 

   for(int j=m+1;j<=r;j++){
        right.push_back(v[j]);
   }

  merge_sort(left, 0,  left.size() -1);
  merge_sort(right,0 , right.size() -1); 
  merge(v,left, right);
}


void printSubsequence(string str, string output){

    if(str.empty()){
        cout<<output<<endl;
        return;
    }

    printSubsequence(str.substr(1), output+str[0]);
    printSubsequence(str.substr(1), output);
}

void quickSort(vector<int> &v, int s, int e){

    if(s>=e){
        return;
    }
    int first = v[s];

    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(v[i] < first){
            count++;
        }
    }

    int pivot = s+count;

    swap(v[pivot],v[s]);
    int i =s,j=e;

    while(i< pivot && j>pivot){
       while(v[i] < v[pivot]){
        i++;
       }
       while(v[i]< v[pivot]){
        j--;
       }

        swap(v[i], v[j]);
        i++;
        j--;
    } 

    quickSort(v,s,pivot-1);
    quickSort(v,pivot+1,e);
}

void solve(string digits, vector<string> &ans, int index , string output,  vector<string> mapping){
        // base case 
        if(index >= digits.size()){
            // find the string 
            ans.push_back(output);
            return;
        }
        
        int number = digits[index] - '0';

        string val = mapping[number];

        for(int i=0;i< val.size();i++){
            output.push_back(val[i]);
            solve(digits , ans , index+1 , output , mapping);
            output.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        string output;
        vector<string> mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv",  "wxyz"};
        int index = 0;
        
        solve(digits, ans , index , output , mapping);
        return ans;
    }

int main(){
    vector<int> v = {2,1,3,4,2,3,0,-3};

    quickSort(v,0, v.size()-1);

    // cout<<v.size()<<endl;
    for(auto it: v){
        // cout<<it<<endl;
    }

    string str= "abc";
    string output="";
    // printSubsequence(str,output);

    auto ans = letterCombinations("23");

    for(auto it:ans ){
        cout<<it<<endl;
    }

}


