from datetime import datetime, timedelta

dt1 = datetime(2018, 1, 1) + timedelta(days=1, seconds=1000)	# dt1 = 2018/1/1 add '1 day and 1000 seconds'
dt2 = datetime.now()
duration = dt2 - dt1

print(dt1)
print(duration)
print('days',duration.days)	# print: str(days)\ {days of 'duration'}
print('seconds',duration.seconds)
print('total_seconds', duration.total_seconds())
