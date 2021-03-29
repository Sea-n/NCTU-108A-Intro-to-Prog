#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from random import random

n = int(input("> "))
m = 0

for _ in range(n):
    x = random()
    y = random()
    if (x*x + y*y < 1.0):
        m += 1

print(4*m/n)
