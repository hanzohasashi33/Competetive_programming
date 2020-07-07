# Write your code here
from collections import defaultdict

class Graph :
    def __init__(self,V) :
        self.V = V
        self.graph = defaultdict(list)

    def DFSUtil(self,temp,v,visited) :
        visited[v] = True 
        temp.append(v)

        for i in self.graph[v] :
            if visited[i] == False :
                temp = self.DFSUtil(temp,i,visited)
        return temp

    def addEdge(self,v,w) :
        self.graph[v].append(w)
        self.graph[w].append(v)

    def connectedcomponents(self) :
        visited = [False] * self.V 
        cc = []

        for v in range(self.V) :
            if visited[v] == False :
                temp = []
                cc.append(self.DFSUtil(temp,v,visited))
        return cc 


if __name__ == "__main__":
    n,m,f = map(int,input().split())
    g = Graph(n+1)
    while m > 0 :
        u,v = map(int,input().split())
        g.addEdge(u,v)
        m -= 1
    cc = g.connectedcomponents()
    maximum = 0 
    for i in cc :
        if len(i) > maximum :
            maximum = len(i)
    if maximum%f == 0 :
        print(maximum//f)
    elif maximum//f == 0 :
        print("1")
    else :
        print(maximum//f)
