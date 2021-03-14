n=1260
count=0

coin=[500,100,50,10]

for x in coin:
    coin_cnt = n//x
    count += coin_cnt
    n=n%x


print(count)