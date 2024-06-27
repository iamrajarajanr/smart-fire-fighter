# Smart Firefighter using Arduino

## Introduction
The Smart Firefighter project leverages Arduino microcontrollers and sensors to create a system aimed at enhancing firefighting capabilities. This repository contains the code and documentation for building and deploying the Smart Firefighter system.

## Features
- **Temperature and Smoke Detection**: Utilizes sensors to detect temperature changes and smoke presence.
- **Real-time Monitoring**: Provides real-time data to assist firefighters in assessing the situation.
- **Alert System**: Triggers alerts based on sensor readings to notify firefighters.
- **Data Logging**: Records environmental data for post-incident analysis.

## Components
- **Arduino Board**: Used to control and interface with sensors.
- **Temperature Sensor**: Monitors ambient temperature changes.
- **Smoke Sensor**: Detects the presence of smoke.
- **Display Module (optional)**: Displays real-time data for immediate visualization.

## Installation
1. **Clone the Repository**:
-git clone https://github.com/iamrajarajanr/smart-firefighter.git


2. **Upload Code to Arduino**:
- Open the Arduino IDE.
- Load the `.ino` file located in the `arduino_code` directory.
- Upload the code to your Arduino board.

3. **Assemble Hardware**:
- Connect the sensors according to the circuit diagram provided (`circuit_diagram.png`).

4. **Deploy**:
- Power up the Arduino and sensors in a location where monitoring is required.

## Usage
- Upon deployment, the system continuously monitors temperature and smoke levels.
- Alerts are triggered if abnormal conditions (e.g., high temperature, presence of smoke) are detected.
- Monitor the display module or serial monitor for real-time updates.

## Contributing
Contributions to improve the project are welcome! Please follow these steps:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-improvement`).
3. Make modifications and commit changes (`git commit -am 'Add feature'`).
4. Push to the branch (`git push origin feature-improvement`).
5. Create a pull request.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
