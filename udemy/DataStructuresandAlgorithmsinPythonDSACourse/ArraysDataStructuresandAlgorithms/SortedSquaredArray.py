def sorted_squared(array):
    """
    Given a sorted array of integers, return a new array containing the squares of each number,
    also sorted in non-decreasing order.

    :param array: List[int] - A sorted list of integers (can include negative numbers)
    :return: List[int] - A new list containing the squares of the input integers, sorted
    """
    n = len(array)
    hasil = [0] * n
    kiri = 0
    kanan = n - 1

    # Isi array hasil mulai dari indeks terakhir ke depan
    for i in range(n - 1, -1, -1):
        # Bandingkan nilai absolutnya
        if abs(array[kiri]) > abs(array[kanan]):
            hasil[i] = array[kiri] ** 2
            kiri += 1
        else:
            hasil[i] = array[kanan] ** 2
            kanan -= 1
            
    return hasil

print(sorted_squared([-5, 1, 2]))
print(sorted_squared([0, 1, 2]))
print(sorted_squared([]))