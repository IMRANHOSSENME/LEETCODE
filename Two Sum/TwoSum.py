n = int(input())
target = int(input())

nums = list(map(int, input().split()))

def two_sum(nums, target):
    for i in range(len(nums) - 1):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []

ans = two_sum(nums, target)
print(ans)
