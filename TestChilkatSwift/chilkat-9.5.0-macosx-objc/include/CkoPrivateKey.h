// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  PrivateKey
// Wrapped Chilkat C++ class name =  CkPrivateKey

@class CkoPublicKey;
@class CkoBinData;


@interface CkoPrivateKey : NSObject {

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

@property (nonatomic, readonly, copy) NSNumber *BitLength;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *KeyType;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSString *Pkcs8EncryptAlg;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: GetJwk
- (NSString *)GetJwk;
// method: GetJwkThumbprint
- (NSString *)GetJwkThumbprint: (NSString *)hashAlg;
// method: GetPkcs1
- (NSData *)GetPkcs1;
// method: GetPkcs1ENC
- (NSString *)GetPkcs1ENC: (NSString *)encoding;
// method: GetPkcs1Pem
- (NSString *)GetPkcs1Pem;
// method: GetPkcs8
- (NSData *)GetPkcs8;
// method: GetPkcs8ENC
- (NSString *)GetPkcs8ENC: (NSString *)encoding;
// method: GetPkcs8Encrypted
- (NSData *)GetPkcs8Encrypted: (NSString *)password;
// method: GetPkcs8EncryptedENC
- (NSString *)GetPkcs8EncryptedENC: (NSString *)encoding 
	password: (NSString *)password;
// method: GetPkcs8EncryptedPem
- (NSString *)GetPkcs8EncryptedPem: (NSString *)password;
// method: GetPkcs8Pem
- (NSString *)GetPkcs8Pem;
// method: GetPublicKey
- (CkoPublicKey *)GetPublicKey;
// method: GetRsaDer
- (NSData *)GetRsaDer;
// method: GetRsaPem
- (NSString *)GetRsaPem;
// method: GetXml
- (NSString *)GetXml;
// method: LoadAnyFormat
- (BOOL)LoadAnyFormat: (CkoBinData *)privKeyData 
	password: (NSString *)password;
// method: LoadEncryptedPem
- (BOOL)LoadEncryptedPem: (NSString *)pemStr 
	password: (NSString *)password;
// method: LoadEncryptedPemFile
- (BOOL)LoadEncryptedPemFile: (NSString *)path 
	password: (NSString *)password;
// method: LoadJwk
- (BOOL)LoadJwk: (NSString *)jsonStr;
// method: LoadPem
- (BOOL)LoadPem: (NSString *)str;
// method: LoadPemFile
- (BOOL)LoadPemFile: (NSString *)path;
// method: LoadPkcs1
- (BOOL)LoadPkcs1: (NSData *)data;
// method: LoadPkcs1File
- (BOOL)LoadPkcs1File: (NSString *)path;
// method: LoadPkcs8
- (BOOL)LoadPkcs8: (NSData *)data;
// method: LoadPkcs8Encrypted
- (BOOL)LoadPkcs8Encrypted: (NSData *)data 
	password: (NSString *)password;
// method: LoadPkcs8EncryptedFile
- (BOOL)LoadPkcs8EncryptedFile: (NSString *)path 
	password: (NSString *)password;
// method: LoadPkcs8File
- (BOOL)LoadPkcs8File: (NSString *)path;
// method: LoadRsaDer
- (BOOL)LoadRsaDer: (NSData *)data;
// method: LoadRsaDerFile
- (BOOL)LoadRsaDerFile: (NSString *)path;
// method: LoadXml
- (BOOL)LoadXml: (NSString *)xml;
// method: LoadXmlFile
- (BOOL)LoadXmlFile: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SavePemFile
- (BOOL)SavePemFile: (NSString *)path;
// method: SavePkcs1File
- (BOOL)SavePkcs1File: (NSString *)path;
// method: SavePkcs8EncryptedFile
- (BOOL)SavePkcs8EncryptedFile: (NSString *)password 
	path: (NSString *)path;
// method: SavePkcs8EncryptedPemFile
- (BOOL)SavePkcs8EncryptedPemFile: (NSString *)password 
	path: (NSString *)path;
// method: SavePkcs8File
- (BOOL)SavePkcs8File: (NSString *)path;
// method: SavePkcs8PemFile
- (BOOL)SavePkcs8PemFile: (NSString *)path;
// method: SaveRsaDerFile
- (BOOL)SaveRsaDerFile: (NSString *)path;
// method: SaveRsaPemFile
- (BOOL)SaveRsaPemFile: (NSString *)path;
// method: SaveXmlFile
- (BOOL)SaveXmlFile: (NSString *)path;

@end
