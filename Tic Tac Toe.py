#Place X or O in the table
prnt ("Welcome to tic tac toe\n")
def setPlace(place, table, turn):
    place -= 1
    table[place] = turn
#print gameboard
def printer(table):
    jump = 1
    for i in range(0, 9):
        print(table[i], end = '')
        if (i+1)%3 == 0:
            print("\n")

        if jump < 3: print("|", end = ""); jump += 1
        else: jump = 1
#Check if someone won
def verification(table, turn):
    winner = False
    #Check the rows
    if table[0] == turn and table[1] == turn and table[2] == turn:
        winner = True
    elif table[3] == turn and table[4] == turn and table[5] == turn:
        winner = True
    elif table[6] == turn and table[7] == turn and table[8] == turn:
        winner = True
    #Check the columns
    elif table[0] == turn and table[3] == turn and table[6] == turn:
        winner = True
    elif table[1] == turn and table[4] == turn and table[7] == turn:
        winner = True
    elif table[2] == turn and table[5] == turn and table[8] == turn:
        winner = True
    #Check the diagonals
    elif table[6] == turn and table[4] == turn and table[2] == turn:
        winner = True
    elif table[0] == turn and table[4] == turn and table[8] == turn:
        winner = True
    if winner: print(turn + " WON"); quit()
    #If nobody won, print that it was a tie
    else: print ("Tie")
table = ["_","_","_","_","_","_"," "," "," "]
winner = False
turnos = 1
#Change from X to O or viceversa
while turnos <= 9 and not winner:
    printer(table)
    if turnos%2 == 0:
        turn = "X"
    else:
        turn = "O"
    #Indicate what turn goes
    place = int(input("turn of " + turn + ": "))
    #Play
    setPlace(place, table, turn)
    verification(table, turn)
    turnos += 1