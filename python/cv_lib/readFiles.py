import cv2
print("har har mahadev")

#read image
img = cv2.imread("../assets/sample_1.png")

# shwo image
cv2.imshow("output" , img)
# cv2.waitKey(2000)
print("read image done")


# read vedio 
cap = cv2.VideoCapture("../assets/radhe_radhe.mp4")

# show vedio 
# make true to show vedio
while False:
    success , img = cap.read()
    cv2.imshow("vedio" , img)
    if cv2.waitKey(1000) & 0xff == ord("q"):
        break

# read webcam

webCap = cv2.VideoCapture(1)
cap.set(3 , 350)
cap.set(4 , 350)

print("read vedio done")

