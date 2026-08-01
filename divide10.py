"""หาร 10"""
x = int(input())
print(" ".join([str(i) for i in range(x - (x % 10), -1, -10)]))
