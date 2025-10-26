print("Welcome to Quiz game")
playing = input("do you want to play ? ")
print(playing)

if playing != "yes":
    quit()

print("okay ! lets play ;) ")
score = 0
answer = input("what does eda stand for? ")
if answer == "explorary data analysis":
    print("correct!")
    score += 1
else:
    print("incorrect!")
    
answer = input("what does Gpu stand for? ")
if answer == "graphical power usage":
    print("correct!")
    score += 1
else:
    print("incorrect!")    

answer = input("what does ML stand for? ")
if answer == "machine learning": 
    print("correct!")
    score += 1
else:
    print("incorrect!")   


answer = input("what does gen-ai stand for? ")
if answer == "genarative artificial":
    print("correct!")
    score += 1
else:
    print("incorrect!")

print("you got " + str(score) + " questions correct")   