import numpy as np 


arr = np.array([1,2,3])
arr_2d = np.array([[1,2,3],[4,5,6]])

print(arr.ndim)
print(arr_2d.ndim)
print(arr.shape)
print(arr_2d.shape)
print(arr.size)
print(arr_2d.size)
print(arr.dtype)
print(arr_2d.dtype)
arr_3d = np.array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])
print(arr_3d.ndim)
print(arr_3d.shape)
print(arr_3d.size)
print(arr_3d.dtype)
