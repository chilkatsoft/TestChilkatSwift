// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  XmlDSig
// Wrapped Chilkat C++ class name =  CkXmlDSig

@class CkoXml;
@class CkoPublicKey;
@class CkoBinData;
@class CkoStringBuilder;
@class CkoXmlCertVault;


@interface CkoXmlDSig : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *NumReferences;
@property (nonatomic, readonly, copy) NSNumber *NumSignatures;
@property (nonatomic, copy) NSNumber *Selector;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic) BOOL WithComments;
// method: CanonicalizeFragment
- (NSString *)CanonicalizeFragment: (NSString *)xml 
	fragmentId: (NSString *)fragmentId 
	version: (NSString *)version 
	prefixList: (NSString *)prefixList 
	withComments: (BOOL)withComments;
// method: CanonicalizeXml
- (NSString *)CanonicalizeXml: (NSString *)xml 
	version: (NSString *)version 
	withComments: (BOOL)withComments;
// method: GetKeyInfo
- (CkoXml *)GetKeyInfo;
// method: GetPublicKey
- (CkoPublicKey *)GetPublicKey;
// method: IsReferenceExternal
- (BOOL)IsReferenceExternal: (NSNumber *)index;
// method: LoadSignature
- (BOOL)LoadSignature: (NSString *)xmlSig;
// method: LoadSignatureBd
- (BOOL)LoadSignatureBd: (CkoBinData *)binData;
// method: LoadSignatureSb
- (BOOL)LoadSignatureSb: (CkoStringBuilder *)sbXmlSig;
// method: ReferenceUri
- (NSString *)ReferenceUri: (NSNumber *)index;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetHmacKey
- (BOOL)SetHmacKey: (NSString *)key 
	encoding: (NSString *)encoding;
// method: SetPublicKey
- (BOOL)SetPublicKey: (CkoPublicKey *)pubKey;
// method: SetRefDataBd
- (BOOL)SetRefDataBd: (NSNumber *)index 
	binData: (CkoBinData *)binData;
// method: SetRefDataFile
- (BOOL)SetRefDataFile: (NSNumber *)index 
	path: (NSString *)path;
// method: SetRefDataSb
- (BOOL)SetRefDataSb: (NSNumber *)index 
	sb: (CkoStringBuilder *)sb 
	charset: (NSString *)charset;
// method: UseCertVault
- (BOOL)UseCertVault: (CkoXmlCertVault *)certVault;
// method: VerifyReferenceDigest
- (BOOL)VerifyReferenceDigest: (NSNumber *)index;
// method: VerifySignature
- (BOOL)VerifySignature: (BOOL)verifyReferenceDigests;

@end
