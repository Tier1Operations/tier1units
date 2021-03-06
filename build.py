#
ignorefiles = ['binMakeRules.txt','build.py','readme.md','config.py','__pycache__'];

import os;
import subprocess;
import glob;

defaultconfig = r"""
# See also binMakeRules.txt
toolsfolder = 'E:\\SteamLibrary\\steamapps\\common\\Arma 3 Tools\\';
outfolder = 'E:\\Stuff\\Arma3_Mod_Stuff\\Build PBOs\\addons\\';
#privkey = 'E:\\Stuff\Arma3_Mod_Stuff\\Key\\tier1ops.biprivatekey';
privkey = '';
""";
if not os.path.isfile("config.py"):
	print ("Writing default config !");
	conf = open("config.py","w");
	conf.write(defaultconfig);
	conf.close();

import config;
if config.privkey == '':
	print ("No private key. Not producing signatures.");

# ignore all . files implicitly
ignorefiles = ignorefiles + glob.glob(".*");

#specific tools
filebank = config.toolsfolder + 'FileBank\\Filebank.exe';
dssign = config.toolsfolder + 'DSSignFile\\dssignfile.exe';
binmake = config.toolsfolder + 'BinMake\\binmake.exe';

# We're now generating ALL the files, so delete any that may be extra.
oldfiles = glob.glob(config.outfolder+"*");
for file in oldfiles:
	os.unlink(file);

#    check_call(*popenargs, **kwargs)
#        Run command with arguments.  Wait for command to complete.  If
#        the exit code was zero then return, otherwise raise
#        CalledProcessError.  The CalledProcessError object will have the
#        return code in the returncode attribute.
#        The arguments are the same as for the call function.  Example:
#
#        check_call(["ls", "-l"])
pbos = glob.glob('*');
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
			config.outfolder,
			pbo
		]);
		if config.privkey != '' :
			subprocess.check_call([
				dssign,
				config.privkey,
				config.outfolder + pbo + '.pbo'
			]);

os.unlink('config.bin');

# Create timestamp
import time;
today = time.strftime("%Y-%m-%d-%H%M");
print(today);
stamp = open (config.outfolder + today, "w+").close();

