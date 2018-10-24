// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  OAuth1
// Wrapped Chilkat C++ class name =  CkOAuth1

@class CkoPrivateKey;


@interface CkoOAuth1 : NSObject {

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

@property (nonatomic, readonly, copy) NSString *AuthorizationHeader;
@property (nonatomic, readonly, copy) NSString *BaseString;
@property (nonatomic, copy) NSString *ConsumerKey;
@property (nonatomic, copy) NSString *ConsumerSecret;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *EncodedSignature;
@property (nonatomic, readonly, copy) NSString *GeneratedUrl;
@property (nonatomic, readonly, copy) NSString *HmacKey;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSString *Nonce;
@property (nonatomic, copy) NSString *OauthMethod;
@property (nonatomic, copy) NSString *OauthUrl;
@property (nonatomic, copy) NSString *OauthVersion;
@property (nonatomic, readonly, copy) NSString *QueryString;
@property (nonatomic, copy) NSString *Realm;
@property (nonatomic, readonly, copy) NSString *Signature;
@property (nonatomic, copy) NSString *SignatureMethod;
@property (nonatomic, copy) NSString *Timestamp;
@property (nonatomic, copy) NSString *Token;
@property (nonatomic, copy) NSString *TokenSecret;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddParam
- (BOOL)AddParam: (NSString *)name 
	value: (NSString *)value;
// method: Generate
- (BOOL)Generate;
// method: GenNonce
- (BOOL)GenNonce: (NSNumber *)numBytes;
// method: GenTimestamp
- (BOOL)GenTimestamp;
// method: RemoveParam
- (BOOL)RemoveParam: (NSString *)name;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetRsaKey
- (BOOL)SetRsaKey: (CkoPrivateKey *)privKey;

@end
