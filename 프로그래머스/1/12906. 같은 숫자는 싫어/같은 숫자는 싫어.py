def solution(arr):
    stack = []
    stack.append(arr[0])
    for num in arr[1:]:
        if stack[len(stack)-1] != num:
            stack.append(num)
            
    return stack