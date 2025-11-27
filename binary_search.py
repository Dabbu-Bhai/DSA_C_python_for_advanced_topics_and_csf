arr = [-1,0,3,4,5,9,12]
target = 12
target2 = 22
# binary search algorith O(logn) TC
# iterative approach
def bin_search_rec(arr : list[int],target,start,end):
    if(start <= end):
        mid = start + ((end-start)//2)
        if(arr[mid] > target):
            return bin_search_rec(arr,target,start,mid-1)
        elif(arr[mid] < target):
            return bin_search_rec(arr,target,mid+1,end)
        else:
            return mid
    return -1

def bin_search_itr(arr:list[int], target ):
    start = 0
    end = len(arr)-1
    while(start <= end):
        # mid = (start+end)//2
        # to manage the condition of integer overflow we can use 
        mid = start + ((end-start)//2) 
        if(arr[mid]>target):
            end = mid-1
        elif(arr[mid]<target):
            start = mid+1
        elif(arr[mid] == target):
            return mid
    return -1

# ans = bin_search_itr(arr,target)
# ans = bin_search_itr(arr,target2)
ans = bin_search_rec(arr,target,0,len(arr)-1)
ans2 = bin_search_rec(arr,target2,0,len(arr)-1)
print("Target found at index ", ans) if ans >= 0  else print("Target not found")
print("Target found at index ", ans2) if ans2 >= 0  else print("Target not found")