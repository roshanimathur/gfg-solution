/*input: arr[] = [2, 2, 2, 2, 2]
Output: [2]
Explanation: After removing all the duplicates only one instance of 2 will remain i.e. [2] so
modified array will contains 2 at first position and you should return array containing [2]
after modifying the array.
*/

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int i=0;
        int n=arr.size();
        for(int j=1;j<n;j++){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return vector<int>(arr.begin(),arr.begin() + i+1);
    }
};
