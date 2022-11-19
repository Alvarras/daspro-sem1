array = [[None]*3 for _ in range(4)]
x,y = 0, 0
array[0][0] = 1
array[0][1] = 2
array[1][0] = 3
array[1][1] = 4
array[2][0] = 5
array[2][1] = 6
array[2][2] = 7
array[3][0] = 8
array[3][1] = 9
array[3][1] = 10
print("array[{}]".format(0), end=" ")
print("{}".format(array[0][0]), end="")
print("{}".format(array[0][1]))
print("array[{}]".format(1), end= " ")
print("{}".format(array[1][0]), end="")
print("{}".format(array[1][1]))
print("array[{}]".format(2), end=" ")
print("{}".format(array[2][0]), end="")
print("{}".format(array[2][1]))
print("{}".format(array[2][2]))
print("array[{}]".format(3), end=" ")
print("{}".format(array[3][0]), end="")
print("{}".format(array[3][1]))
print("{}".format(array[3][2]))