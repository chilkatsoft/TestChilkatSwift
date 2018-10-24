// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  PublicKey
// Wrapped Chilkat C++ class name =  CkPublicKey



@interface CkoPublicKey : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *KeySize;
@property (nonatomic, readonly, copy) NSString *KeyType;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: GetDer
- (NSData *)GetDer: (BOOL)preferPkcs1;
// method: GetEncoded
- (NSString *)GetEncoded: (BOOL)preferPkcs1 
	encoding: (NSString *)encoding;
// method: GetJwk
- (NSString *)GetJwk;
// method: GetJwkThumbprint
- (NSString *)GetJwkThumbprint: (NSString *)hashAlg;
// method: GetOpenSslDer
- (NSData *)GetOpenSslDer;
// method: GetOpenSslPem
- (NSString *)GetOpenSslPem;
// method: GetPem
- (NSString *)GetPem: (BOOL)preferPkcs1;
// method: GetPkcs1ENC
- (NSString *)GetPkcs1ENC: (NSString *)encoding;
// method: GetPkcs8ENC
- (NSString *)GetPkcs8ENC: (NSString *)encoding;
// method: GetRsaDer
- (NSData *)GetRsaDer;
// method: GetXml
- (NSString *)GetXml;
// method: LoadBase64
- (BOOL)LoadBase64: (NSString *)keyStr;
// method: LoadFromBinary
- (BOOL)LoadFromBinary: (NSData *)keyBytes;
// method: LoadFromFile
- (BOOL)LoadFromFile: (NSString *)path;
// method: LoadFromString
- (BOOL)LoadFromString: (NSString *)keyString;
// method: LoadOpenSslDer
- (BOOL)LoadOpenSslDer: (NSData *)data;
// method: LoadOpenSslDerFile
- (BOOL)LoadOpenSslDerFile: (NSString *)path;
// method: LoadOpenSslPem
- (BOOL)LoadOpenSslPem: (NSString *)str;
// method: LoadOpenSslPemFile
- (BOOL)LoadOpenSslPemFile: (NSString *)path;
// method: LoadPkcs1Pem
- (BOOL)LoadPkcs1Pem: (NSString *)str;
// method: LoadRsaDer
- (BOOL)LoadRsaDer: (NSData *)data;
// method: LoadRsaDerFile
- (BOOL)LoadRsaDerFile: (NSString *)path;
// method: LoadXml
- (BOOL)LoadXml: (NSString *)xml;
// method: LoadXmlFile
- (BOOL)LoadXmlFile: (NSString *)path;
// method: SaveDerFile
- (BOOL)SaveDerFile: (BOOL)preferPkcs1 
	path: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveOpenSslDerFile
- (BOOL)SaveOpenSslDerFile: (NSString *)path;
// method: SaveOpenSslPemFile
- (BOOL)SaveOpenSslPemFile: (NSString *)path;
// method: SavePemFile
- (BOOL)SavePemFile: (BOOL)preferPkcs1 
	path: (NSString *)path;
// method: SaveRsaDerFile
- (BOOL)SaveRsaDerFile: (NSString *)path;
// method: SaveXmlFile
- (BOOL)SaveXmlFile: (NSString *)path;

@end
