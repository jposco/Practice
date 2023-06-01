import sys # stdin과 관련된 기능을 제공합니다.
n = int(sys.stdin.readline()) # 한 줄을 읽고, 이를 정수로 변환하여 변수 n에 할당합니다
stack=[] #stack선언
for i in range(n):
    command = sys.stdin.readline().split()#한 줄을 읽고, 이를 공백을 기준으로 분리하여 리스트로 변환합니다. 이렇게 변환된 리스트는 command 변수에 할당됩니다. 각 줄에서 입력된 값을 받아오는 부분입니다.
    if command[0] == 'push': #정수 X를 스택에 넣는 연산이다.
        stack.append(command[1])
    elif command[0] == 'pop':#스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        if len(stack)==0:
            print(-1)
        else:
            print(stack.pop())
    elif command[0] == 'size': #스택에 들어있는 정수의 개수를 출력한다.
        print(len(stack))
    elif command[0] == 'empty': #스택이 비어있으면 1, 아니면 0을 출력한다.
        if len(stack)==0:
            print(1)
        else:
            print(0)
    elif command[0] == 'top': # 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        if len(stack)==0:
            print(-1)
        else:
            print(stack[-1])