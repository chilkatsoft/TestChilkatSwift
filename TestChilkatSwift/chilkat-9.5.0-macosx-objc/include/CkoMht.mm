// Chilkat Objective-C source.
// This is a generated source file for Chilkat version 9.5.0.76

// Generic/internal class name =  Mht
// Wrapped Chilkat C++ class name =  CkMht

#ifdef CK_IOS
#import <UIKit/UIKit.h>
#else
#import <AppKit/AppKit.h>
#endif
#import "CkoMht.h"
#import "../ChilkatLib/Package/include/CkMht.h"
#import "../ChilkatLib/Package/include/CkString.h"
#import "../ChilkatLib/Package/include/CkTask.h"
#import "CkoTask.h"


#import "CkoBaseProgress.h"
#import "../ChilkatLib/Package/include/CkBaseProgress.h"
#import "MmBaseProgress.h"
@implementation CkoMht

-(id)init {
	self = [super init];
	if (self) {
		m_obj = new CkMht();
		m_eventCallback = new MmBaseProgress();
	}
	return self;
}

-(void)dealloc {
	delete (CkMht*)m_obj;
	delete (MmBaseProgress*)m_eventCallback;
	[super dealloc];
}

-(void)dispose {
	((CkMht*)m_obj)->dispose();
}

-(void *)CppImplObj {
	return m_obj;
}

- (void)setCppImplObj: (void *)pObj
{
	if (pObj != m_obj) {
		if (m_obj) delete (CkMht*)m_obj;
		m_obj = pObj;
	}

}

- (void)clearCppImplObj
{
	m_obj = 0;
}

- (NSString *)stringWithUtf8: (const char *)s
{
	NSString *ns = [NSString stringWithUTF8String:s];
	if (ns != nil) return ns;
	const char *s2 = ((CkMht *)m_obj)->objcUtf8(s);
	ns = [NSString stringWithUTF8String:s2];
	((CkMht *)m_obj)->objcUtf8_free();
	return ns;
}

// property setter: EventCallbackObject
- (void)setEventCallbackObject: (CkoBaseProgress *)eventObj
{
	// Event callbacks are routed to our internal C++ object (m_eventCallback)
	// and then relayed to the Objective-C application class.
	((MmBaseProgress *)m_eventCallback)->setObjcCallback((void *)eventObj);
	if (eventObj != nil)
	{
		((CkMht *)m_obj)->put_EventCallbackObject((CkBaseProgress *)m_eventCallback);
	}
	else
	{
		((CkMht *)m_obj)->put_EventCallbackObject(0);
	}
}

