import pyautogui
import time

txt = ["har har mahadev" , "india❤️👑"]

# how many times array print value

t = 0
while t < 15:
    for i in txt:
        time.sleep(2)
        pyautogui.write(i)
        time.sleep(2)
        pyautogui.press("Enter")
    t = t+1;

print("over")
