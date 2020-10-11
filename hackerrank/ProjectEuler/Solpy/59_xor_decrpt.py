#!/usr/bin/python3
import ipdb
import helper

n,testdata=helper.readData("input")
data=testdata[0].split()
st=''
for c in data:
    st+=chr(int(c))
print(st)
ipdb.set_trace()

