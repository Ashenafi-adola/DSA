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

list3 = [1034, 56, 9832, 421, 778, 19, 5001]
def insertionsort(nums):
    for i in range(1, len(nums)):
        a = nums[i]
        for j in range(i-1,-1,-1):
            if nums[j] > nums[i]:
                nums.remove(a)
                nums.insert(j,a)
    print(nums)
insertionsort(list3)

def efficientinsertionsort():
    my_array = [64, 34, 25, 12, 22, 11, 90, 5]
    n = len(my_array)
    for i in range(1,n):
        insert_index = i
        current_value = my_array.pop(i)
        for j in range(i-1, -1, -1):
            if my_array[j] > current_value:
                insert_index = j
        my_array.insert(insert_index, current_value)

    print("Sorted array:", my_array)