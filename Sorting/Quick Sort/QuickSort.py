def QuickSort(arr, i, n):       # if arr = [9, 8, 7, 6, 5, 4, 3, 2] then (i = 0, n = 8)
    if n <= 1:
        return arr
    (p, q, r) = (i-1, i, i+n-1)   # p = intial_index-1, q = initial_index, r = last_index
    pivot_element = arr[i]      # first element is taken as pivot element
    
    '''
    we will have to sort the array in three part..
    first partition contain elements less than pivot element
           - form index {i to p}, p is final value after while loop
    second partition contain elements equal to pivot element
           - from index {p+1 to q-1}, p and q is final value after while loop
    third partition contain elements greater than pivot elent
           - from index {q to i+n}, q is final value after while loop
    '''

    while(q < r):
        if arr[q] > pivot_element:
            arr[q], arr[r] = arr[r], arr[q]
            r = r-1
        elif arr[q] < pivot_element:
            p+=1                # p will contain the last index of element which is less than pivot_element
            arr[p], arr[q] = arr[q], arr[p]
            q+=1                # q will contain the first index of element which is greater than pivot_element
        else:
            q+=1
    arr = QuickSort(arr, i, p-i+1)
    arr = QuickSort(arr, q, n-(q-i))
    return arr

arr = list(map(int, input().split()))

print(QuickSort(arr, 0, len(arr)))
