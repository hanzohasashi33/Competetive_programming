#!/usr/bin/python3
#import ipdb

#def readData(filename):
#		data=open(filename)
#		testData=[]
#		n=data.readline()[0:-1]
####		ipdb.set_trace()
#		nn=int(n)+1
#		for line in range(1,nn):
#				testData.append(data.readline()[0:-1])
#		return testData
#
#testData=readData("input")
#for num in testData:
#		sum=0
#		n=int(num)
#		for x in range(1,n+1):
#				if (x%3)==0 or (x%5)==0:
#						sum+=x
#		print(sum)
#

def readData():
		testData=[]
		n=input()
		nn=int(n)+1
		for i in range(1,nn):
				testData.append(input())
		return testData

testData=readData()
for num in testData:
		sum=0
		n=int(num)
		for x in range(1,n+1):
				if (x%3)==0 or (x%5)==0:
						sum+=x
		print(sum)
