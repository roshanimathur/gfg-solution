class Solution {
  public:
    int getSecondLargest(vector<int> &a) {
        // code here
        int n=a.size();
        int largest=a[0];
        int slargest=-1;
        
        for(int i=1;i<n;i++){
            if(a[i]>largest){
            slargest=largest;
            largest=a[i];
         }
        else if(a[i]>slargest && a[i]!=largest){
           slargest=a[i];
        }  
    }
    return slargest;
    }
};
