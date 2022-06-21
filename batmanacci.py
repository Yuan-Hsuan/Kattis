data = input()
data = data.split()
N = int(data[0])
K = int(data[1])

fib = list()
fib.append(0)
fib.append(1)
fib.append(1)

for i in range(N+1):
    fib.append(fib[-1] + fib[-2])

while N > 2:
    if K > fib[N-2]:
        K -= fib[N-2]
        N -= 1
    else:
        N -= 2

if N == 1:
    print("N")
else:
    print("A")
