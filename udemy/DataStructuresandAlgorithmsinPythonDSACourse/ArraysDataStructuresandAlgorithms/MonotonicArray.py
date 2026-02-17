def monotonic_array(array):
    #write code here
    increasing = True
    decreasing = True
    
    for i in range(len(array) - 1):
        if array[i] > array[i + 1]:
            increasing = False
        if array[i] < array[i + 1]:
            decreasing = False
    
    return increasing or decreasing


print(monotonic_array([-5, 1, 2]))
print(monotonic_array([0, 1, 2]))
print(monotonic_array([]))