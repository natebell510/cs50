from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    if "name" in request.args:
        name = request.args["name"]
    else:
        name = "world"
    return render_template("index.html", name = name)

@app.route("/greet", methods=["GET"])
def greet():
    return render_tempate("greet.html", name=request.args.get("name","world"))


@app.route("/greet", methods=["POST"])
def greet2():
    return render_tempate("greet.html", name=request.form.post("name","world"))
