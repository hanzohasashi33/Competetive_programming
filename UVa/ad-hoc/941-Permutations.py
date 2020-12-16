from math import factorial

fact_table = [factorial(i) for i in range(21)]
num_tests = int(input())

for i in range(num_tests):
  text = str(input())
  perm = int(input())

  text = sorted(text)
  n = len(text)

  out = ""
  for i in reversed(range(n)):
    index, rem = divmod(perm, fact_table[i])
    out += text[index]
    del text[index]
    perm = rem

  print(out)
