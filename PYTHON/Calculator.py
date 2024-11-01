print("------CALCULATOR------")
print("\n Enter the two numbers :")
a=int(input("\tA ="))
b=int(input("\tB ="))
while True:
    print("\n MENU")
    print("\n1.Addition")
    print("\n2.Substraction")
    print("\n3.Multiplication")
    print("\n4.Division")
    print("\n5.Modulus")
    print("\n6.Exit")
    x=int(input("\nEnter your choice :"))
    Dict={1:(a+b),2:a-b,3:a*b,4:a/b,5:a%b}
    if(x==1):
      print("Answer is:",Dict.get(1))
    elif x==2:
      print("Answer is:",Dict.get(2))
    elif x==3:
      print("Answer is:",Dict.get(3))    
    elif x==4:
      print("Answer is:",Dict.get(4))
    elif x==5:
      print("Answer is:",Dict.get(5))
      
      if x == 6:
        print("Exiting the calculator...")
        break

        
            

