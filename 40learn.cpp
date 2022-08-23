#include <iostream>
#include <deque>
#include <vector>
using namespace std;

// QUES: Sliding window maximum problem
vector<int> windowMax(vector<int> prob){
    vector<int> ans;
    // array for sliding window maximum problem
    // dec.push_back(1); 
    // dec.push_back(2);

    for(int i=0;i<prob.size()-2;i++){
        if(prob[i]>prob[i+1]){
            if(prob[i+1]>prob[i+2]){
                ans.push_back(prob[i]);
            }
            else if(prob[i]>prob[i+2]){
                ans.push_back(prob[i]);
            }
            else{
                ans.push_back(prob[i+2]);
            }
        }
        else if(prob[i+1]>prob[i+2]){
            ans.push_back(prob[i+1]);
        }
        else{
            ans.push_back(prob[i+2]);
        }
    }
    return ans;
}

//QUES: maximum rectangle in a histogram
int maxRectangle(vector<int> prob){

}

//QUES: rain water harvesting problem 
int rainWater(vector<int> prob){
    int max,lMax;
    vector<int> rightMax,leftMax;
    
   for(int i=0;i<prob.size();i++){
        max=prob[i];
       for(int j=i;j<prob.size()-1;j++){
        if(prob[j+1]>prob[j] && prob[j+1]>max){
            max = prob[j+1];
        }
       }
       rightMax.push_back(max);
   }

    for(int i=0;i<prob.size();i++){
        lMax= prob[i];
        for(int j=i;j>=0;j--){
            if(prob[j]>prob[j-1] && prob[j]>lMax){
                lMax = prob[j];
            }
        }
        //  cout<<lMax<<" "<<endl;
        leftMax.push_back(lMax);
    }

    /// finding if less than lmax and rmax 

    int ans=0;
    for(int i=0;i<prob.size();i++){
        if(prob[i]< leftMax[i] && prob[i]<rightMax[i]){
            if(leftMax[i]>rightMax[i]){
                ans = ans + rightMax[i]-prob[i];
            }
            else{
                ans = ans + leftMax[i]-prob[i];
            }
        }
    }
    return ans;

}

int main(){


    vector<int> prob;
    prob= {1,2,3,1,4,6,2,3,5};
    int ans = rainWater(prob); 

    cout<<"ans is "<<ans<<endl;
 
}