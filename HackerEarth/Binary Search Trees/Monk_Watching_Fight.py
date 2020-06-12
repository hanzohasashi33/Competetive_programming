# Write your code here
class Node() :
    def __init__(self,data) :
        self.data = data 
        self.left = None 
        self.right = None 
     
     
def insert(node,key) :
    if node is None :
        return Node(key) 
     
    if key < node.data :
        node.left = insert(node.left,key)
    else :
        node.right = insert(node.right,key)
    return node 
     
     
def inorder(root) :
    if root :
        inorder(root.left)
        print(root.data,end = " ")
        inorder(root.right)
     
def height(root,count) :
    if root :
        count += 1
        h1 = height(root.left,count)
        h2 = height(root.right,count)
        if h1 > h2 :
            return h1 
        return h2 
    return count
 

     
     
n = int(input())
l = list(map(int,input().split()))
root = None 
for i in range(n) :
    root = insert(root,l[i])
     
if n == 1 :
    print(1)
elif n == 0 :
    print(0)
else :
    print(height(root,0))
     
#inorder(root)
