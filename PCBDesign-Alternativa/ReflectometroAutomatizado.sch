EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ReflectometroAutomatizado-rescue:ESP32_DevKit_V1_DOIT-ESP32_DevKit_V1_DOIT U1
U 1 1 5FD7D28A
P 3400 3650
F 0 "U1" H 3400 5231 50  0000 C CNN
F 1 "ESP32_DevKit_V1_DOIT" H 3400 5140 50  0000 C CNN
F 2 "ReflectometroAutomatizado:esp32_devkit_v1_doit" H 2950 5000 50  0001 C CNN
F 3 "https://aliexpress.com/item/32864722159.html" H 2950 5000 50  0001 C CNN
	1    3400 3650
	1    0    0    -1  
$EndComp
$Comp
L Driver_Motor:Pololu_Breakout_A4988 MP(THETA)1
U 1 1 5FD7EB1D
P 6700 1800
F 0 "MP(THETA)1" H 6750 2681 50  0000 C CNN
F 1 "Pololu_Breakout_A4988" H 6750 2590 50  0001 C CNN
F 2 "ReflectometroAutomatizado:MODULE_A4988" H 6975 1050 50  0001 L CNN
F 3 "https://www.pololu.com/product/2980/pictures" H 6800 1500 50  0001 C CNN
	1    6700 1800
	1    0    0    -1  
$EndComp
$Comp
L Driver_Motor:Pololu_Breakout_A4988 MP(X)1
U 1 1 5FD800E6
P 6700 3600
F 0 "MP(X)1" H 6750 4450 50  0000 C CNN
F 1 "Pololu_Breakout_A4988" H 6750 4390 50  0001 C CNN
F 2 "ReflectometroAutomatizado:MODULE_A4988" H 6975 2850 50  0001 L CNN
F 3 "https://www.pololu.com/product/2980/pictures" H 6800 3300 50  0001 C CNN
	1    6700 3600
	1    0    0    -1  
$EndComp
$Comp
L Driver_Motor:Pololu_Breakout_A4988 MP(Y)1
U 1 1 5FD81086
P 6700 5400
F 0 "MP(Y)1" H 6750 6250 50  0000 C CNN
F 1 "Pololu_Breakout_A4988" H 6750 6190 50  0001 C CNN
F 2 "ReflectometroAutomatizado:MODULE_A4988" H 6975 4650 50  0001 L CNN
F 3 "https://www.pololu.com/product/2980/pictures" H 6800 5100 50  0001 C CNN
	1    6700 5400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 5050 3400 5050
Text GLabel 3500 5150 2    50   Input ~ 0
GND
Text GLabel 7250 4400 2    50   Input ~ 0
GND
Text GLabel 7250 6250 2    50   Input ~ 0
GND
Text GLabel 7200 2600 2    50   Input ~ 0
GND
Wire Wire Line
	3400 5050 3400 5150
Wire Wire Line
	3400 5150 3500 5150
Connection ~ 3400 5050
Wire Wire Line
	6700 6200 6900 6200
Wire Wire Line
	6900 6200 7150 6200
Wire Wire Line
	7150 6200 7150 6250
Wire Wire Line
	7150 6250 7250 6250
Connection ~ 6900 6200
Wire Wire Line
	6700 4400 6900 4400
Wire Wire Line
	6900 4400 7250 4400
Connection ~ 6900 4400
Wire Wire Line
	6700 2600 6900 2600
Wire Wire Line
	6900 2600 7200 2600
Connection ~ 6900 2600
Wire Wire Line
	6300 1400 6300 1500
Wire Wire Line
	6300 3200 6300 3300
Wire Wire Line
	6300 5000 6300 5100
Wire Wire Line
	6300 1700 6200 1700
Wire Wire Line
	6150 3500 6300 3500
Wire Wire Line
	6150 5300 6300 5300
Wire Wire Line
	6300 5700 6300 5800
Wire Wire Line
	6300 5800 6300 5900
Connection ~ 6300 5800
Wire Wire Line
	6300 3900 6300 4000
Wire Wire Line
	6300 4000 6300 4100
Connection ~ 6300 4000
Text GLabel 6150 4100 0    50   Input ~ 0
GND
Text GLabel 6150 5900 0    50   Input ~ 0
GND
Wire Wire Line
	6150 5900 6300 5900
Connection ~ 6300 5900
Wire Wire Line
	6150 4100 6300 4100
