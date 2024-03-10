    
    find x command in sorted array

    
    int res =-1;
    int start=0;
    int end= nums.size()-1;
    while(start<=end){
        int mid= start + ((end-start)/2);
        if(nums[mid]==target){
            res=mid;
            return res;
        } else if (nums[mid] > target) {
            end = mid - 1;
        } else{
            start=mid+1;
        }
    }
    return res;
