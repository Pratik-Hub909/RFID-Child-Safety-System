🚸 RFID Integrated Child Safety & Attendance System

📌 Overview

An IoT-based system designed to enhance child safety during school commutes by integrating RFID-based attendance with real-time GPS tracking using ESP32.


---

🚀 Features

📍 Real-time GPS tracking

🪪 RFID-based automated attendance

⚡ ESP-NOW wireless communication

☁️ Firebase cloud storage

🌐 Web dashboard monitoring



---

🧠 System Architecture

1. RFID Scanning Bench (ESP32 + RC522)


2. GPS Tracker Device (ESP32 + NEO-6M)


3. ESP-NOW Communication Layer


4. Firebase Database + Web Dashboard




---

📁 Project Structure

RFID-Child-Safety-System/
│
├── esp32-rfid-attendance/
│   └── rfid_attendance.ino
│
├── esp32-gps-tracker/
│   └── gps_tracker.ino
│
├── esp32-receiver/
│   └── receiver.ino
│
├── web-dashboard/
│   ├── index.html
│   ├── app.js
│   └── firebase-config.js
│
└── README.md


---

🔌 Hardware Components

ESP32

RFID Module (RC522)

NEO-6M GPS Module

Li-ion Battery + TP4056 + MT3608

LEDs & Buzzer



---

💻 Setup Instructions

1. ESP32 Setup

Install Arduino IDE

Install ESP32 board package

Install libraries:

MFRC522

TinyGPS++

esp_now



2. Firebase Setup

Create Firebase project

Enable Realtime Database

Copy config to firebase-config.js



---

📈 Future Improvements

Geofencing alerts

Mobile notifications

Battery optimization

Data encryption



---

👨‍💻 Authors

Pratik Tiwari

Vidhi Umap

Vedant Sikariya





---

⭐ License

Open-source for educational purposes