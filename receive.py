input_letter = ""

input_letter = input()          # 입력 받은 값을 읽어서 input_letter이라는 변수에 저장

if input_letter == "a":         # a가 아니면 넘어감
    print("front")
elif input_letter == "b":       # b가 아니면 넘어감
    print("left")
elif input_letter == "c":       # c가 아니면 넘어감
    print("right")
elif input_letter == "d":       # d가 아니면 넘어감
    print("back")
else:
    print("wrong")              # a, b, c, d가 아니거나 잘못 된 값일 경우