# **EnerMon:** IoT platform #

## Introduction ##

The project aims to provide engineers, technicians, and students with an 
easy-to-use platform for designing their IoT devices and automated systems. 
The platform will serve as an interface between IoT devices and desktop or 
mobile clients. It uses gRPC for device registration and communication and 
a microservices-based architecture for scalability and flexibility. It will 
include features such as device control, data collection, and real-time 
monitoring of devices and systems. 

## Technologies ##
**Libraries:**

Node.js, Socket.io, 

**Database:**

InfluxDB and Postgresql.

**Frontend:**

React.js

**Language:**

C/C++, JavaScript, HTML, CSS.

**Frameworks:** 

PlatformIO

**Communication Protocol:**

@grpc/grpc-js, @grpc/proto-loader

**Hardware:**

Expressif32, PZEM-004T and AC-DC converter circuit.

## Architecture ##

**Backend:**

The server side consist of gRPC and RESTful API build using Node.js. The RESTful API will handle 
authentication of a new user and generate tokens for existing or registered users. The token is parse explicitly by the 
user to the IoT device through an interface that is viewed on a browser when on a mobile or desktop client. The 
token can only be inserted when the mobile or desktop connects to the IoT WiFi access point. The first IoT device to 
use the token to connect to the web application has its MAC address saved into the database as a child key of the 
generated token. The token will no longer be valid for any other IoT that has a different MAC address, except a new 
token is generated from the web.

**Request-Response Protocol:**

The gRPC framework defines the format of communication messages and service protocols for IoT clients, web 
applications, and mobile clients using protocol buffer. Data collected from IoT sensors is parsed and serialized in 
binary format on HTTP/2, and subsequently forwarded to the web application for database updates. Additionally, 
when a mobile client is connected, the server invokes the bi-directional streaming function.

**Frontend:**

React.js is used to build the frontend which provides a user interface for interacting with the IoT devices and 
accessing data collected by the backend. Additionally, the dashboard is also built using React.js.

**Database:**

The database used is InfluxDB, a NoSQL, that will be used to hold IoT and mobile clients data, while Postgresql, 
a relational database will hold user login credentials.

## Challenges ##

The challenge faced in the project was choosing the most suitable tool and technology for parsing data between 
server and clients. In the case of this project, the challenge of parsing data from IoT clients to the server using unary 
call on a RESTful API resulted to low performance on a 80 Mhz microcontroller. It led to high network overhead and 
latency when dealing with above 300 bytes JSON string. This resulted in slow response time and decreased 
performance.

## Infrastructure ##

Branching and merging among team's and future contributors repositories will follow the Gitflow strategy, which separates development and production branches and uses feature and release branches for development and testing. 

For testing EnerMon, we will use a combination of manual and automated testing. Manual testing will involve testing the user interface and user experience of EnerMon to ensure that it is user-friendly and intuitive. Automated testing will involve using tools such as Jest and Enzyme to test the functionality and performance of the system, as well as conducting integration and end-to-end testing to ensure that all components are working together as intended.

## Authors ##
Stanley Osagie: http://www.linkedin.com/in/sagieramos

Segun Fashina: 

Chinedum Oliver-Ugwi: https://www.linkedin.com/in/chinedum-oliver-ugwi-0b8314248

## Conclusion ##

EnerMon is designed to make it possible for anyone to create and manage their own IoT systems 
and devices without the need for extensive technical knowledge or resources.
It can be used to develop a user-friendly, economical, and adjustable energy monitoring and control system that assists homes and small businesses in controlling their energy usage more productively. It is built on the most recent Internet of Things technologies and provides instantaneous information about energy usage as well as prudent advice on how to decrease energy waste. By furnishing a complete energy monitoring and control system, EnerMon grants customers the power to take command of their energy consumption and contribute to a more sustainable future.
