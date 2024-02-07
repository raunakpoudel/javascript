[MeterSecond0]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(0 = 0 ? (Rad(270 + 6*[MeasureSecond] - 12)) : (0 = 4 ? (Rad(270 + 6*[MeasureSecond] + 12)) : (0 = 1 ? (Rad(270 + 6*[MeasureSecond] - 6)) : (0 = 3 ? (Rad(270 + 6*[MeasureSecond] + 6)) : (0 = 2 ? (Rad(270 + 6*[MeasureSecond])) : 105)))))
RotationAngle=(Rad(360))
LineWidth=(((0 = 2) && ([MeasureSecond] % 5 = 0)) || ((0 = 3) && (([MeasureSecond] + 1) % 5 = 0)) || ((0 = 1) && (([MeasureSecond] - 1) % 5 = 0)) || ((0 = 0) && (([MeasureSecond] - 2) % 5 = 0)) || ((0 = 4) && (([MeasureSecond] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=(105*0.75)
LineLength=((0 = 0) || (0 = 4) ? (110*0.75) : ((0 = 1) || (0 = 3) ? (118*0.75) : (130*0.75)))
AntiAlias=1
DynamicVariables=1
LineColor=#cSecond#
[MeterSecond1]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(1 = 0 ? (Rad(270 + 6*[MeasureSecond] - 12)) : (1 = 4 ? (Rad(270 + 6*[MeasureSecond] + 12)) : (1 = 1 ? (Rad(270 + 6*[MeasureSecond] - 6)) : (1 = 3 ? (Rad(270 + 6*[MeasureSecond] + 6)) : (1 = 2 ? (Rad(270 + 6*[MeasureSecond])) : 105)))))
RotationAngle=(Rad(360))
LineWidth=(((1 = 2) && ([MeasureSecond] % 5 = 0)) || ((1 = 3) && (([MeasureSecond] + 1) % 5 = 0)) || ((1 = 1) && (([MeasureSecond] - 1) % 5 = 0)) || ((1 = 0) && (([MeasureSecond] - 2) % 5 = 0)) || ((1 = 4) && (([MeasureSecond] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=(105*0.75)
LineLength=((1 = 0) || (1 = 4) ? (110*0.75) : ((1 = 1) || (1 = 3) ? (118*0.75) : (130*0.75)))
AntiAlias=1
DynamicVariables=1
LineColor=#cSecond#
[MeterSecond2]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(2 = 0 ? (Rad(270 + 6*[MeasureSecond] - 12)) : (2 = 4 ? (Rad(270 + 6*[MeasureSecond] + 12)) : (2 = 1 ? (Rad(270 + 6*[MeasureSecond] - 6)) : (2 = 3 ? (Rad(270 + 6*[MeasureSecond] + 6)) : (2 = 2 ? (Rad(270 + 6*[MeasureSecond])) : 105)))))
RotationAngle=(Rad(360))
LineWidth=(((2 = 2) && ([MeasureSecond] % 5 = 0)) || ((2 = 3) && (([MeasureSecond] + 1) % 5 = 0)) || ((2 = 1) && (([MeasureSecond] - 1) % 5 = 0)) || ((2 = 0) && (([MeasureSecond] - 2) % 5 = 0)) || ((2 = 4) && (([MeasureSecond] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=(105*0.75)
LineLength=((2 = 0) || (2 = 4) ? (110*0.75) : ((2 = 1) || (2 = 3) ? (118*0.75) : (130*0.75)))
AntiAlias=1
DynamicVariables=1
LineColor=#cSecond#
[MeterSecond3]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(3 = 0 ? (Rad(270 + 6*[MeasureSecond] - 12)) : (3 = 4 ? (Rad(270 + 6*[MeasureSecond] + 12)) : (3 = 1 ? (Rad(270 + 6*[MeasureSecond] - 6)) : (3 = 3 ? (Rad(270 + 6*[MeasureSecond] + 6)) : (3 = 2 ? (Rad(270 + 6*[MeasureSecond])) : 105)))))
RotationAngle=(Rad(360))
LineWidth=(((3 = 2) && ([MeasureSecond] % 5 = 0)) || ((3 = 3) && (([MeasureSecond] + 1) % 5 = 0)) || ((3 = 1) && (([MeasureSecond] - 1) % 5 = 0)) || ((3 = 0) && (([MeasureSecond] - 2) % 5 = 0)) || ((3 = 4) && (([MeasureSecond] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=(105*0.75)
LineLength=((3 = 0) || (3 = 4) ? (110*0.75) : ((3 = 1) || (3 = 3) ? (118*0.75) : (130*0.75)))
AntiAlias=1
DynamicVariables=1
LineColor=#cSecond#
[MeterSecond4]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(4 = 0 ? (Rad(270 + 6*[MeasureSecond] - 12)) : (4 = 4 ? (Rad(270 + 6*[MeasureSecond] + 12)) : (4 = 1 ? (Rad(270 + 6*[MeasureSecond] - 6)) : (4 = 3 ? (Rad(270 + 6*[MeasureSecond] + 6)) : (4 = 2 ? (Rad(270 + 6*[MeasureSecond])) : 105)))))
RotationAngle=(Rad(360))
LineWidth=(((4 = 2) && ([MeasureSecond] % 5 = 0)) || ((4 = 3) && (([MeasureSecond] + 1) % 5 = 0)) || ((4 = 1) && (([MeasureSecond] - 1) % 5 = 0)) || ((4 = 0) && (([MeasureSecond] - 2) % 5 = 0)) || ((4 = 4) && (([MeasureSecond] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=(105*0.75)
LineLength=((4 = 0) || (4 = 4) ? (110*0.75) : ((4 = 1) || (4 = 3) ? (118*0.75) : (130*0.75)))
AntiAlias=1
DynamicVariables=1
LineColor=#cSecond#