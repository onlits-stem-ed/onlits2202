n = int(input("Enter a number: "))
i = n
f = 1
while(i>=1):
    f *= i
    i -= 1
print(f"The factorial of {n} is {f}.")