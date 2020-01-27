n1, n2, n3 = map(int, input().split())
list1 = list()
list2 = list()
list3 = list()
for i in range(n1):
    list1.append(int(input()))
for i in range(n2):
    list2.append(int(input()))
for i in range(n3):
    list3.append(int(input()))
output = list()
list1 = set(list1)
list2 = set(list2)
list3 = set(list3)
final_list = list(list1 & list2)
final_list += list(list1 & list3)
final_list += list(list2 & list3)
output = sorted(list(set(final_list)))
print(len(output))
for i in output:
    print(i)
