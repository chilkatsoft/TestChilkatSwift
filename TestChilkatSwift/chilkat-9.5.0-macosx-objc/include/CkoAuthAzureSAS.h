// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  AuthAzureSAS
// Wrapped Chilkat C++ class name =  CkAuthAzureSAS



@interface CkoAuthAzureSAS : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

@property (nonatomic, copy) NSString *AccessKey;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSString *StringToSign;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: Clear
- (void)Clear;
// method: GenerateToken
- (NSString *)GenerateToken;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetNonTokenParam
- (BOOL)SetNonTokenParam: (NSString *)name 
	value: (NSString *)value;
// method: SetTokenParam
- (BOOL)SetTokenParam: (NSString *)name 
	authParamName: (NSString *)authParamName 
	value: (NSString *)value;

@end
