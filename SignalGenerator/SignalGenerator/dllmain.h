// dllmain.h: 模块类的声明。

class CSignalGeneratorModule : public ATL::CAtlDllModuleT< CSignalGeneratorModule >
{
public :
	DECLARE_LIBID(LIBID_SignalGeneratorLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SIGNALGENERATOR, "{A6277EB1-C15B-40DF-A8AE-68A23CFA77E3}")
};

extern class CSignalGeneratorModule _AtlModule;
