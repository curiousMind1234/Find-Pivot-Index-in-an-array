int pivotIndex(vector<int>& nums) {
        int sum =0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
        }
        
        int Lsum =0;
        for(int i=0;i<nums.size();i++){
            sum -= nums[i];
            if(sum == Lsum)
                return i;
            
            Lsum += nums[i];
        }
        return -1;
    }
