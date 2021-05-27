from flask import Flask, render_template, request, redirect
app = Flask(__name__)

## each route is associated with a function
@app.route("/")
def pokedex():
    # TODO: render a template displaying all 9 pokemon

@app.route("/display")
def disp():
    # TODO: render a template displaying a closeup of bulbasaur
