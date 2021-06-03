from twython import Twython
from twython import TwythonStreamer
import RPi.GPIO as GPIO
import time 
C_KEY="Rj0int3MLmJyk9ZPfl4OQq1n4"
C_SECRET="ChZmvswQ8lZ7mESJNb6ShPoqVfoMKul65pj4sEBw87u6g7qVA3"
A_TOKEN="1290544975076143104-J5Ulge5kxe57WouAdBnhiWUMyms6VT"
A_SECRET="KrWUcWdB9ZV22WPHYsKY1hYWgCi02uf753pbEnZDr3A2l"
GPIO.setmode(GPIO.BOARD)
GPIO.setup(13,GPIO.OUT)
def blink():
	GPIO.output(13,True)
	time.sleep(2)
	GPIO.output(13,False)
	time.sleep(2)
class MyStreamer(TwythonStreamer):
	def on_success(self,data):
		if 'text' in data:
			blink()
			print('found_something')
stream = MyStreamer(C_KEY,C_SECRET,A_TOKEN,A_SECRET)
stream.statuses.filter(track="bharat_iot")
