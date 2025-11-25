list1 = [34, 2, 99, 17, 5, 42, 8, 1]

def bubblesort(nums):
    for i in range(len(nums)):
        for j in range(len(nums)-1):
            if nums[j + 1] < nums[j]:
                nums[j],nums[j+1] = nums[j+1],nums[j]
    print(nums)
bubblesort(list1)