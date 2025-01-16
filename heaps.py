def heapify(arr,index):
    left = 2*index+1
    right = left+1
    largest = index

    print("largest: ",index)

    if left < len(arr) and arr[largest]<arr[left]:
        largest = left
    
    if right< len(arr) and arr[largest]<arr[right]:
        largest = right

    if(largest != index):
        arr[largest],arr[index] = arr[index],arr[largest]
        heapify(arr,largest)

def sift_down(arr,index,length):
    # index=0
    left = 2*index+1
    right = left+1
    largest = index

    print(left,right,largest,length)
    # print(right)
    # print(arr[largest],arr[left])
    if left < length and arr[largest]<arr[left]:
        largest = left
        print("1")
    
    if right < length and arr[largest]<arr[right]:
        largest = right
        print("2")

    if(largest != index):
        print("swapping",arr[largest],arr[index])
        arr[largest],arr[index] = arr[index],arr[largest]
        sift_down(arr,largest,length)

s=[10, 20, 25, 6, 12, 15, 1, 4]

def make_heap(s):
    # print(len(s)//2)
    print(s)
    for i in range(len(s)//2,-1,-1):
        heapify(s,i)

    print(s)


def heap_sort(s):
    last_index=len(s)-1
    for i in range(last_index,-1,-1):
        print("i is ",i)
        s[0],s[i] = s[i],s[0]
        print(s)
        sift_down(s,0,i)

make_heap(s)

heap_sort(s)

print(s)

# print(heapify(s,))
