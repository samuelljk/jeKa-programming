from operator import xor


masukan = int(input())
var = 0
for a in range(masukan):
	p = input()
	result = ""
	q = 0
	while q < int(range(len(p))):
		if q == 0:
			result += p[q]
		if p[q] == p[q-1]:
			result += p[q]
			q += 1
		q += 1
	result += p[len(p)-1]
	print(result)
    xor