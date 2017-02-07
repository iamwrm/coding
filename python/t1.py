#!/usr/bin/env python3
# -*- coding: utf-8 -*-


# bubble sort

def bu_so(arr):
    for i in range(len(arr)):
        for j in range(len(arr) - i - 1):
            if(arr[j] > arr[j + 1]):
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


a = [1, 2, 5, 6, 3, 4, 5, 7, 3, 4, 5, 3, 5, 6, 4, 8, 9, 4, 3, 5, 6]
print(a)
print("====")
bu_so(a)
print(a)
print('包含中文的str')
