import cv2
try:
    from PIL import Image
except ImportError:
    import Image
from pytesseract import *
from time import sleep
import serial

IMAGE_FILE = "image.jpg"
ser = serial.Serial('/dev/ttyACM0',9600)

while True:
	img = cv2.VideoCapture(0).read()[1]
	cv2.imwrite(IMAGE_FILE,img)
	img = Image.open(IMAGE_FILE)
	words = image_to_string(img).strip()
	print (words)
	ser.write(words.encode())
	sleep(2)
