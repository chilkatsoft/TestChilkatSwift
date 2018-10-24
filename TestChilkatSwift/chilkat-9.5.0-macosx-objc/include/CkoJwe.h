// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Jwe
// Wrapped Chilkat C++ class name =  CkJwe

@class CkoBinData;
@class CkoStringBuilder;
@class CkoPrivateKey;
@class CkoJsonObject;
@class CkoPublicKey;


@interface CkoJwe : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *NumRecipients;
@property (nonatomic) BOOL PreferCompact;
@property (nonatomic) BOOL PreferFlattened;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: Decrypt
- (NSString *)Decrypt: (NSNumber *)index 
	charset: (NSString *)charset;
// method: DecryptBd
- (BOOL)DecryptBd: (NSNumber *)index 
	bd: (CkoBinData *)bd;
// method: DecryptSb
- (BOOL)DecryptSb: (NSNumber *)index 
	charset: (NSString *)charset 
	contentSb: (CkoStringBuilder *)contentSb;
// method: Encrypt
- (NSString *)Encrypt: (NSString *)content 
	charset: (NSString *)charset;
// method: EncryptBd
- (BOOL)EncryptBd: (CkoBinData *)contentBd 
	jweSb: (CkoStringBuilder *)jweSb;
// method: EncryptSb
- (BOOL)EncryptSb: (CkoStringBuilder *)contentSb 
	charset: (NSString *)charset 
	jweSb: (CkoStringBuilder *)jweSb;
// method: FindRecipient
- (NSNumber *)FindRecipient: (NSString *)paramName 
	paramValue: (NSString *)paramValue 
	caseSensitive: (BOOL)caseSensitive;
// method: LoadJwe
- (BOOL)LoadJwe: (NSString *)jwe;
// method: LoadJweSb
- (BOOL)LoadJweSb: (CkoStringBuilder *)sb;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetAad
- (BOOL)SetAad: (NSString *)aad 
	charset: (NSString *)charset;
// method: SetAadBd
- (BOOL)SetAadBd: (CkoBinData *)aad;
// method: SetPassword
- (BOOL)SetPassword: (NSNumber *)index 
	password: (NSString *)password;
// method: SetPrivateKey
- (BOOL)SetPrivateKey: (NSNumber *)index 
	privKey: (CkoPrivateKey *)privKey;
// method: SetProtectedHeader
- (BOOL)SetProtectedHeader: (CkoJsonObject *)json;
// method: SetPublicKey
- (BOOL)SetPublicKey: (NSNumber *)index 
	pubKey: (CkoPublicKey *)pubKey;
// method: SetRecipientHeader
- (BOOL)SetRecipientHeader: (NSNumber *)index 
	json: (CkoJsonObject *)json;
// method: SetUnprotectedHeader
- (BOOL)SetUnprotectedHeader: (CkoJsonObject *)json;
// method: SetWrappingKey
- (BOOL)SetWrappingKey: (NSNumber *)index 
	encodedKey: (NSString *)encodedKey 
	encoding: (NSString *)encoding;

@end
