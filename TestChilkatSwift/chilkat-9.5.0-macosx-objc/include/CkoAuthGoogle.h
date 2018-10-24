// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  AuthGoogle
// Wrapped Chilkat C++ class name =  CkAuthGoogle

@class CkoPfx;
@class CkoSocket;
@class CkoTask;


@class CkoBaseProgress;

@interface CkoAuthGoogle : NSObject {

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
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSString *EmailAddress;
@property (nonatomic, copy) NSNumber *ExpireNumSeconds;
@property (nonatomic, copy) NSString *JsonKey;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *NumSecondsRemaining;
@property (nonatomic, copy) NSString *Scope;
@property (nonatomic, copy) NSString *SubEmailAddress;
@property (nonatomic, readonly) BOOL Valid;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: GetP12
- (CkoPfx *)GetP12;
// method: ObtainAccessToken
- (BOOL)ObtainAccessToken: (CkoSocket *)connection;
// method: ObtainAccessTokenAsync
- (CkoTask *)ObtainAccessTokenAsync: (CkoSocket *)connection;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetP12
- (BOOL)SetP12: (CkoPfx *)key;

@end
