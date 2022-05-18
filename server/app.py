from flask import Flask, request, jsonify
from flask_cors import CORS
import serial
import json


app = Flask(__name__)
cors = CORS(app)


messages = {
                "Messages": [
                    {
                        "text": "Sample Message 1",
                        "sender": 0
                    },
                    {
                        "text": "Sample Message 2",
                        "sender": 1
                    }
                    ]
            }

@app.route('/', methods=['POST', 'GET'])
def function():
    if request.method == "GET":
        response = jsonify(messages)
        response.headers.add('Access-Control-Allow-Origin', '*')
        return response
    else:
        message = json.loads(request.data.decode('utf8').replace("'", '"'))
        messages["Messages"].insert(0, message)
        response = jsonify(messages)
        response.headers.add('Access-Control-Allow-Origin', '*')
        return response


if __name__ == '__main__':
    app.run(debug=True)
