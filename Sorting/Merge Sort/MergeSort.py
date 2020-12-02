def mergeSort(arr):
    if len(arr) > 1:
        mid = int(len(arr)/2)

        arr1 = mergeSort(arr[:mid])
        arr2 = mergeSort(arr[mid:])

        arr = merge(arr1, arr2)
    return arr

def merge(lArr, rArr):
    arr = []
    l, r = len(lArr), len(rArr)
    left, right = 0, 0
    for index in range(l + r):
        if left == l:
            arr.append(rArr[right])
            right+=1
        elif right == r:
            arr.append(lArr[left])
            left+=1
        elif lArr[left] > rArr[right]:
            arr.append(rArr[right])
            right+=1
        elif lArr[left] <= rArr[right]:
            arr.append(lArr[left])
            left+=1
    return arr


def main():
    print("\nEnter Array to sort: ")
    arr = list(map(int, input().split()))
    arr = mergeSort(arr)

    print('\nSorted Array(Using MergeSort:')
    print(*arr)

main()
