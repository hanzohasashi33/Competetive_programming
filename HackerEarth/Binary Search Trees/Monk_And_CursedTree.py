# Write your code here
class Node :
    def __init__(self,key) :
        self.key = key
        self.left = None 
        self.right = None 


def insert(root,key) :
    if root is None :
        return Node(key)
    
    if key < root.key :
        root.left = insert(root.left,key)
    else :
        root.right = insert(root.right,key)

    return root 


# max element between node and given ancestor(LCA --> Least common ancestor)
def maxelpath(q,x) :
    p = q 
    mx = -999999999999

    while p.key != x :
        if p.key > x :
            mx = max(mx,p.key)
            p = p.left 
        else :
            mx = max(mx,p.key)
            p = p.right 

    return max(mx,x)


def maximumelement(root,x,y) :
    p = root 
    while((x < p.key and y < p.key) or (x > p.key and y > p.key)) :
        if x < p.key and y < p.key :
            p = p.left
        elif x > p.key and y > p.key :
            p = p.right 

    return max(maxelpath(p,x),maxelpath(p,y))

def inorder(root) :
    if root :
        inorder(root.left)
        print(root.key,end = " ")
        inorder(root.right)



if __name__ == "__main__" :
    root = None 
    n = int(input())
    l = list(map(int,input().split()))
    for i in l :
        root = insert(root,i)
    l,r = map(int,input().split())

    #inorder(root)
    #print()
    print(maximumelement(root,l,r))
