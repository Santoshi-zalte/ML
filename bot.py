def display(name,made):
    print("Hello!My name is .{0}".format(name))
    print("I was made in .{0}".format(made))
def order_dish():
    print("what is your favourite dish?")
    dish=input()
    print("what is your favourite dish?.{0}".format(dish))
    print("Our Restaurant Menu!!")
    print("1.Pizza")
    print("2.Cofee")
    print("3.tea")
    print("4.burger")
    print("6.cheese Pizza")
    print("7.hot dog")
def dish_help():
    print("please enter the no of dish you want-")
    ord=int(input)
    if ord==1:
        print("you order Pizza!")
    elif ord==2:
        print("you order Pizza!")
    elif ord==3:
        print("you order Pizza!")
    elif ord==4:
        print("you order Pizza!")
    elif ord==5:
        print("you order Pizza!")
    elif ord==6:
        print("you order cheese pizza!")
    elif ord==7:
        print("you order hot dog!")
        dish_help()
        
display('santi',2022)
order_dish()
dish_help()
    

