import socket
import time

HOST='192.168.0.4'
PORT=1235

ms = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
ms.bind((HOST,PORT))
ms.listen(5)
conn,addr=ms.accept()
if conn :
	print("Got a request!")
	print(conn,addr)
	time.sleep(2)
ms.close()
