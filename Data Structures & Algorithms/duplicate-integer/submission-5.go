func hasDuplicate(nums []int) bool {
    for i :=0;i<len(nums);i++{
        
    for j :=i+1;i<len(nums);j++{
        if nums[i]==nums[j]  return true
       
    }
    }
    return false
}
