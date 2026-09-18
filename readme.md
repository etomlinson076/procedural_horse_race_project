**Algorithm for horse race**


Main():

seed random number generator
create horses[5] startup to 0 // int horses[5] = {0, 0, 0, 0, 0}
raceOver = false

while not raceOver:
    for each horse 0..4:
        advance(horse, horses)
    for each horse 0..4:
        printLane(horse, horses)

    
    for each horse 0..4:
        if isWinner(horse, horses):
            print "Horse X wins!!"
            raceOver = true

    if not raceOver:
        print "Press enter for another turn"
        wait for enter key



 The functions I need to figure out after main
 void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

advance(int horseNum horses)
flip a coin (0 or 1)
if heads:
    horses[horseNum]++

printLane(int horseNum, horses)
for i from 0 to 14:
    if i == horses[horseNum]:
        print horseNum
    else:
        print '.'
print newline

isWinner(horseNum, horses)
return horses[horseNum] >= 14 # reach the last index of 15 char lane



