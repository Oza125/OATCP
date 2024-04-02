from functools import cmp_to_key

def compare(a, b):
    return int(str(a) + str(b)) - int(str(b) + str(a))

def largestNumber(arr):
    arr.sort(key=cmp_to_key(compare), reverse=True)
    ans = ''.join(map(str, arr))
    if ans[0] == '0':
        return '0'
    return ans

# Example usage:
arr = [3, 30, 34, 5, 9]
result = largestNumber(arr)
print(result)  # Output: "9534330"
