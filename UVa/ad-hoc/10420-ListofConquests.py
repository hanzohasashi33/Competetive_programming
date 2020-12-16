if __name__ == "__main__":
    dict = {}
    n = int(input())
    for _ in range(n):
        country,name = input().split(maxsplit=1)
        # print(country + " name:" +name)
        if country not in dict:
            dict[country] = [name]
        else:
            if name not in dict[country]:
                dict[country] += [name] 

    for country in sorted(dict):
        print(country + " " + str(len(dict[country])))
