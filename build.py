#
toolsfolder = 'E:\\SteamLibrary\\steamapps\\common\\Arma 3 Tools\\';
outfolder = 'E:\\Stuff\\Arma3_Mod_Stuff\\Build PBOs\\addons\\';
privkey = 'E:\\Stuff\Arma3_Mod_Stuff\\Key\\tier1ops.biprivatekey';
ignorefiles = ['.git','.gitignore','binMakeRules.txt','build.py','readme.md'];


#specific tools
filebank = toolsfolder + 'FileBank\\Filebank.exe';
dssign = toolsfolder + 'DSSignFile\\dssignfile.exe';
binmake = toolsfolder + 'BinMake\\binmake.exe';

import os;
import glob;
pbos = glob.glob('*');

# We're now generating ALL the files, so delete any that may be extra.
oldfiles = glob.glob(outfolder+"*");
for file in oldfiles:
	os.unlink(file);

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
	if pbo not in ignorefiles:
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

os.unlink('config.bin');

# Create timestamp
import time;
today = time.strftime("%Y-%m-%d-%H%M");
print(today);
stamp = open (outfolder + today, "w+").close();

