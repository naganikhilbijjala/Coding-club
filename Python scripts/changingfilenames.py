import os
os.chdir('/media/nikhil/New Volume/Web Series/Mirzapur')
for f in os.listdir():
	f_name,f_ext = os.path.splitext(f)
	f_name = f_name[9:-43]
	new_name = '{}{}'.format(f_name,f_ext)
	os.rename(f,new_name)