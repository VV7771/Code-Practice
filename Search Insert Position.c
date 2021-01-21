//Given a sorted array of distinct integers and a target value, return the index if the target is found.If not, return the index where it would be if it were inserted in order.
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//你可以假设数组中无重复元素。
//Example :
//
//Input : nums = [1, 3, 5, 6], target = 5
//Output : 2

int searchInsert(int* nums, int numsSize, int target) {
	int left = 0, right = numsSize - 1, ans = numsSize;
	while (left <= right) {
		int mid = ((right - left) >> 1) + left;
		if (target <= nums[mid]) {
			ans = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return ans;
}
//tip：查找搜索就要想到经典的二分查找并灵活运用