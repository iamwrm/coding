#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#from functools import reduce
							
def char2num(s):
	return {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}[s]

print(char2num('1'))
print('1')




a='1'
b=char2num('1')



print(isinstance(a,str))

print(isinstance(b,str))



biao={1:'a',2:'b'}
print(biao[1])
print({1:'a',2:'b'}[1])
print([1,2,3,4][0])