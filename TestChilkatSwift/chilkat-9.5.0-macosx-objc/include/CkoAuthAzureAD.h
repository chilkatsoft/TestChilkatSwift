// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  AuthAzureAD
// Wrapped Chilkat C++ class name =  CkAuthAzureAD

@class CkoSocket;
@class CkoTask;


@class CkoBaseProgress;

@interface CkoAuthAzureAD : NSObject {

	@private
		void *m_eventCallback;
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

// property setter: EventCallbackObject
- (void)setEventCallbackObject: (CkoBaseProgress *)eventObj;

@property (nonatomic, copy) NSString *AccessToken;
@property (nonatomic, copy) NSString *ClientId;
@property (nonatomic, copy) NSString *ClientSecret;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *NumSecondsRemaining;
@property (nonatomic, copy) NSString *Resource;
@property (nonatomic, copy) NSString *TenantId;
@property (nonatomic, readonly) BOOL Valid;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: ObtainAccessToken
- (BOOL)ObtainAccessToken: (CkoSocket *)connection;
// method: ObtainAccessTokenAsync
- (CkoTask *)ObtainAccessTokenAsync: (CkoSocket *)connection;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;

@end
