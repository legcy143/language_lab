import pyautogui
import time

txt = ["soja motay" , "priyanshu singh"]

# how many times array print value

t = 0
while t < 15:
    for i in txt:
        time.sleep(0.1)
        pyautogui.write(i)
        time.sleep(0.1)
        pyautogui.press("Enter")
    t = t+1;

print("over")
