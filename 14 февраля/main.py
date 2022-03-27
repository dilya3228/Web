import time
from turtle import *

pen = Turtle()
pen.color('red')
bgcolor('black')

def curve():
    for i in range(200):
        pen.right(1)
        pen.forward(1)

def draw_heart():
    pen.fillcolor('red')
    pen.begin_fill()
    pen.left(140)
    pen.forward(113)
    curve()
    pen.left(120)
    curve()
    pen.forward(112)
    pen.end_fill()

font = ("Montserrat", 16, "bold")

def draw_text():
    pen.up()
    pen.setpos(-50, 90)
    pen.down()
    pen.color('white')
    pen.write("Люблю твои", font=font)
    pen.up()
    pen.setpos(-70, 70)
    pen.down()
    time.sleep(3)
    pen.write("Сиски и булки", font=font)

draw_heart()
draw_text()
pen.ht()
done()