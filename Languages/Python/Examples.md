<h1 style="text-align:center;"> Examples </p>

## Find Output

```python
# Slicing example
def slicing():
    nums = [1, 2, 3, 4]
    print(nums[::-1])
    print("hello".title())


def errorHandling():
    try:
        return "try"
    finally:
        return "finally"
#print(errorHandling())

def checkType():
    x = 2,3
    print(type(x))

def checkLen():
    print(len("Python"))

#checkLen()

def checkKey():
    d = {None : "value"}
    print(d[None])

#checkKey()

s = "Riyaz"
print(s[1],end=",")
print(s[2:2])

list = [1, 2, 3]
print(list[1:2])

x= 0.1 + 0.1 + 0.1
y=0.3
print(x==y)

print(10%3)
print(0 & 5 | 10)

print(10 < 20 < 30) --> Output is True
```

```
x = {1, 2, 3} y = {3, 2, 1} print(x == y)
```

<details output>
  <summary>Output</summary>
  True
</details>
