#ifndef PISAPLUGIN_H
#define PISAPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class PISAPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "PISA";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
