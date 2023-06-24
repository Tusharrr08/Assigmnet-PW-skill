// Q1
class Solution {
public:
    vector<int> twoSum(vector<int>&arr, int target) {
        unordered_map<int, int> mpp;
        int n = arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
    }
};

//Q2

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt =0;
        int n = nums.size();

        for(int i= 0; i<n; i++){
            if(nums[i]!=val){
               nums[cnt++] = nums[i];
            }
        }
        return cnt;
        
    }
};

//Q3

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start+ (end-start)/2;

        while(start<=end){
            mid =  start+ (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }

            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;



        
    }
};

//Q4

int* increment_integer(int digits[], int n) {
  
  int carry = 1;

  
  for (int i = n - 1; i >= 0; i--) {
    
    int sum = digits[i] + carry;

    
    if (sum > 9) {
      digits[i] = 0;
      carry = 1;
    } else {
      
      carry = 0;
      digits[i] = sum;
    }
  }

   
  if (carry) {
    int* new_digits = new int[n + 1];
    new_digits[0] = 1;
    for (int i = 1; i <= n; i++) {
      new_digits[i] = digits[i - 1];
    }
    return new_digits;
  } else {
    return digits;
  }
}


//Q5

void merge_sorted_arrays(int nums1[], int m, int nums2[], int n) {
  
  int i = 0;
  int j = 0;

  
  while (i < m && j < n) {
    if (nums1[i] <= nums2[j]) {
      nums1[i + j] = nums1[i];
      i++;
    } else {
      nums1[i + j] = nums2[j];
      j++;
    }
  }

  while(i < m){
    nums1[i + j] = nums1[i];
    i++;
  }

  while (j < n) {
    nums1[i + j] = nums2[j];
    j++;
  }
}


//Q6

bool contains_duplicate(int nums[], int n) {
  
  set<int> seen;

  
  for (int i = 0; i < n; i++) {
    if (seen.find(nums[i]) != seen.end()) {
      return true;
    } else {
      seen.insert(nums[i]);
    }
  }

  return false;
}

//Q7

void move_zeros_to_end(int nums[], int n) {
  
  int nonzero_idx = 0;
  int end_idx = n - 1;

  
  while (nonzero_idx <= end_idx) {
    if (nums[nonzero_idx] != 0) {
      
      int temp = nums[nonzero_idx];
      nums[nonzero_idx] = nums[end_idx];
      nums[end_idx] = temp;

      
      nonzero_idx++;
    } else {
    
💡 
      end_idx--;
    }
  }
}



//Q8

vector<int> find_duplicate_and_missing(int nums[], int n) {
  
  unordered_map<int, int> seen;

  
  for (int i = 0; i < n; i++) {
    seen[nums[i]]++;
  }

  
  int duplicate = -1;
  int missing = -1;

  
  for (int i = 1; i <= n; i++) {
    if (seen[i] == 2) {
      duplicate = i;
    } else if (seen[i] == 0) {
      missing = i;
    }
  }

  
  vector<int> result = {duplicate, missing};
  return result;
}



