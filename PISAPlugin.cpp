#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "PISAPlugin.h"

void PISAPlugin::input(std::string file) {
   readParameterFile(file);
}

void PISAPlugin::run() {}

void PISAPlugin::output(std::string file) {
//aqmm  -a AS_metagenome -b AS_metatranscriptome -m meta_data.txt -n 12 -o testout2

       	std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "cd "+std::string(PluginManager::prefix())+"/; "+"PISA parse -rule "+myParameters["rule"]+" "+myParameters["fastq1"]+" "+myParameters["fastq2"]+" -1 "+myParameters["rawseq"];
 std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<PISAPlugin> PISAPluginProxy = PluginProxy<PISAPlugin>("PISA", PluginManager::getInstance());
