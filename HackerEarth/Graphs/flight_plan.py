from collections import defaultdict

class Graph :
    def __init__(self) :
        self.graph = defaultdict(list)

    def addedge(self,u,v) :
        self.graph[u].append(v)
        self.graph[v].append(u)

    
    def BFS(self,s,dest) :
        self.graph = dict(sorted(g.graph.items(), key = lambda kv:(kv[0], kv[1])))
        distance = [float("inf")] * (len(self.graph)+1)
        visited = [False] * (len(self.graph)+1)
        previous = [None] * (len(self.graph)+1)
        queue = []
        bfs = []

        queue.append(s)
        visited[s] = True
        distance[s] = 1

        while queue :
            s = queue.pop(0)
            bfs.append(s)

            for i in self.graph[s] :
                if visited[i] == False :
                    queue.append(i)
                    visited[i] = True 
                    distance[i] = distance[s] + 1
                    previous[i] = s
                if i == dest :
                    route = [i]
                    while previous[route[-1]] is not None :
                        route.append(previous[route[-1]])
                    route.reverse()
                    return distance[i],route 
        return 1,[src]

    def reconstructpath(self,src,dest,previous) :
        path = []
        u = dest  
        while u != src :
            path.append(u)
            u = previous[u]
        path.append(src)
        path.reverse()
        return path 


        


    def printgraph(self) :
        for i in self.graph :
            print(i,self.graph[i])



if __name__ == "__main__":
    n,m,x,y = map(int,input().split())
    g = Graph()
    while m > 0 :
        u,v = map(int,input().split())
        g.addedge(u,v)
        m -= 1
    #g.graph = dict(sorted(g.graph.items(), key = lambda kv:(kv[0], kv[1])))
    #print(g.graph)
    a,b = map(int,input().split())
    distance,previous = g.BFS(a,b)
    print(distance)
    for i in previous :
        print(i,end=" ")
    print()
    