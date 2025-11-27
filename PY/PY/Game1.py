import random

while True:
    choices=["rock","paper","scissors"]

    computer=random.choice(choices)
    player=None

    while player not in choices:
        player=input("rock, paper, or scissors?: ").lower()

    print("Computer: "+computer)
    print("Player: "+player)

    if player==computer:
        print("Tie!")
    elif player=="rock":
        if(computer=="paper"):
            print("You Lose!")
        else:
            print("You Win!")
    elif player=="paper":
        if(computer=="scissors"):
            print("You Lose!")
        else:
            print("You Win!")
    elif player=="scissors":
        if(computer=="rock"):
            print("You Lose!")
        else:
            print("You Win!")

    flag=input("Wanna play again(Yes/No)?: ").lower()
    if(flag!="yes"):
        break

