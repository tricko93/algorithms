def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i-1
        while j>=0 and arr[j]>key:
            arr[j+1] = arr[j]
            j = j-1
        arr[j+1] = key

def print_array(arr):
    for element in arr:
        print(element, end=' ')
    print(end='\n')

def main():
    # Define Array
    arr = [3, 1, 8, 10, 23, 0, -2, 9]

    # Display unsorted array
    print("Unsorted array: ", end='')
    print_array(arr)

    insertion_sort(arr)

    print("Sorted  array: ", end='')
    print_array(arr)

if __name__ == '__main__':
    main()
