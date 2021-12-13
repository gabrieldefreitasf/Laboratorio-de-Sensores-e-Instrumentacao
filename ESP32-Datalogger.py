"""
//Datalogger - Código para leitura de dados enviados serialmente(USB) e criação de arquivo .txt
//Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
//Gabriel de Freitas
"""
import serial
arduino = serial.Serial('/dev/ttyUSB0', 115200, timeout=.1)
f= open("Dados-RPS_teste.txt", "w")
while True:
	data = arduino.readline()[:-2] #the last bit gets rid of the new-line chars
	if data:
		print (data)
		f.write((str(data).replace("'","").replace("b","\n")))
		f.flush()
f.close()
