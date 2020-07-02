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




# Write your code here
if __name__ == "__main__" :
    n = int(input())
    g = Graph()
    for i in range(n-1) :
        u,v = map(int,input().split())
        g.addedge(u,v)
    q = int(input())
    distance = g.BFS(1)
    minimum = float("inf")
    prev_girlid = float("inf")
    while q > 0 :
        girl_id = int(input())
        if distance[girl_id] == minimum :
            if girl_id < prev_girlid :
                prev_girlid = girl_id
        if distance[girl_id] < minimum :
            minimum = distance[girl_id]
            prev_girlid = girl_id 
        q -= 1
    print(prev_girlid)
