# Write your code here
from collections import defaultdict


class Graph :
    def __init__(self) :
        self.graph = defaultdict(list)

    def addedge(self,u,v) :
        self.graph[u].append(v)
        self.graph[v].append(u)

    
    def BFS(self,s) :
        distance = [float("inf")] * (len(self.graph)+1)
        visited = [False] * (len(self.graph)+1)
        previous = [None] * (len(self.graph)+1)
        queue = []
        bfs = []

        queue.append(s)
        visited[s] = True
        distance[s] = 0

        while queue :
            s = queue.pop(0)
            bfs.append(s)

            for i in self.graph[s] :
                if visited[i] == False :
                    queue.append(i)
                    visited[i] = True 
                    distance[i] = distance[s] + 1
                    previous[i] = s
        return distance

        


    def printgraph(self) :
        for i in self.graph :
            print(i,self.graph[i])




if __name__ == "__main__" :
    test = int(input())
    while test > 0 :
        n, m = map(int, input().split())
        g = Graph()
        for i in range(m):
            u, v = map(int, input().split())
            g.addedge(u,v)
        dist = g.BFS(1)
        print(dist[n])
        
        test -= 1
