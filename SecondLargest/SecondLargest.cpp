/*input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34
*/

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
