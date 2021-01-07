def binarySearch (arr, l, r, x): 
    if r >= l: 
        mid = (l + r) // 2
        if arr[mid] == x: 
            return mid 
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
        else: 
            return binarySearch(arr, mid + 1, r, x) 
    else: 
        return -1
if __name__ == '__main__':
    inp=input()
    inp1=input()
    data = list(map(int, inp.split()))
    data1=list(map(int, inp1.split()))
    n = data[0]
    m = data1[0]
    a = data[1 : n+1]
    b=data1[1:m+1]
    for x in data1[1:m+1]:
        print(binarySearch(a,0,len(a)-1, x),end=" ")
