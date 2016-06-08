def rotate(arr, k):
	k %= len(arr)
	if k != 0:
		current = 0
		store = arr[current]
		for i in range(len(arr)):
			current = (current + k) % len(arr)
			arr[current], store = store, arr[current]
	return arr
