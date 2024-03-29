#pragma once

typedef void* (*CreateInterfaceFn)(const char* pName, int* pReturnCode);
typedef void* (*InstantiateInterfaceFn)();

class AppSystem
{
public:
	virtual bool                            Connect(CreateInterfaceFn factory) = 0;                              
	virtual void                            Disconnect() = 0;                                                    
	virtual void*							QueryInterface(const char* pInterfaceName) = 0;                      
	virtual int						        Init() = 0;                                                         
	virtual void                            Shutdown() = 0;                                                      
	virtual const void*						GetDependencies() = 0;                                               
	virtual int					            GetTier() = 0;                                                       
	virtual void                            Reconnect(CreateInterfaceFn factory, const char* pInterfaceName) = 0;
	virtual void                            UnkFunc() = 0;                                                       
};