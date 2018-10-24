// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  AuthAws
// Wrapped Chilkat C++ class name =  CkAuthAws



@interface CkoAuthAws : NSObject {

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
@property (nonatomic, copy) NSString *CanonicalizedResourceV2;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSString *PrecomputedMd5;
@property (nonatomic, copy) NSString *PrecomputedSha256;
@property (nonatomic, copy) NSString *Region;
@property (nonatomic, copy) NSString *SecretKey;
@property (nonatomic, copy) NSString *ServiceName;
@property (nonatomic, copy) NSNumber *SignatureVersion;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;

@end
