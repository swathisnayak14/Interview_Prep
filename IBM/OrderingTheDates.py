# Example 1:

# 04-1967
# 10-2012
# 06-2012
# 01-1989
# 12-2000

# Output:
# 04-1967
# 01-1989
# 12-2000
# 06-2012
# 10-2012


from posixpath import split


n=int(input())
a=[]
for i in range(n):
    a.append(input())

ans=[]

for x in a:
    p=x.split('-')
    temp="-".join(p[::-1])
    ans.append(temp)
ans.sort()

for x in ans:
    p=x.split('-')
    temp="-".join(p[::-1])
    print(temp)