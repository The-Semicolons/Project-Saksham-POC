# Saksham - Communication Solution for Disabled

## Abstract

Saksham is a single point solution for bridging the communication gap between individuals with visual, auditory, or speech impairments and those without any disability. The application utilizes computer vision, voice recognition, and sophisticated hardware to convert sign language, voice, and braille to text, enabling seamless communication between diverse populations.

## Introduction

Disability is a part of the human condition, and almost everyone will experience impairment at some point in life. Saksham aims to empower the disabled community by providing them with a communication tool that is easy to use and adaptable to their specific needs. By combining AI, machine learning, and hardware components, Saksham offers a comprehensive solution for individuals with visual, auditory, or speech disabilities.

## Features

- Sign Language Recognition: Saksham utilizes computer vision and a deep neural network to convert sign language gestures into text.
- Voice Recognition: The application employs speech-to-text technology to convert spoken words into text.
- Braille Interaction: Saksham features a sophisticated hardware setup to convert Braille input into text and provide tactile feedback to the user.
- Customizable Interface: The user interface is designed to be user-friendly and can be customized to suit individual preferences.
- Wireless Communication: Saksham enables wireless communication between the device and other devices via Bluetooth.

## System Requirements

- Operating System: Windows 10 v21H1 or later (64-bit)
- Memory: 8 GB 2400 MHz DDR4
- Storage: 250 GB SATA3 SSD
- Python: Version 3.8
- IDE: PyCharm 2022 v16.11

## Technical Information

- Programming Language: Python, JavaScript (React)
- Machine Learning Framework: TensorFlow
- Hardware: Arduino Mega, SG90 Servo Motors, Push Buttons, Buzzer, Vibrator Motor, LEDs, Bluetooth Module, Resistors, Capacitors
- Communication: Fast API for server-side functionality
- Architecture: The system follows a modular architecture. It consists of the following components:
  1. Sign Language Recognition: Utilizes computer vision and a Convolutional Neural Network (CNN) to recognize sign language gestures and convert them into text.
  2. Voice Recognition: Uses Web Speech API to convert spoken words into text.
  3. Braille Interaction: Involves a hardware setup with Arduino Mega, push buttons, servo motors, and other components to convert Braille input into text and provide tactile feedback to the user.
  4. User Interface: Developed using React, providing a user-friendly interface for easy communication.
  5. Server: Utilizes Fast API to maintain communication records and facilitate live conversations between users.


## How it Works

1. Sign Language Recognition:
   - The user performs sign language gestures in front of a camera connected to the system.
   - The system utilizes computer vision and a Convolutional Neural Network (CNN) to recognize the gestures.
   - The recognized gestures are converted into text, representing the user's intended message.

2. Voice Recognition:
   - The user speaks into the system's microphone.
   - The application employs the Web Speech API to convert the spoken words into text.
   - The converted text is displayed on the user interface for further communication.

3. Braille Interaction:
   - The user inputs Braille characters using the designated push buttons on the hardware setup.
   - The Braille input is converted into text, representing the user's message.
   - The system provides tactile feedback to the user using a vibrator motor to confirm the input.

4. User Interface:
   - The user interface displays the converted text from sign language or voice recognition.
   - It also provides options for customization and additional features like text-to-speech.

5. Wireless Communication:
   - Saksham enables wireless communication between the device and other devices via Bluetooth.
   - Users can connect Saksham to their computer or mobile devices for seamless communication.


## Contributing

Contributions to Saksham are welcome! To contribute, follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix: `git checkout -b feature-name`
3. Commit your changes: `git commit -m "Description of changes"`
4. Push to the branch: `git push origin feature-name`
5. Open a pull request to the `main` branch.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
