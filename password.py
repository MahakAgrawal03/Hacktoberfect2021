import random
prev_pass= []

def run():
    lower ="abcdefghijklmnopqrstuvwxtz"
    upper ="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    number="0123456789"
    symbol="{}[]()*;,_-"
    all = lower+upper+symbol+number
    lenght =8
#   prev_pass= []
    password = "".join(random.sample(all,lenght))
    prev_pass.append(password)
    print("Ravi Your Genreated password is : ",password)
run()
