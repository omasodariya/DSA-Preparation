
def binary_search(list,key):
    s=0
    e=len(list)-1
    while s<=e:
        mid=int((s+e)/2)
        if(list[mid]==key):
            return mid
        if(list[mid]>key):
            e=mid-1
        else:
            s=mid+1
    return None


my_list=[3,5,6,8,10]

print("3 is at index: "+str(binary_search(my_list,9)))