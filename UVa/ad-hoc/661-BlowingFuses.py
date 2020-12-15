if __name__ == "__main__":
    count = 1
    while True:
        try:
            n,m,f = map(int,input().split())
        except Exception as e:
            break
        if n == 0 and m == 0 and f == 0:
            break 
        
        circuit = []
        circuit_state = []
        for i in range(n):
            x = int(input())
            circuit.append(x)
            circuit_state.append(False)

        # toggle = []
        maximum = -1
        fuse_flag = 0
        amp = 0
        for i in range(m):
            x = int(input())

            if circuit_state[x-1] == False:
                amp += circuit[x-1]
                circuit_state[x-1] = True
            else :
                amp -= circuit[x-1]
                circuit_state[x-1] = False
            
             
            if amp > maximum:
                maximum = amp 

            if amp > f:
                fuse_flag = 1
            else:
                if amp > maximum:
                    maximum = amp
                
        
        if fuse_flag == 0:
            print("Sequence {}".format(count))
            print("Fuse was not blown.")
            print("Maximal power consumption was {} amperes.\n".format(maximum))
            count += 1
        else:
            print("Sequence {}".format(count))
            print("Fuse was blown.\n")
            count += 1
