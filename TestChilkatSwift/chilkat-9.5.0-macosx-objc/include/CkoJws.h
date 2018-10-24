// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Jws
// Wrapped Chilkat C++ class name =  CkJws

@class CkoStringBuilder;
@class CkoBinData;
@class CkoJsonObject;
@class CkoPrivateKey;
@class CkoPublicKey;


@interface CkoJws : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *NumSignatures;
@property (nonatomic) BOOL PreferCompact;
@property (nonatomic) BOOL PreferFlattened;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: CreateJws
- (NSString *)CreateJws;
// method: CreateJwsSb
- (BOOL)CreateJwsSb: (CkoStringBuilder *)sbJws;
// method: GetPayload
- (NSString *)GetPayload: (NSString *)charset;
// method: GetPayloadBd
- (BOOL)GetPayloadBd: (CkoBinData *)binData;
// method: GetPayloadSb
- (BOOL)GetPayloadSb: (NSString *)charset 
	sbPayload: (CkoStringBuilder *)sbPayload;
// method: GetProtectedHeader
- (CkoJsonObject *)GetProtectedHeader: (NSNumber *)index;
// method: GetUnprotectedHeader
- (CkoJsonObject *)GetUnprotectedHeader: (NSNumber *)index;
// method: LoadJws
- (BOOL)LoadJws: (NSString *)jwsStr;
// method: LoadJwsSb
- (BOOL)LoadJwsSb: (CkoStringBuilder *)sbJws;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetMacKey
- (BOOL)SetMacKey: (NSNumber *)index 
	key: (NSString *)key 
	encoding: (NSString *)encoding;
// method: SetMacKeyBd
- (BOOL)SetMacKeyBd: (NSNumber *)index 
	key: (CkoBinData *)key;
// method: SetPayload
- (BOOL)SetPayload: (NSString *)payload 
	charset: (NSString *)charset 
	includeBom: (BOOL)includeBom;
// method: SetPayloadBd
- (BOOL)SetPayloadBd: (CkoBinData *)binData;
// method: SetPayloadSb
- (BOOL)SetPayloadSb: (CkoStringBuilder *)sbPayload 
	charset: (NSString *)charset 
	includeBom: (BOOL)includeBom;
// method: SetPrivateKey
- (BOOL)SetPrivateKey: (NSNumber *)index 
	privKey: (CkoPrivateKey *)privKey;
// method: SetProtectedHeader
- (BOOL)SetProtectedHeader: (NSNumber *)index 
	json: (CkoJsonObject *)json;
// method: SetPublicKey
- (BOOL)SetPublicKey: (NSNumber *)index 
	pubKey: (CkoPublicKey *)pubKey;
// method: SetUnprotectedHeader
- (BOOL)SetUnprotectedHeader: (NSNumber *)index 
	json: (CkoJsonObject *)json;
// method: Validate
- (NSNumber *)Validate: (NSNumber *)index;

@end
