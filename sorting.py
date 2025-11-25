list1 = [34, 2, 99, 17, 5, 42, 8, 1]

def bubblesort(nums):
    for i in range(len(nums)):
        for j in range(len(nums)-1):
            if nums[j + 1] < nums[j]:
                nums[j],nums[j+1] = nums[j+1],nums[j]
    print(nums)
bubblesort(list1)

list2 = [7, 1, 9, 4, 2, 8, 3, 6, 5]
def selectionsort(nums):
    for i in range(len(nums)-1):
        minInd = i
        for j in range(i+1, len(nums)):
            if nums[j] < nums[minInd]:
                minInd = j
        a = nums.pop(minInd)
        nums.insert(i,a)
    print(nums)
selectionsort(list2)