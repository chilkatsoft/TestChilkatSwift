// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  AuthUtil
// Wrapped Chilkat C++ class name =  CkAuthUtil



@interface CkoAuthUtil : NSObject {

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

@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: WalmartSignature
- (NSString *)WalmartSignature: (NSString *)requestUrl 
	consumerId: (NSString *)consumerId 
	privateKey: (NSString *)privateKey 
	requestMethod: (NSString *)requestMethod;

@end
