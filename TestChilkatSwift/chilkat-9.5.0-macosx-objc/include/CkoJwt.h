// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Jwt
// Wrapped Chilkat C++ class name =  CkJwt

@class CkoPrivateKey;
@class CkoPublicKey;


@interface CkoJwt : NSObject {

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

@property (nonatomic) BOOL AutoCompact;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: CreateJwt
- (NSString *)CreateJwt: (NSString *)header 
	payload: (NSString *)payload 
	password: (NSString *)password;
// method: CreateJwtPk
- (NSString *)CreateJwtPk: (NSString *)header 
	payload: (NSString *)payload 
	key: (CkoPrivateKey *)key;
// method: GenNumericDate
- (NSNumber *)GenNumericDate: (NSNumber *)numSecOffset;
// method: GetHeader
- (NSString *)GetHeader: (NSString *)token;
// method: GetPayload
- (NSString *)GetPayload: (NSString *)token;
// method: IsTimeValid
- (BOOL)IsTimeValid: (NSString *)jwt 
	leeway: (NSNumber *)leeway;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: VerifyJwt
- (BOOL)VerifyJwt: (NSString *)token 
	password: (NSString *)password;
// method: VerifyJwtPk
- (BOOL)VerifyJwtPk: (NSString *)token 
	key: (CkoPublicKey *)key;

@end