// property getter: AbortCurrent
- (BOOL)AbortCurrent
{
	bool b = ((CkMht *)m_obj)->get_AbortCurrent();
	return b ? YES : NO;

}
// property setter: AbortCurrent
- (void)setAbortCurrent: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_AbortCurrent((boolVal == YES) ? true : false);

}
// property getter: BaseUrl
- (NSString *)BaseUrl
{
	CkString outStr;
	((CkMht *)m_obj)->get_BaseUrl(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: BaseUrl
- (void)setBaseUrl: (NSString *)input
{
	((CkMht *)m_obj)->put_BaseUrl([input UTF8String]);

}
// property getter: ConnectTimeout
- (NSNumber *)ConnectTimeout
{
	int v = ((CkMht *)m_obj)->get_ConnectTimeout();
	return [NSNumber numberWithInt: v];

}
// property setter: ConnectTimeout
- (void)setConnectTimeout: (NSNumber *)intVal
{
	((CkMht *)m_obj)->put_ConnectTimeout([intVal intValue]);

}
// property getter: DebugHtmlAfter
- (NSString *)DebugHtmlAfter
{
	CkString outStr;
	((CkMht *)m_obj)->get_DebugHtmlAfter(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: DebugHtmlAfter
- (void)setDebugHtmlAfter: (NSString *)input
{
	((CkMht *)m_obj)->put_DebugHtmlAfter([input UTF8String]);

}
// property getter: DebugHtmlBefore
- (NSString *)DebugHtmlBefore
{
	CkString outStr;
	((CkMht *)m_obj)->get_DebugHtmlBefore(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: DebugHtmlBefore
- (void)setDebugHtmlBefore: (NSString *)input
{
	((CkMht *)m_obj)->put_DebugHtmlBefore([input UTF8String]);

}
// property getter: DebugLogFilePath
- (NSString *)DebugLogFilePath
{
	CkString outStr;
	((CkMht *)m_obj)->get_DebugLogFilePath(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: DebugLogFilePath
- (void)setDebugLogFilePath: (NSString *)input
{
	((CkMht *)m_obj)->put_DebugLogFilePath([input UTF8String]);

}
// property getter: DebugTagCleaning
- (BOOL)DebugTagCleaning
{
	bool b = ((CkMht *)m_obj)->get_DebugTagCleaning();
	return b ? YES : NO;

}
// property setter: DebugTagCleaning
- (void)setDebugTagCleaning: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_DebugTagCleaning((boolVal == YES) ? true : false);

}
// property getter: EmbedImages
- (BOOL)EmbedImages
{
	bool b = ((CkMht *)m_obj)->get_EmbedImages();
	return b ? YES : NO;

}
// property setter: EmbedImages
- (void)setEmbedImages: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_EmbedImages((boolVal == YES) ? true : false);

}
// property getter: EmbedLocalOnly
- (BOOL)EmbedLocalOnly
{
	bool b = ((CkMht *)m_obj)->get_EmbedLocalOnly();
	return b ? YES : NO;

}
// property setter: EmbedLocalOnly
- (void)setEmbedLocalOnly: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_EmbedLocalOnly((boolVal == YES) ? true : false);

}
// property getter: FetchFromCache
- (BOOL)FetchFromCache
{
	bool b = ((CkMht *)m_obj)->get_FetchFromCache();
	return b ? YES : NO;

}
// property setter: FetchFromCache
- (void)setFetchFromCache: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_FetchFromCache((boolVal == YES) ? true : false);

}
// property getter: HeartbeatMs
- (NSNumber *)HeartbeatMs
{
	int v = ((CkMht *)m_obj)->get_HeartbeatMs();
	return [NSNumber numberWithInt: v];

}
// property setter: HeartbeatMs
- (void)setHeartbeatMs: (NSNumber *)intVal
{
	((CkMht *)m_obj)->put_HeartbeatMs([intVal intValue]);

}
// property getter: IgnoreMustRevalidate
- (BOOL)IgnoreMustRevalidate
{
	bool b = ((CkMht *)m_obj)->get_IgnoreMustRevalidate();
	return b ? YES : NO;

}
// property setter: IgnoreMustRevalidate
- (void)setIgnoreMustRevalidate: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_IgnoreMustRevalidate((boolVal == YES) ? true : false);

}
// property getter: IgnoreNoCache
- (BOOL)IgnoreNoCache
{
	bool b = ((CkMht *)m_obj)->get_IgnoreNoCache();
	return b ? YES : NO;

}
// property setter: IgnoreNoCache
- (void)setIgnoreNoCache: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_IgnoreNoCache((boolVal == YES) ? true : false);

}
// property getter: LastErrorHtml
- (NSString *)LastErrorHtml
{
	CkString outStr;
	((CkMht *)m_obj)->LastErrorHtml(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property getter: LastErrorText
- (NSString *)LastErrorText
{
	CkString outStr;
	((CkMht *)m_obj)->LastErrorText(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property getter: LastErrorXml
- (NSString *)LastErrorXml
{
	CkString outStr;
	((CkMht *)m_obj)->LastErrorXml(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property getter: LastMethodSuccess
- (BOOL)LastMethodSuccess
{
	bool b = ((CkMht *)m_obj)->get_LastMethodSuccess();
	return b ? YES : NO;

}
// property setter: LastMethodSuccess
- (void)setLastMethodSuccess: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_LastMethodSuccess((boolVal == YES) ? true : false);

}
// property getter: NoScripts
- (BOOL)NoScripts
{
	bool b = ((CkMht *)m_obj)->get_NoScripts();
	return b ? YES : NO;

}
// property setter: NoScripts
- (void)setNoScripts: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_NoScripts((boolVal == YES) ? true : false);

}
// property getter: NtlmAuth
- (BOOL)NtlmAuth
{
	bool b = ((CkMht *)m_obj)->get_NtlmAuth();
	return b ? YES : NO;

}
// property setter: NtlmAuth
- (void)setNtlmAuth: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_NtlmAuth((boolVal == YES) ? true : false);

}
// property getter: NumCacheLevels
- (NSNumber *)NumCacheLevels
{
	int v = ((CkMht *)m_obj)->get_NumCacheLevels();
	return [NSNumber numberWithInt: v];

}
// property setter: NumCacheLevels
- (void)setNumCacheLevels: (NSNumber *)intVal
{
	((CkMht *)m_obj)->put_NumCacheLevels([intVal intValue]);

}
// property getter: NumCacheRoots
- (NSNumber *)NumCacheRoots
{
	int v = ((CkMht *)m_obj)->get_NumCacheRoots();
	return [NSNumber numberWithInt: v];

}
// property getter: PreferIpv6
- (BOOL)PreferIpv6
{
	bool b = ((CkMht *)m_obj)->get_PreferIpv6();
	return b ? YES : NO;

}
// property setter: PreferIpv6
- (void)setPreferIpv6: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_PreferIpv6((boolVal == YES) ? true : false);

}
// property getter: PreferMHTScripts
- (BOOL)PreferMHTScripts
{
	bool b = ((CkMht *)m_obj)->get_PreferMHTScripts();
	return b ? YES : NO;

}
// property setter: PreferMHTScripts
- (void)setPreferMHTScripts: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_PreferMHTScripts((boolVal == YES) ? true : false);

}
// property getter: Proxy
- (NSString *)Proxy
{
	CkString outStr;
	((CkMht *)m_obj)->get_Proxy(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: Proxy
- (void)setProxy: (NSString *)input
{
	((CkMht *)m_obj)->put_Proxy([input UTF8String]);

}
// property getter: ProxyLogin
- (NSString *)ProxyLogin
{
	CkString outStr;
	((CkMht *)m_obj)->get_ProxyLogin(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: ProxyLogin
- (void)setProxyLogin: (NSString *)input
{
	((CkMht *)m_obj)->put_ProxyLogin([input UTF8String]);

}
// property getter: ProxyPassword
- (NSString *)ProxyPassword
{
	CkString outStr;
	((CkMht *)m_obj)->get_ProxyPassword(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: ProxyPassword
- (void)setProxyPassword: (NSString *)input
{
	((CkMht *)m_obj)->put_ProxyPassword([input UTF8String]);

}
// property getter: ReadTimeout
- (NSNumber *)ReadTimeout
{
	int v = ((CkMht *)m_obj)->get_ReadTimeout();
	return [NSNumber numberWithInt: v];

}
// property setter: ReadTimeout
- (void)setReadTimeout: (NSNumber *)intVal
{
	((CkMht *)m_obj)->put_ReadTimeout([intVal intValue]);

}
// property getter: RequireSslCertVerify
- (BOOL)RequireSslCertVerify
{
	bool b = ((CkMht *)m_obj)->get_RequireSslCertVerify();
	return b ? YES : NO;

}
// property setter: RequireSslCertVerify
- (void)setRequireSslCertVerify: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_RequireSslCertVerify((boolVal == YES) ? true : false);

}
// property getter: SocksHostname
- (NSString *)SocksHostname
{
	CkString outStr;
	((CkMht *)m_obj)->get_SocksHostname(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: SocksHostname
- (void)setSocksHostname: (NSString *)input
{
	((CkMht *)m_obj)->put_SocksHostname([input UTF8String]);

}
// property getter: SocksPassword
- (NSString *)SocksPassword
{
	CkString outStr;
	((CkMht *)m_obj)->get_SocksPassword(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: SocksPassword
- (void)setSocksPassword: (NSString *)input
{
	((CkMht *)m_obj)->put_SocksPassword([input UTF8String]);

}
// property getter: SocksPort
- (NSNumber *)SocksPort
{
	int v = ((CkMht *)m_obj)->get_SocksPort();
	return [NSNumber numberWithInt: v];

}
// property setter: SocksPort
- (void)setSocksPort: (NSNumber *)intVal
{
	((CkMht *)m_obj)->put_SocksPort([intVal intValue]);

}
// property getter: SocksUsername
- (NSString *)SocksUsername
{
	CkString outStr;
	((CkMht *)m_obj)->get_SocksUsername(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: SocksUsername
- (void)setSocksUsername: (NSString *)input
{
	((CkMht *)m_obj)->put_SocksUsername([input UTF8String]);

}
// property getter: SocksVersion
- (NSNumber *)SocksVersion
{
	int v = ((CkMht *)m_obj)->get_SocksVersion();
	return [NSNumber numberWithInt: v];

}
// property setter: SocksVersion
- (void)setSocksVersion: (NSNumber *)intVal
{
	((CkMht *)m_obj)->put_SocksVersion([intVal intValue]);

}
// property getter: UnpackDirect
- (BOOL)UnpackDirect
{
	bool b = ((CkMht *)m_obj)->get_UnpackDirect();
	return b ? YES : NO;

}
// property setter: UnpackDirect
- (void)setUnpackDirect: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_UnpackDirect((boolVal == YES) ? true : false);

}
// property getter: UnpackUseRelPaths
- (BOOL)UnpackUseRelPaths
{
	bool b = ((CkMht *)m_obj)->get_UnpackUseRelPaths();
	return b ? YES : NO;

}
// property setter: UnpackUseRelPaths
- (void)setUnpackUseRelPaths: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_UnpackUseRelPaths((boolVal == YES) ? true : false);

}
// property getter: UpdateCache
- (BOOL)UpdateCache
{
	bool b = ((CkMht *)m_obj)->get_UpdateCache();
	return b ? YES : NO;

}
// property setter: UpdateCache
- (void)setUpdateCache: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_UpdateCache((boolVal == YES) ? true : false);

}
// property getter: UseCids
- (BOOL)UseCids
{
	bool b = ((CkMht *)m_obj)->get_UseCids();
	return b ? YES : NO;

}
// property setter: UseCids
- (void)setUseCids: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_UseCids((boolVal == YES) ? true : false);

}
// property getter: UseFilename
- (BOOL)UseFilename
{
	bool b = ((CkMht *)m_obj)->get_UseFilename();
	return b ? YES : NO;

}
// property setter: UseFilename
- (void)setUseFilename: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_UseFilename((boolVal == YES) ? true : false);

}
// property getter: UseIEProxy
- (BOOL)UseIEProxy
{
	bool b = ((CkMht *)m_obj)->get_UseIEProxy();
	return b ? YES : NO;

}
// property setter: UseIEProxy
- (void)setUseIEProxy: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_UseIEProxy((boolVal == YES) ? true : false);

}
// property getter: UseInline
- (BOOL)UseInline
{
	bool b = ((CkMht *)m_obj)->get_UseInline();
	return b ? YES : NO;

}
// property setter: UseInline
- (void)setUseInline: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_UseInline((boolVal == YES) ? true : false);

}
// property getter: VerboseLogging
- (BOOL)VerboseLogging
{
	bool b = ((CkMht *)m_obj)->get_VerboseLogging();
	return b ? YES : NO;

}
// property setter: VerboseLogging
- (void)setVerboseLogging: (BOOL)boolVal
{
	((CkMht *)m_obj)->put_VerboseLogging((boolVal == YES) ? true : false);

}
// property getter: Version
- (NSString *)Version
{
	CkString outStr;
	((CkMht *)m_obj)->get_Version(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property getter: WebSiteLogin
- (NSString *)WebSiteLogin
{
	CkString outStr;
	((CkMht *)m_obj)->get_WebSiteLogin(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: WebSiteLogin
- (void)setWebSiteLogin: (NSString *)input
{
	((CkMht *)m_obj)->put_WebSiteLogin([input UTF8String]);

}
// property getter: WebSiteLoginDomain
- (NSString *)WebSiteLoginDomain
{
	CkString outStr;
	((CkMht *)m_obj)->get_WebSiteLoginDomain(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: WebSiteLoginDomain
- (void)setWebSiteLoginDomain: (NSString *)input
{
	((CkMht *)m_obj)->put_WebSiteLoginDomain([input UTF8String]);

}
// property getter: WebSitePassword
- (NSString *)WebSitePassword
{
	CkString outStr;
	((CkMht *)m_obj)->get_WebSitePassword(outStr);
	return [self stringWithUtf8:outStr.getUtf8()];

}
// property setter: WebSitePassword
- (void)setWebSitePassword: (NSString *)input
{
	((CkMht *)m_obj)->put_WebSitePassword([input UTF8String]);

}
// method: AddCacheRoot
- (void)AddCacheRoot: (NSString *)dir
{
	const char *arg1 = [dir UTF8String];
	((CkMht *)m_obj)->AddCacheRoot(arg1);
	return;

}
// method: AddCustomHeader
- (void)AddCustomHeader: (NSString *)name 
	value: (NSString *)value
{
	const char *arg1 = [name UTF8String];
	const char *arg2 = [value UTF8String];
	((CkMht *)m_obj)->AddCustomHeader(arg1,arg2);
	return;

}
// method: AddExternalStyleSheet
- (void)AddExternalStyleSheet: (NSString *)url
{
	const char *arg1 = [url UTF8String];
	((CkMht *)m_obj)->AddExternalStyleSheet(arg1);
	return;

}
// method: ClearCustomHeaders
- (void)ClearCustomHeaders
{
	((CkMht *)m_obj)->ClearCustomHeaders();
	return;

}
// method: ExcludeImagesMatching
- (void)ExcludeImagesMatching: (NSString *)pattern
{
	const char *arg1 = [pattern UTF8String];
	((CkMht *)m_obj)->ExcludeImagesMatching(arg1);
	return;

}
// method: GetAndSaveEML
- (BOOL)GetAndSaveEML: (NSString *)url 
	emlPath: (NSString *)emlPath
{
	const char *arg1 = [url UTF8String];
	const char *arg2 = [emlPath UTF8String];
	bool b = ((CkMht *)m_obj)->GetAndSaveEML(arg1,arg2);
	return b ? YES : NO;

}
// method: GetAndSaveEMLAsync
- (CkoTask *)GetAndSaveEMLAsync: (NSString *)url 
	emlPath: (NSString *)emlPath
{
	const char *arg1 = [url UTF8String];
	const char *arg2 = [emlPath UTF8String];
	CkTask *x = ((CkMht *)m_obj)->GetAndSaveEMLAsync(arg1,arg2);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: GetAndSaveMHT
- (BOOL)GetAndSaveMHT: (NSString *)url 
	mhtPath: (NSString *)mhtPath
{
	const char *arg1 = [url UTF8String];
	const char *arg2 = [mhtPath UTF8String];
	bool b = ((CkMht *)m_obj)->GetAndSaveMHT(arg1,arg2);
	return b ? YES : NO;

}
// method: GetAndSaveMHTAsync
- (CkoTask *)GetAndSaveMHTAsync: (NSString *)url 
	mhtPath: (NSString *)mhtPath
{
	const char *arg1 = [url UTF8String];
	const char *arg2 = [mhtPath UTF8String];
	CkTask *x = ((CkMht *)m_obj)->GetAndSaveMHTAsync(arg1,arg2);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: GetAndZipEML
- (BOOL)GetAndZipEML: (NSString *)url 
	zipEntryFilename: (NSString *)zipEntryFilename 
	zipPath: (NSString *)zipPath
{
	const char *arg1 = [url UTF8String];
	const char *arg2 = [zipEntryFilename UTF8String];
	const char *arg3 = [zipPath UTF8String];
	bool b = ((CkMht *)m_obj)->GetAndZipEML(arg1,arg2,arg3);
	return b ? YES : NO;

}
// method: GetAndZipEMLAsync
- (CkoTask *)GetAndZipEMLAsync: (NSString *)url 
	zipEntryFilename: (NSString *)zipEntryFilename 
	zipPath: (NSString *)zipPath
{
	const char *arg1 = [url UTF8String];
	const char *arg2 = [zipEntryFilename UTF8String];
	const char *arg3 = [zipPath UTF8String];
	CkTask *x = ((CkMht *)m_obj)->GetAndZipEMLAsync(arg1,arg2,arg3);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: GetAndZipMHT
- (BOOL)GetAndZipMHT: (NSString *)url 
	zipEntryFilename: (NSString *)zipEntryFilename 
	zipPath: (NSString *)zipPath
{
	const char *arg1 = [url UTF8String];
	const char *arg2 = [zipEntryFilename UTF8String];
	const char *arg3 = [zipPath UTF8String];
	bool b = ((CkMht *)m_obj)->GetAndZipMHT(arg1,arg2,arg3);
	return b ? YES : NO;

}
// method: GetAndZipMHTAsync
- (CkoTask *)GetAndZipMHTAsync: (NSString *)url 
	zipEntryFilename: (NSString *)zipEntryFilename 
	zipPath: (NSString *)zipPath
{
	const char *arg1 = [url UTF8String];
	const char *arg2 = [zipEntryFilename UTF8String];
	const char *arg3 = [zipPath UTF8String];
	CkTask *x = ((CkMht *)m_obj)->GetAndZipMHTAsync(arg1,arg2,arg3);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: GetCacheRoot
- (NSString *)GetCacheRoot: (NSNumber *)index
{
	int arg1 = [index intValue];
	CkString outStr;
	bool success = ((CkMht *)m_obj)->GetCacheRoot(arg1,outStr);
	if (!success) return nil;
	return [self stringWithUtf8:outStr.getUtf8()];

}
// method: GetEML
- (NSString *)GetEML: (NSString *)url
{
	const char *arg1 = [url UTF8String];
	CkString outStr;
	bool success = ((CkMht *)m_obj)->GetEML(arg1,outStr);
	if (!success) return nil;
	return [self stringWithUtf8:outStr.getUtf8()];

}
// method: GetEMLAsync
- (CkoTask *)GetEMLAsync: (NSString *)url
{
	const char *arg1 = [url UTF8String];
	CkTask *x = ((CkMht *)m_obj)->GetEMLAsync(arg1);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: GetMHT
- (NSString *)GetMHT: (NSString *)url
{
	const char *arg1 = [url UTF8String];
	CkString outStr;
	bool success = ((CkMht *)m_obj)->GetMHT(arg1,outStr);
	if (!success) return nil;
	return [self stringWithUtf8:outStr.getUtf8()];

}
// method: GetMHTAsync
- (CkoTask *)GetMHTAsync: (NSString *)url
{
	const char *arg1 = [url UTF8String];
	CkTask *x = ((CkMht *)m_obj)->GetMHTAsync(arg1);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: HtmlToEML
- (NSString *)HtmlToEML: (NSString *)htmlText
{
	const char *arg1 = [htmlText UTF8String];
	CkString outStr;
	bool success = ((CkMht *)m_obj)->HtmlToEML(arg1,outStr);
	if (!success) return nil;
	return [self stringWithUtf8:outStr.getUtf8()];

}
// method: HtmlToEMLAsync
- (CkoTask *)HtmlToEMLAsync: (NSString *)htmlText
{
	const char *arg1 = [htmlText UTF8String];
	CkTask *x = ((CkMht *)m_obj)->HtmlToEMLAsync(arg1);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: HtmlToEMLFile
- (BOOL)HtmlToEMLFile: (NSString *)html 
	emlPath: (NSString *)emlPath
{
	const char *arg1 = [html UTF8String];
	const char *arg2 = [emlPath UTF8String];
	bool b = ((CkMht *)m_obj)->HtmlToEMLFile(arg1,arg2);
	return b ? YES : NO;

}
// method: HtmlToEMLFileAsync
- (CkoTask *)HtmlToEMLFileAsync: (NSString *)html 
	emlPath: (NSString *)emlPath
{
	const char *arg1 = [html UTF8String];
	const char *arg2 = [emlPath UTF8String];
	CkTask *x = ((CkMht *)m_obj)->HtmlToEMLFileAsync(arg1,arg2);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: HtmlToMHT
- (NSString *)HtmlToMHT: (NSString *)htmlText
{
	const char *arg1 = [htmlText UTF8String];
	CkString outStr;
	bool success = ((CkMht *)m_obj)->HtmlToMHT(arg1,outStr);
	if (!success) return nil;
	return [self stringWithUtf8:outStr.getUtf8()];

}
// method: HtmlToMHTAsync
- (CkoTask *)HtmlToMHTAsync: (NSString *)htmlText
{
	const char *arg1 = [htmlText UTF8String];
	CkTask *x = ((CkMht *)m_obj)->HtmlToMHTAsync(arg1);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: HtmlToMHTFile
- (BOOL)HtmlToMHTFile: (NSString *)html 
	mhtPath: (NSString *)mhtPath
{
	const char *arg1 = [html UTF8String];
	const char *arg2 = [mhtPath UTF8String];
	bool b = ((CkMht *)m_obj)->HtmlToMHTFile(arg1,arg2);
	return b ? YES : NO;

}
// method: HtmlToMHTFileAsync
- (CkoTask *)HtmlToMHTFileAsync: (NSString *)html 
	mhtPath: (NSString *)mhtPath
{
	const char *arg1 = [html UTF8String];
	const char *arg2 = [mhtPath UTF8String];
	CkTask *x = ((CkMht *)m_obj)->HtmlToMHTFileAsync(arg1,arg2);
	if (!x) return nil;
	CkoTask *z = [[[CkoTask alloc] init] autorelease];
	[z setCppImplObj: x];
	return z;

}
// method: IsUnlocked
- (BOOL)IsUnlocked
{
	bool b = ((CkMht *)m_obj)->IsUnlocked();
	return b ? YES : NO;

}
// method: RemoveCustomHeader
- (void)RemoveCustomHeader: (NSString *)name
{
	const char *arg1 = [name UTF8String];
	((CkMht *)m_obj)->RemoveCustomHeader(arg1);
	return;

}
// method: RestoreDefaults
- (void)RestoreDefaults
{
	((CkMht *)m_obj)->RestoreDefaults();
	return;

}
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path
{
	const char *arg1 = [path UTF8String];
	bool b = ((CkMht *)m_obj)->SaveLastError(arg1);
	return b ? YES : NO;

}
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode
{
	const char *arg1 = [unlockCode UTF8String];
	bool b = ((CkMht *)m_obj)->UnlockComponent(arg1);
	return b ? YES : NO;

}
// method: UnpackMHT
- (BOOL)UnpackMHT: (NSString *)mhtPath 
	unpackDir: (NSString *)unpackDir 
	htmlFilename: (NSString *)htmlFilename 
	partsSubDir: (NSString *)partsSubDir
{
	const char *arg1 = [mhtPath UTF8String];
	const char *arg2 = [unpackDir UTF8String];
	const char *arg3 = [htmlFilename UTF8String];
	const char *arg4 = [partsSubDir UTF8String];
	bool b = ((CkMht *)m_obj)->UnpackMHT(arg1,arg2,arg3,arg4);
	return b ? YES : NO;

}

@end
