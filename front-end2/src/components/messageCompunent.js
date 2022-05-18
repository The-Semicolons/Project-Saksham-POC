import React, {Component} from "react";
import { Row, Col, Card, CardBody, CardTitle, CardText } from "reactstrap";
import { useSpeechSynthesis } from 'react-speech-kit';

function MessageComponent(props) {

    const { speak } = useSpeechSynthesis();

        if(props.side == "0"){
            return(
                <React.Fragment>
                    <Row>
                        <Col xl="7">
                        </Col>
                        <Col xl="5">
                            <Card className="bg-chatbox m-3" dark>
                                <CardBody>
                                    <CardTitle tag="h6">
                                        You
                                    </CardTitle>
                                    <CardText onClick={() => speak({text: props.text})}>
                                        {props.text}
                                    </CardText>
                                </CardBody>
                            </Card>
                        </Col>
                    </Row>
                </React.Fragment>
            )
        }
        else{
            return(
                <React.Fragment>
                    <Row>
                        <Col xl="5">
                            <Card className="m-3" dark>
                                <CardBody>
                                    <CardTitle tag="h6">
                                        Sender
                                    </CardTitle>
                                    <CardText onClick={() => speak({text: props.text})}>
                                    {props.text}
                                    </CardText>
                                </CardBody>
                            </Card>
                        </Col>
                        <Col xl="7">
                        </Col>
                    </Row>
                </React.Fragment>
            )
        }
		
	}

export default MessageComponent;
