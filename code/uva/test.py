import datetime
import math
n = 2333606220999999999999999999
a = datetime.datetime.now()
for i in range(10000000):
    x=math.floor(math.log10(n))+1
b = datetime.datetime.now()
c = b-a
print(c.microseconds)
a = datetime.datetime.now()
for i in range(10000000):
    x=len(str(n))
b = datetime.datetime.now()
c = b-a
print(c.microseconds)