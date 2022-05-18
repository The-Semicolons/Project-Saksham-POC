import React, {Component} from "react";
import {Navbar, NavbarBrand, Nav, Button, NavItem, Input} from "reactstrap";

class NavbarComponent extends Component {
	render(){
		return(
			<React.Fragment>
                <Navbar color="info" dark expand="md">
                        <NavbarBrand href="/">
                            <img src="/logo.png" alt="Saksham" height="35px"/>
                            &nbsp;
                            Saksham | Communication for disabled
                        </NavbarBrand>
                        <Nav className="mr-auto" navbar>
                            <NavItem>
                                <Input id="exampleSelect" name="select" type="select" className="mr-2">
                                    <option>
                                        English
                                    </option>
                                    <option>
                                        Hindi | हिन्दी
                                    </option>
                                </Input>
                            </NavItem>
                            &nbsp;
                            &nbsp;
                            <NavItem>
                                <Button color="dark">
                                    Reset
                                </Button>
                            </NavItem>
                        </Nav>
                </Navbar>
			</React.Fragment>
		)
	}
}

export default NavbarComponent;
