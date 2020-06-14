Str = "ijklmei"
Sum = 0
greaterVal = 0
flag = -1 # 0 - vovel , 1 - consonant , -1 nor vowel nor consonant
asciiVal = 0

for i in Str:
    asciiVal = ord(i)
    if ( i == 'a' or i == 'e' or i == 'i' or i == 'o'or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O'or i == 'U'): 
        # vovel
        if( flag == 0 ):
            if ( greaterVal < asciiVal):
                greaterVal = asciiVal
        elif( flag == 1):
            Sum = Sum + greaterVal
            flag = 0
            greaterVal = asciiVal
        elif( flag == -1):
            flag = 0
            greaterVal = asciiVal
    else: # consonant
        if( flag == 1):
            if( greaterVal < asciiVal):
                greaterVal = asciiVal
        elif (flag == 0):
            Sum = Sum + greaterVal
            flag = 1
            greaterVal = asciiVal
        elif ( flag == -1):
            flag = 1
            greaterVal = asciiVal
Sum = Sum + asciiVal
print ("sum is ", Sum)