Connection ~ 6300 4100
Text GLabel 7400 1100 2    50   Input ~ 0
Vmot1
Text GLabel 7450 2900 2    50   Input ~ 0
Vmot2
Text GLabel 7400 4700 2    50   Input ~ 0
Vmot3
Wire Wire Line
	6900 4700 7400 4700
Wire Wire Line
	6900 2900 7450 2900
Wire Wire Line
	6900 1100 7400 1100
Text GLabel 4200 2250 2    50   Input ~ 0
Vdd
Wire Wire Line
	3400 2250 4200 2250
Text GLabel 5850 5500 0    50   Input ~ 0
DIR-MP(Y)
Text GLabel 5850 5400 0    50   Input ~ 0
STEP-MP(Y)
Wire Wire Line
	5850 5400 6300 5400
Wire Wire Line
	5850 5500 6300 5500
Text GLabel 6150 1100 0    50   Input ~ 0
Vdd
Text GLabel 6150 2900 0    50   Input ~ 0
Vdd
Text GLabel 6150 4700 0    50   Input ~ 0
Vdd
Wire Wire Line
	6700 4700 6150 4700
Wire Wire Line
	6700 2900 6150 2900
Wire Wire Line
	6700 1100 6150 1100
Text GLabel 4000 3350 2    50   Input ~ 0
DIR-MP(Y)
Text GLabel 4000 2650 2    50   Input ~ 0
STEP-MP(Y)
Text GLabel 6200 3700 0    50   Input ~ 0
DIR-MP(X)
Text GLabel 6200 3600 0    50   Input ~ 0
STEP-MP(X)
Text GLabel 6200 1900 0    50   Input ~ 0
DIR-MP(THETA)
Text GLabel 6200 1800 0    50   Input ~ 0
STEP-MP(THETA)
Wire Wire Line
	6200 1800 6300 1800
Wire Wire Line
	6200 1900 6300 1900
Wire Wire Line
	6200 3600 6300 3600
Wire Wire Line
	6200 3700 6300 3700
Text GLabel 4000 2850 2    50   Input ~ 0
DIR-MP(X)
Text GLabel 4000 3450 2    50   Input ~ 0
STEP-MP(X)
Text GLabel 4000 3550 2    50   Input ~ 0
DIR-MP(THETA)
Text GLabel 4000 2950 2    50   Input ~ 0
STEP-MP(THETA)
Text GLabel 4000 3650 2    50   Input ~ 0
MS3
Text GLabel 4000 3750 2    50   Input ~ 0
MS2
Text GLabel 4000 3850 2    50   Input ~ 0
MS1
Text GLabel 6300 2100 0    50   Input ~ 0
MS1
Text GLabel 6300 2300 0    50   Input ~ 0
MS3
Text GLabel 6300 2200 0    50   Input ~ 0
MS2
$Comp
L Connector:Screw_Terminal_01x02 FontedeAlimentação1
U 1 1 5FDBA6AE
P 3400 6150
F 0 "FontedeAlimentação1" H 3480 6096 50  0000 L CNN
F 1 "Screw_Terminal_01x02" H 3480 6051 50  0001 L CNN
F 2 "TerminalBlock:TerminalBlock_bornier-2_P5.08mm" H 3400 6150 50  0001 C CNN
F 3 "~" H 3400 6150 50  0001 C CNN
	1    3400 6150
	1    0    0    -1  
$EndComp
Text GLabel 2700 6100 0    50   Input ~ 0
Vmot1
Text GLabel 2400 6300 0    50   Input ~ 0
GND
$Comp
L Connector:Conn_01x04_Male MP(THETA)2
U 1 1 5FDBFA5A
P 7750 1900
F 0 "MP(THETA)2" H 7722 1828 50  0000 R CNN
F 1 "Conn_01x04_Male" H 7722 1873 50  0001 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 7750 1900 50  0001 C CNN
F 3 "~" H 7750 1900 50  0001 C CNN
	1    7750 1900
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x04_Male MP(X)2
U 1 1 5FDC0993
P 7750 3700
F 0 "MP(X)2" H 7722 3628 50  0000 R CNN
F 1 "Conn_01x04_Male" H 7722 3673 50  0001 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 7750 3700 50  0001 C CNN
F 3 "~" H 7750 3700 50  0001 C CNN
	1    7750 3700
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x04_Male MP(Y)2
U 1 1 5FDC2FAC
P 7700 5500
F 0 "MP(Y)2" H 7672 5428 50  0000 R CNN
F 1 "Conn_01x04_Male" H 7672 5473 50  0001 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 7700 5500 50  0001 C CNN
F 3 "~" H 7700 5500 50  0001 C CNN
	1    7700 5500
	-1   0    0    1   
