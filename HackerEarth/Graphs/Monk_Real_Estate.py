# Write your code here
from collections import defaultdict


class Graph:
    def __init__(self) :
        self.graph = defaultdict(list)

    
    def addEdge(self,v,w) :
        self.graph[v].append(w)
        self.graph[w].append(v)


    def noofcities(self) :
        count = 0 
        for i in self.graph :
            count += 1
        return count 


if __name__ == "__main__":
    test = int(input())
    while test > 0 :
        roads = int(input())
        g = Graph()
        while roads > 0 :
            x,y = map(int,input().split())
            g.addEdge(x,y)
            roads -= 1
        print(g.noofcities())
        test -= 1
