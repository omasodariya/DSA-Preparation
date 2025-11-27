  #include<iostream>
    #include<vector>
    #include<algorithm>
   
  using namespace std;
bool isPossible(vector<int> &stalls, int k,int mid){
    int cowCont=1;
    int lastPos=stalls[0];
int N=stalls.size();

for(int i=0;i<N;i++){
if(stalls[i]-lastPos>=mid){
        cowCont++;
        if (cowCont == k) {
            return true;
        }
        lastPos = stalls[i];
}

}
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
sort(stalls.begin(),stalls.end());
    int ans=-1;
    int s=0;
    int maxi=-1;
    int N=stalls.size();
    for(int i=0;i<N;i++){
        maxi=max(stalls[i],maxi);
    }
   int e=maxi;
    int mid=s+(e-s)/2;

    while(s<=e){

        if(isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
mid=s+(e-s)/2;
    }
    return ans;
}
  
  int main()
  {
  
  
  return 0;
  }