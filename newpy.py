import random

def play():
    user = input("What is your choice?\n'r' for Rock, 'p' for Paper and 's' for Scissor\nUser Choose: ")
    if user not in ['r','s','p']:
        return "Invalid Input. Game over."

    computer = random.choice(['r','s','p'])
    print('Computer Choose:', computer)


    if user == computer:
        return 'Its a Tie'

    if if_win(user,computer):
        return 'You Win'
    else:
        return 'You Lost'


def if_win(player, opponent):
    if (player == 'r' and opponent == 's' or player == 'p' and opponent == 'r' or player == 's' and opponent == 'p'):
        return True

print(play())