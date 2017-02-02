#!/usr/bin/env python3
# -*- coding: utf-8 -*-

stc_input=input('Please enter a sentence: ')

stc_s=stc_input.split();

stc_s.reverse();

for word in stc_s:
	print(word)


