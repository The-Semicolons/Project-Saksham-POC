import React, { useState } from "react";
import { Navbar, Button, Col, Input } from "reactstrap";
import SpeechRecognition, { useSpeechRecognition } from 'react-speech-recognition';

function SendAreaComponent() {

    const [text, OnTextChange] = useState("");

    const {
        transcript,
        listening,
        resetTranscript,
        browserSupportsSpeechRecognition
      } = useSpeechRecognition();

    const sendText = async () => {
        OnTextChange("");
        if(text==""){
            fetch('http://127.0.0.1:5000/', 
                {
                    method: "POST",
                    headers: { 'Content-Type': 'application/json',
                            'Access-Control-Allow-Origin': 'http://127.0.0.1:3000/',
                            'Access-Control-Allow-Methods': 'POST',
                    },
                    body: JSON.stringify({ text: transcript,
                                        sender: 1 })
                }
            )
            transcript = "";
        }
        else{
            fetch('http://127.0.0.1:5000/', 
                {
                    method: "POST",
                    headers: { 'Content-Type': 'application/json',
                            'Access-Control-Allow-Origin': 'http://127.0.0.1:3000/',
                            'Access-Control-Allow-Methods': 'POST',
                    },
                    body: JSON.stringify({ text: text,
                                        sender: 1 })
                }
            )
        }
        
    }

    const recordVoice = async () => {
        OnTextChange("");
        SpeechRecognition.startListening();
    }

    return(
        <Navbar color="primary" dark >
            <Col xl="9">
                <Input placeholder="Type here..."
                    type="text"
                    id="text"
                    required=""
                    value={text == ""? transcript : text}
                    onChange = {e => OnTextChange(e.target.value)}/>
            </Col>
            <Col xl="1">
                <div  className="mx-1" >
                    <Button color="success" block onClick={sendText}>
                        Send
                    </Button>
                </div>
            </Col>
            <Col xl="1">
                <div  className="mx-1" >
                    <Button color="warning" block>
                        Image
                    </Button>
                </div>
            </Col>
            <Col xl="1">
                <div  className="mx-1" >
                    <Button color="danger" block onClick={recordVoice}>
                        Voice
                    </Button>
                </div>
            </Col>
        </Navbar>
    )
}

export default SendAreaComponent;