$EndComp
Wire Wire Line
	7200 5300 7500 5300
Wire Wire Line
	7200 5400 7500 5400
Wire Wire Line
	7200 5500 7500 5500
Wire Wire Line
	7200 5600 7500 5600
Wire Wire Line
	7200 3500 7550 3500
Wire Wire Line
	7200 3600 7550 3600
Wire Wire Line
	7200 3700 7550 3700
Wire Wire Line
	7200 3800 7550 3800
Wire Wire Line
	7200 1700 7550 1700
Wire Wire Line
	7200 1800 7550 1800
Wire Wire Line
	7200 1900 7550 1900
Wire Wire Line
	7200 2000 7550 2000
$Comp
L Connector:Screw_Terminal_01x02 Fotodetectores(Sinal)1
U 1 1 5FDD6296
P 3550 1050
F 0 "Fotodetectores(Sinal)1" H 3630 996 50  0000 L CNN
F 1 "Screw_Terminal_01x02" H 3630 951 50  0001 L CNN
F 2 "TerminalBlock:TerminalBlock_bornier-2_P5.08mm" H 3550 1050 50  0001 C CNN
F 3 "~" H 3550 1050 50  0001 C CNN
	1    3550 1050
	1    0    0    -1  
$EndComp
Text GLabel 3350 1050 0    50   Input ~ 0
FOTO1
Text GLabel 3350 1150 0    50   Input ~ 0
FOTO2
Text GLabel 4000 4650 2    50   Input ~ 0
FOTO1
Text GLabel 4000 4750 2    50   Input ~ 0
FOTO2
$Comp
L Device:CP_Small 100uF1
U 1 1 5FD94514
P 2850 6200
F 0 "100uF1" H 2938 6200 50  0000 L CNN
F 1 "CP_Small" H 2938 6155 50  0001 L CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.00mm" H 2850 6200 50  0001 C CNN
F 3 "~" H 2850 6200 50  0001 C CNN
	1    2850 6200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 6300 2550 6300
Wire Wire Line
	3200 6100 3200 6150
Wire Wire Line
	2850 6300 3200 6300
Wire Wire Line
	3200 6300 3200 6250
Wire Notes Line
	5300 6450 8600 6450
Wire Notes Line
	8600 6450 8600 650 
Wire Notes Line
	8600 650  5300 650 
Wire Notes Line
	5300 650  5300 6450
Text Notes 5300 850  0    118  ~ 24
DRIVERS - Motores\n
Wire Notes Line
	2900 1300 2900 550 
Wire Notes Line
	2900 550  4700 550 
Wire Notes Line
	4700 550  4700 1300
Wire Notes Line
	4700 1300 2900 1300
Text Notes 2900 900  0    118  ~ 24
ENTRADA - \nFotodetectores
Wire Notes Line
	2100 1650 4800 1650
Wire Notes Line
	4800 1650 4800 5400
Wire Notes Line
	4800 5400 2100 5400
Wire Notes Line
	2100 5400 2100 1650
Text Notes 2150 1900 0    118  ~ 24
Módulo - ESP32 DevKit V1\n
Text Notes 2100 5950 0    118  ~ 24
Entrada\nFonte de Alimentacao\n
Wire Wire Line
	2700 6100 2850 6100
Connection ~ 2850 6100
Wire Wire Line
	2850 6100 3200 6100
Text Notes 7000 6950 0    118  ~ 24
Módulo de Controle e Aquisição\nReflectômetro Automatizado\n
Text Notes 7000 7100 0    79   ~ 16
Projetado por Gabriel de Freitas\n
Text GLabel 6200 1700 0    50   Input ~ 0
ENABLE1
Text GLabel 6150 3500 0    50   Input ~ 0
ENABLE2
Text GLabel 6150 5300 0    50   Input ~ 0
ENABLE3
Text GLabel 4000 4450 2    50   Input ~ 0
ENABLE1
Text GLabel 4000 4550 2    50   Input ~ 0
ENABLE2
Text GLabel 4000 4150 2    50   Input ~ 0
ENABLE3
Wire Notes Line
	2100 5600 4900 5600
Wire Notes Line
	4850 7550 4850 5600
Wire Notes Line
	2100 5600 2100 7550
