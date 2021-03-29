#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from random import randrange
from string import *

n = int(input("Password Length: "))
upper = input("Include Uppercase [y/n]: ")
punc = input("Include Punctuation [y/n]: ")

pool = digits
pool += ascii_lowercase

if upper == "y":
    pool += ascii_uppercase

if punc == "y":
    pool += punctuation

pw = ""
for _ in range(n):
    pw += pool[ randrange(len(pool)) ]

print(pw)
