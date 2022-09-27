//Squares of a sorted array



// Brite-force:(nlog(n))

/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> res;  //initialize res vector
        for(int i =0; i < nums.size(); i++){
            res.push_back((nums[i])*(nums[i])); //finding and storing sq of each element
        }
        
        sort(res.begin(), res.end()); //sorting res vector
        return res;
    }
};

*/

//Optimized(O(n))
/*Algorithm:
Two pointer approach-
Compare left and right pointer &
append greater number value to result vector

Greater value will come at last of vector as
we re taking i value from last
*/

/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() -1;
        vector <int> res(nums.size(),0);
            for(int i = nums.size()-1; i >= 0; i--){ //from last element to first 
                if(abs(nums[left]) > abs(nums[right])){ //compare greater 
                    res[i] = nums[left]*nums[left];      //square it and append
                    left++; 
                }
                else{
                    res[i] = nums[right]*nums[right];
                    right--;
                }
            }
       return res;
    }
};

*/