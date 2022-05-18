# Super Translator

## Conditions
1. Normal
2. Blind
3. Deaf
4. Mute
5. Blind & Deaf
6. Blind & Mute
7. Deaf & Mute
8. Blind, Deaf & Mute

## Normal
### Input
- Sound (Speech)
- Visual (Text)
- Visual (Braille)
- Visual (Sign Language)
### Output
- Sound (Speech)
- Touch (Text)
- Touch (Braille)
- Visual (Sign Language)

## Blind
### Input
- Sound (Speech)
- Touch (Braille)
### Output
- Sound (Speech)
- Touch (Type)
- Touch (Braille)

## Deaf
### Input
- Visual (Text)
- Visual (Sign Language)
### Output
- Touch (Type)
- Sound (Speak)
- Visual (Sign Language)

## Mute
### Input
- Visual (Text)
- Visual (Sign Language)
- Sound (Speech)
### Output
- Visual (Text)
- Visual (Sign Language)

## Blind & Deaf
### Input
- Touch (Braille)
### Output
- Sound (Speech)
- Touch (Braille)
- Touch (Type)

## Blind & Mute
### Input
- Sound (Speech)
- Touch (Braille)
### Output
- Touch (Braille)
- Touch (Type)

## Deaf & Mute
### Input
- Visual (Sign Language)
- Visual (Text)
### Output
- Visual (Sign Language)
- Touch (Type)

## Blind, Deaf & Mute
### Input
- Touch (Braille)
### Output
- Touch (Braille)
- Touch (Type)

## Languages
1. Speech
2. Text
3. Braille
4. Sign Language

## Conversions
1. Speech -> Text (NLP)
2. Text -> Speech (Simple Conversion)
3. Sign Language -> Text (Computer Vision)
4. Text -> Sign Language (Simple Conversion)
5. Braille -> Text (Simple Conversion)
6. Text -> Braille (Simple Conversion)

## Models/Devices
1. Website
2. Django Server
   1. Natural Language Processor
   2. Computer Vision Model
3. Arduino Braille Output Device
4. Arduino Braille Input Device

## Technological Stack
1. Tensorflow 
2. OpenCV
3. Django
4. React
5. Arduino

## Languages
- Python
- C++ (Arduino)
- HTML, CSS, JS

## Workflow
1. Website (Optional)
2. Text -> Speech Conversion
3. Text -> Sign Language Conversion (Romoved)
4. Arduino Braille Input Device
5. Braille -> Text Conversion
6. Arduino Braille Output Device
7. Text -> Braille Conversion
8. Computer Vision Model
9. Sign Language -> Text Conversion
10. Natural Language Processor (Romoved)
11. Speech -> Text Conversion (Romoved)
 
## Future Aspects
- Install it in a School or NGO.
- Write a paper out of it.

https://ieeexplore.ieee.org/abstract/document/7100321