nums = input()
nums = nums.split()

x = int(nums[0])
y = int(nums[1])
w = int(nums[2])
h = int(nums[3])

if x > w // 2:
    width = w - x
else:
    width = x

if y > h // 2:
    height = h - y
else:
    height = y

if width > height:
    print(height)
else:
    print(width)
