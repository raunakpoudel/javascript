[MeterMinute0]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(0 = 0 ? (Rad(270 + 6*[MeasureMinute] - 12)) : (0 = 4 ? (Rad(270 + 6*[MeasureMinute] + 12)) : (0 = 1 ? (Rad(270 + 6*[MeasureMinute] - 6)) : (0 = 3 ? (Rad(270 + 6*[MeasureMinute] + 6)) : (Rad(270 + 6*[MeasureMinute]))))))
RotationAngle=(Rad(360))
LineWidth=(((0 = 2) && ([MeasureMinute] % 5 = 0)) || ((0 = 3) && (([MeasureMinute] + 1) % 5 = 0)) || ((0 = 1) && (([MeasureMinute] - 1) % 5 = 0)) || ((0 = 0) && (([MeasureMinute] - 2) % 5 = 0)) || ((0 = 4) && (([MeasureMinute] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=((0 = 0) || (0 = 4) ? (85*0.75) : ((0 = 1) || (0 = 3) ? (65*0.75) : (20*0.75)))
LineLength=(0 = 2 ? (110*0.75) : (105*0.75))
AntiAlias=1
DynamicVariables=1
LineColor=#cMinute#
Group=Minutes
UpdateDivider=-1
[MeterMinute1]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(1 = 0 ? (Rad(270 + 6*[MeasureMinute] - 12)) : (1 = 4 ? (Rad(270 + 6*[MeasureMinute] + 12)) : (1 = 1 ? (Rad(270 + 6*[MeasureMinute] - 6)) : (1 = 3 ? (Rad(270 + 6*[MeasureMinute] + 6)) : (Rad(270 + 6*[MeasureMinute]))))))
RotationAngle=(Rad(360))
LineWidth=(((1 = 2) && ([MeasureMinute] % 5 = 0)) || ((1 = 3) && (([MeasureMinute] + 1) % 5 = 0)) || ((1 = 1) && (([MeasureMinute] - 1) % 5 = 0)) || ((1 = 0) && (([MeasureMinute] - 2) % 5 = 0)) || ((1 = 4) && (([MeasureMinute] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=((1 = 0) || (1 = 4) ? (85*0.75) : ((1 = 1) || (1 = 3) ? (65*0.75) : (20*0.75)))
LineLength=(1 = 2 ? (110*0.75) : (105*0.75))
AntiAlias=1
DynamicVariables=1
LineColor=#cMinute#
Group=Minutes
UpdateDivider=-1
[MeterMinute2]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(2 = 0 ? (Rad(270 + 6*[MeasureMinute] - 12)) : (2 = 4 ? (Rad(270 + 6*[MeasureMinute] + 12)) : (2 = 1 ? (Rad(270 + 6*[MeasureMinute] - 6)) : (2 = 3 ? (Rad(270 + 6*[MeasureMinute] + 6)) : (Rad(270 + 6*[MeasureMinute]))))))
RotationAngle=(Rad(360))
LineWidth=(((2 = 2) && ([MeasureMinute] % 5 = 0)) || ((2 = 3) && (([MeasureMinute] + 1) % 5 = 0)) || ((2 = 1) && (([MeasureMinute] - 1) % 5 = 0)) || ((2 = 0) && (([MeasureMinute] - 2) % 5 = 0)) || ((2 = 4) && (([MeasureMinute] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=((2 = 0) || (2 = 4) ? (85*0.75) : ((2 = 1) || (2 = 3) ? (65*0.75) : (20*0.75)))
LineLength=(2 = 2 ? (110*0.75) : (105*0.75))
AntiAlias=1
DynamicVariables=1
LineColor=#cMinute#
Group=Minutes
UpdateDivider=-1
[MeterMinute3]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(3 = 0 ? (Rad(270 + 6*[MeasureMinute] - 12)) : (3 = 4 ? (Rad(270 + 6*[MeasureMinute] + 12)) : (3 = 1 ? (Rad(270 + 6*[MeasureMinute] - 6)) : (3 = 3 ? (Rad(270 + 6*[MeasureMinute] + 6)) : (Rad(270 + 6*[MeasureMinute]))))))
RotationAngle=(Rad(360))
LineWidth=(((3 = 2) && ([MeasureMinute] % 5 = 0)) || ((3 = 3) && (([MeasureMinute] + 1) % 5 = 0)) || ((3 = 1) && (([MeasureMinute] - 1) % 5 = 0)) || ((3 = 0) && (([MeasureMinute] - 2) % 5 = 0)) || ((3 = 4) && (([MeasureMinute] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=((3 = 0) || (3 = 4) ? (85*0.75) : ((3 = 1) || (3 = 3) ? (65*0.75) : (20*0.75)))
LineLength=(3 = 2 ? (110*0.75) : (105*0.75))
AntiAlias=1
DynamicVariables=1
LineColor=#cMinute#
Group=Minutes
UpdateDivider=-1
[MeterMinute4]
Meter=Roundline
X=(0.75*135)
Y=(0.75*135)
StartAngle=(4 = 0 ? (Rad(270 + 6*[MeasureMinute] - 12)) : (4 = 4 ? (Rad(270 + 6*[MeasureMinute] + 12)) : (4 = 1 ? (Rad(270 + 6*[MeasureMinute] - 6)) : (4 = 3 ? (Rad(270 + 6*[MeasureMinute] + 6)) : (Rad(270 + 6*[MeasureMinute]))))))
RotationAngle=(Rad(360))
LineWidth=(((4 = 2) && ([MeasureMinute] % 5 = 0)) || ((4 = 3) && (([MeasureMinute] + 1) % 5 = 0)) || ((4 = 1) && (([MeasureMinute] - 1) % 5 = 0)) || ((4 = 0) && (([MeasureMinute] - 2) % 5 = 0)) || ((4 = 4) && (([MeasureMinute] + 2) % 5 = 0)) ? (3*0.75) : (2*0.75))
LineStart=((4 = 0) || (4 = 4) ? (85*0.75) : ((4 = 1) || (4 = 3) ? (65*0.75) : (20*0.75)))
LineLength=(4 = 2 ? (110*0.75) : (105*0.75))
AntiAlias=1
DynamicVariables=1
LineColor=#cMinute#
Group=Minutes
UpdateDivider=-1