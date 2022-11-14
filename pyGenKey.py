#!/usr/lib/python3.10

import sys 
from sys import stdin

# from ctype librery in commnad running C code 

# from ctype import * 

from ctypes import cdll

libkeey = cdll.LoadLibrary('./libkey.so')

libkeey.funckey()



