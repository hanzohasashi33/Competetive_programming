#!/usr/bin/python3

def readData(filename):
		data=open(filename)
		testData=[]
		n=int(data.readline()[0:-1])
		lines=data.readlines()
		for line in lines:
				testData.append(line[0:-1])
		return (n,testData)


def writeData(filename,data):
		output_file=open(filename,"w")
		for line in data:
				output_file.write(str(line)+'\n')
		output_file.close()

#print("done")
