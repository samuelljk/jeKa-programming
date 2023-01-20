a = int(input())
for i in range(a):
    num = int(input())
    list1 = []
    for j in range(num):
        inp_str = str(input())
        list1.append(inp_str)
    # [abab, ab, abc, abacb]\
    count = 0
    ans = ''
    for k in range(len(list1)):
        list_clone = list1
        list_clone.pop(k-1)
        test = ''
        while len(test) != len(list1[k-1]) and test != list1[k-1]:
            for l in list_clone:
                if l in list1[k-1]:
                    test += l
            if len(test) == len(list1[k-1]) and test == list1[k-1]:
                count = 1
                break
            elif len(test) >= len(list1[k-1]) and test != list1[k-1]:
                count = 0
                break
        ans += str(count)