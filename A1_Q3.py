# 3. Find second largest element

arr = [12, 35, 1, 10, 34, 1]

if len(arr) < 2:
    print("No second largest element.")
else:
    first = second = None

    for num in arr:
        if first is None or num > first:
            second = first
            first = num
        elif num != first and (second is None or num > second):
            second = num

    if second is None:
        print("No second largest element.")
    else:
        print("Second largest element is", second)
