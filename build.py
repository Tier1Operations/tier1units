#
toolsfolder = 'D:\\SteamLibrary\\SteamApps\\common\\Arma 3 Tools\\';
outfolder = 'D:\\@tier1ops\\addons\\';
privkey = 'D:\\Nextcloud\\tier1ops.biprivatekey';


#specific tools
filebank = toolsfolder + 'FileBank\\Filebank.exe';
dssign = toolsfolder + 'DSSignFile\\dssignfile.exe';
binmake = toolsfolder + 'BinMake\\binmake.exe';

import glob;
pbos = glob.glob('t1_*');

import subprocess;
#    check_call(*popenargs, **kwargs)
#        Run command with arguments.  Wait for command to complete.  If
#        the exit code was zero then return, otherwise raise
#        CalledProcessError.  The CalledProcessError object will have the
#        return code in the returncode attribute.
#        The arguments are the same as for the call function.  Example:
#
#        check_call(["ls", "-l"])

for pbo in pbos:
	print(pbo);
	subprocess.check_call([	# Currently only for early syntax checks
		binmake,
		'--always-make',
		pbo + '\\config.cpp',
		'config.bin'
	]);
	subprocess.check_call([
		filebank,
		'-dst',
		outfolder,
		pbo
	]);
	subprocess.check_call([
		dssign,
		privkey,
		outfolder + pbo + '.pbo'
	]);

import os;
os.unlink('config.bin');

