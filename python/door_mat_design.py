print("n = rows nr, m = columns nr\nm is must be equal to n * 3\nn must be an odd number")
s = input()

n = int(s.split(" ")[0])
m = int(s.split(" ")[1])

result = ""
pattern = ".|."

for i in range(n):

# Up
    if i < n // 2:
        result  = result + (i * pattern).rjust( ((m  - len(pattern)) // 2), "-")  + pattern + (i * pattern).ljust( ((m - len(pattern)) // 2), "-")  + "\n"

# Center
    if i == ( n // 2 ):
        result = result + "WELCOME".center(m , "-") + "\n"

# Down
    if i > ( n // 2 ):
        result  = result + ((n - i - 1) * pattern).rjust( ((m - len(pattern)) // 2), "-")  + pattern + ((n - i - 1 ) * pattern).ljust( ((m - len(pattern)) // 2), "-")  + "\n"

print(result)
