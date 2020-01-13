L=[]
A={"G":"C","C":"G","T":"A","A":"U"}
for i in list(input()):
    if i in "ACGT":
        L.append(A[i])
        RNA="".join(L)
    else:
        RNA="Invalid Input"
        break
print(RNA)
