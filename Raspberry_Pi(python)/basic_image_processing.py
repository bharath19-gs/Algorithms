import cv2
import numpy as np
def resize(f_name,width,height):
	image= cv2.imread(f_name)
	cv2.imshow("image",image)
	resized=cv2.resize(image,(width,height))
	cv2.imshow("resized image",resized)
	k=(9)
	kernel = np.array([[10,-10,10],[10,-20,0],[10,-20,10]])
	sharpened= cv2.filter2D(image,-1,kernel)
	blurred=cv2.blur(image,ksize=(k,k))
	cv2.imshow("blurred image",blurred)
	cv2.imshow("sharpened image",sharpened)
	cv2.waitKey(0)
	
resize('FileName.jpg',1200,900)	

