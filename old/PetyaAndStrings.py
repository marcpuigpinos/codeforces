abc = "abcdefghijklmnopqrstuvwxyz"
stringa = input("")
stringb = input("")
stringa = stringa.lower()
stringb = stringb.lower()
if stringa == stringb:
	print(0)
else:
	for i in range(len(stringa)):
		leta = stringa[i]
		letb = stringb[i]
		if leta == letb:
			continue
		indexa = abc.index(leta)
		indexb = abc.index(letb)
		if indexa < indexb:
			print(-1)
			break
		else:
			print(1)
			break
