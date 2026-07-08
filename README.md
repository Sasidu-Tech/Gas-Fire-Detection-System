```cpp
# 🔥 Gas & Fire Detection System using ESP32


## 📌 Overview

The **Gas & Fire Detection System using ESP32** is an IoT-based safety monitoring project designed to detect gas leaks and fire hazards in real time.

The system uses an **MQ-2 Gas Sensor** to detect harmful gases and a **Flame Sensor** to detect fire. When a gas leak is detected, the system automatically activates an **exhaust fan** to improve ventilation. When a fire is detected, a **water pump** is automatically switched on to help control the fire.

The current system status is displayed on a **16×2 I2C LCD**, while a **buzzer** and **LED indicators** provide immediate warning alerts. All connected devices are controlled automatically using an **ESP32 microcontroller and a 4-channel relay module**.

---

# ✨ Features

- 🔥 Real-time fire detection using Flame Sensor
- 💧 Automatic water pump activation during fire detection
- 💨 Gas leak detection using MQ-2 Gas Sensor
- 🌬️ Automatic exhaust fan control during gas leakage
- 📟 16×2 I2C LCD real-time status display
- 🔔 Emergency buzzer alarm system
- 💡 LED warning indicators
- ⚡ 4-Channel Relay Module based appliance control
- 🚀 ESP32 WiFi-enabled embedded safety system
- 🔋 Low-cost and reliable safety solution

---

# 🛠️ Hardware Components

| Component | Quantity |
|-----------|----------|
| ESP32 Development Board | 1 |
| MQ-2 Gas Sensor | 1 |
| Flame Sensor | 1 |
| 16×2 I2C LCD Display | 1 |
| 4-Channel Relay Module | 1 |
| Buzzer | 1 |
| LED Indicators | 2 |
| Exhaust Fan | 1 |
| Water Pump | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| Power Supply | 1 |

---

# 🔌 System Operation

## 🔥 Fire Detection

1. Flame sensor continuously monitors the environment.
2. If fire is detected:
   - Water pump turns ON through relay.
   - Buzzer starts alarm.
   - Red LED indicator turns ON.
   - LCD displays **"FIRE DETECTED"**.

---

## 💨 Gas Leak Detection

1. MQ-2 sensor continuously measures gas levels.
2. If gas value exceeds the safety limit:
   - Exhaust fan turns ON.
   - Buzzer activates.
   - Gas warning LED turns ON.
   - LCD displays **"GAS LEAK DETECTED"**.

---

# 📊 Block Diagram

```
        MQ-2 Gas Sensor
              |
              |
          ESP32 Board
              |
   -------------------------
   |           |           |
 Relay     LCD Display   Buzzer
 Module        |           |
   |           |           |
Fan / Pump   Status     Alarm
```

---

# 🔧 Pin Connections

| Device | ESP32 Pin |
|--------|-----------|
| MQ-2 Analog Output | GPIO 34 |
| Flame Sensor | GPIO 35 |
| Buzzer | GPIO 25 |
| Red LED | GPIO 26 |
| Green LED | GPIO 27 |
| LCD SDA | GPIO 21 |
| LCD SCL | GPIO 22 |
| Relay Fan | GPIO 32 |
| Relay Pump | GPIO 33 |

---

# 📚 Required Libraries

Install these libraries in Arduino IDE:

- Wire.h
- LiquidCrystal_I2C.h

---

# 💻 Software Requirements

- Arduino IDE
- ESP32 Board Package
- USB Cable
- ESP32 Driver

---

# 🚀 Installation

1. Download or clone this repository.

```bash
git clone https://github.com/Sasidu-Tech/Gas-Fire-Detection-ESP32.git
```

2. Open the Arduino code file.

```
code/main.ino
```

3. Install required libraries.

4. Select ESP32 board:

```
Tools → Board → ESP32 Dev Module
```

5. Upload the code to ESP32.

---

# 📂 Project Structure

```
Gas-Fire-Detection-ESP32/
│
├── code/
│   └── main.ino
│
├── images/
│   └── project.jpg
│
├── circuit/
│   └── wiring.pdf
│
├── videos/
│   └── demo.mp4
│
└── README.md
```

---



# 🔮 Future Improvements

- 📱 Telegram/Email emergency notifications
- 🌐 Web dashboard monitoring
- 📷 ESP32-CAM fire image capture
- 🔋 Battery backup system
- ☁️ Cloud data logging

---

# 👨‍💻 Developer

**Sasidu-Tech**

ESP32 | Arduino | IoT | Embedded Systems

---

# ⭐ Support

If you like this project, consider giving it a ⭐ on GitHub.
```

