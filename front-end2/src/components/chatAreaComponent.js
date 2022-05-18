import React, {useState, useEffect} from "react";
import { Container } from "reactstrap";
import MessageComponent from "./messageCompunent";
import SendAreaComponent from "./sendAreaComponent";


function ChatAreaComponent() {

    const [messages, setMessages] = useState(null);

	setTimeout(useEffect(() => {
		fetch('http://127.0.0.1:5000/', )
            .then(response => response.text())
            .then(data => JSON.parse(data))
            .then(x => setMessages(x["Messages"]));
	}), 1000);

    if(messages != null) {
        return(
            <Container>
                <div className="bg-chatarea">
                    <div className="bg-scroll">
                        {
                            messages.map(element => {
                                return(
                                    <MessageComponent key={element["text"]} side={element["sender"]} text={element["text"]}/>
                                );
                            }
                        )}
                    </div>
                    <SendAreaComponent/>
                </div>
            </Container>
        )
    }
    else {
        return(
            <Container>
                <div className="bg-chatarea">
                    <div className="bg-scroll">
                    </div>
                    <SendAreaComponent/>
                </div>
            </Container>
        )
    }
}

export default ChatAreaComponent;
