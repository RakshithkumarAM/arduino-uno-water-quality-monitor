import serial
import time
import pywhatkit
import pyautogui

arduino = serial.Serial('COM9', 9600)

time.sleep(2)

previous_status = "GREEN"

while True:

    data = arduino.readline().decode().strip()

    print(data)

    current_status = ""

    if "GREEN" in data:
        current_status = "GREEN"

    elif "YELLOW" in data:
        current_status = "YELLOW"

    elif "RED" in data:
        current_status = "RED"

    message = ""

    # GREEN -> YELLOW
    if previous_status == "GREEN" and current_status == "YELLOW":

        message = """⚠️ WATER QUALITY WARNING

🟡 Water quality has changed from GOOD to MEDIUM.

Please inspect the water source.
"""

    # GREEN -> RED
    elif previous_status == "GREEN" and current_status == "RED":

        message = """🚨 CRITICAL WATER ALERT 🚨

🔴 Water quality has changed from GOOD to BAD.

Immediate inspection is required.
"""

    # YELLOW -> RED
    elif previous_status == "YELLOW" and current_status == "RED":

        message = """🚨 EMERGENCY WATER ALERT 🚨

🔴 Water quality has deteriorated from MEDIUM to BAD.

Urgent action required.
"""

    if message != "":

        print("Sending WhatsApp Alert...")

        pywhatkit.sendwhatmsg_instantly(
            "+91YOURNUMBER",
            message,
            wait_time=30,
            tab_close=False
        )

        time.sleep(15)

        pyautogui.press("enter")

        print("Alert Sent")

    if current_status != "":
        previous_status = current_status
