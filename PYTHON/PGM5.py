print("Enter the number :")
num=int(input())
num2=int(input())
i=True
while(i==True):
    print("""
      Menu
      - - - 
      1.Addition
      2.Substraction
      3.Division
      4.Multiplication
      """)
    ch=int(input("Enter your choice :"))
    Dict={1:num+num2,2:num-num2,3:num/num2,4:num*num2}
    if(ch==1):
        print(Dict.get(1))
    elif(ch==2):
        print(Dict.get(2))
    elif(ch==3):
        print(Dict.get(3))
    elif(ch==4):
        print(Dict.get(4))
    else:
        print("Invalid option ")
    if(ch==6):
        print("exiting loop")
        break