Wire Notes Line
	2100 7550 4850 7550
$Comp
L Connector:Screw_Terminal_01x02 FontedeAlimentação2
U 1 1 61B3DC66
P 3400 6650
F 0 "FontedeAlimentação2" H 3480 6596 50  0000 L CNN
F 1 "Screw_Terminal_01x02" H 3480 6551 50  0001 L CNN
F 2 "TerminalBlock:TerminalBlock_bornier-2_P5.08mm" H 3400 6650 50  0001 C CNN
F 3 "~" H 3400 6650 50  0001 C CNN
	1    3400 6650
	1    0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x02 FontedeAlimentação3
U 1 1 61B3E435
P 3400 7100
F 0 "FontedeAlimentação3" H 3480 7046 50  0000 L CNN
F 1 "Screw_Terminal_01x02" H 3480 7001 50  0001 L CNN
F 2 "TerminalBlock:TerminalBlock_bornier-2_P5.08mm" H 3400 7100 50  0001 C CNN
F 3 "~" H 3400 7100 50  0001 C CNN
	1    3400 7100
	1    0    0    -1  
$EndComp
Text GLabel 2650 6600 0    50   Input ~ 0
Vmot2
Text GLabel 2650 7050 0    50   Input ~ 0
Vmot3
$Comp
L Device:CP_Small 100uF3
U 1 1 61B45CBF
P 2850 7150
F 0 "100uF3" H 2938 7150 50  0000 L CNN
F 1 "CP_Small" H 2938 7105 50  0001 L CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.00mm" H 2850 7150 50  0001 C CNN
F 3 "~" H 2850 7150 50  0001 C CNN
	1    2850 7150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3200 6750 3200 6800
Wire Wire Line
	3200 7200 3200 7250
Wire Wire Line
	3200 6650 3200 6600
Wire Wire Line
	3200 7100 3200 7050
Wire Wire Line
	3200 7050 2850 7050
Wire Wire Line
	2250 7250 2250 6800
Wire Wire Line
	2250 6450 2550 6450
Wire Wire Line
	2550 6450 2550 6300
Connection ~ 2250 6800
Wire Wire Line
	2250 6800 2250 6450
Wire Wire Line
	2850 6300 2550 6300
Connection ~ 2850 6300
Connection ~ 2550 6300
Wire Wire Line
	2650 6600 2850 6600
Wire Wire Line
	2250 6800 2850 6800
$Comp
L Device:CP_Small 100uF2
U 1 1 61B67740
P 2850 6700
F 0 "100uF2" H 2938 6700 50  0000 L CNN
F 1 "CP_Small" H 2938 6655 50  0001 L CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.00mm" H 2850 6700 50  0001 C CNN
F 3 "~" H 2850 6700 50  0001 C CNN
	1    2850 6700
	1    0    0    -1  
$EndComp
Connection ~ 2850 6600
Wire Wire Line
	2850 6600 3200 6600
Connection ~ 2850 6800
Wire Wire Line
	2850 6800 3200 6800
Connection ~ 2850 7050
Connection ~ 2850 7250
Wire Wire Line
	2850 7250 3200 7250
Wire Wire Line
	2250 7250 2850 7250
Wire Wire Line
	2650 7050 2850 7050
Text Notes 650  900  0    118  ~ 24
ENTRADA - \nCalibração
Wire Notes Line
	2400 550  650  550 
Wire Notes Line
	650  550  650  1600
Wire Notes Line
	650  1600 2400 1600
Wire Notes Line
	2400 1600 2400 550 
$Comp
L Connector:Screw_Terminal_01x02 Calibrador1
U 1 1 61BA3237
P 1600 1150
F 0 "Calibrador1" H 1680 1096 50  0000 L CNN
F 1 "Screw_Terminal_01x02" H 1680 1051 50  0001 L CNN
F 2 "TerminalBlock:TerminalBlock_bornier-2_P5.08mm" H 1600 1150 50  0001 C CNN
F 3 "~" H 1600 1150 50  0001 C CNN
	1    1600 1150
	1    0    0    -1  
$EndComp
Text GLabel 1050 1150 0    50   Input ~ 0
CAL
Text GLabel 1050 1250 0    50   Input ~ 0
Vdd
Wire Wire Line
	1050 1150 1400 1150
Wire Wire Line
	1050 1250 1400 1250
Text GLabel 4000 4250 2    50   Input ~ 0
CAL
$EndSCHEMATC
