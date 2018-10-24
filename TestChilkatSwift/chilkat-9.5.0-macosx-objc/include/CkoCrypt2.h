// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Crypt2
// Wrapped Chilkat C++ class name =  CkCrypt2

@class CkoCert;
@class CkoTask;
@class CkoBinData;
@class CkoStringBuilder;
@class CkoSecureString;
@class CkoStream;
@class CkoCertChain;
@class CkoJsonObject;
@class CkoPrivateKey;
@class CkoXmlCertVault;


@class CkoBaseProgress;

@interface CkoCrypt2 : NSObject {

	@private
		void *m_eventCallback;
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

// property setter: EventCallbackObject
- (void)setEventCallbackObject: (CkoBaseProgress *)eventObj;

@property (nonatomic) BOOL AbortCurrent;
@property (nonatomic, copy) NSNumber *BCryptWorkFactor;
@property (nonatomic, readonly, copy) NSNumber *BlockSize;
@property (nonatomic) BOOL CadesEnabled;
@property (nonatomic, copy) NSString *CadesSigPolicyHash;
@property (nonatomic, copy) NSString *CadesSigPolicyId;
@property (nonatomic, copy) NSString *CadesSigPolicyUri;
@property (nonatomic, copy) NSString *Charset;
@property (nonatomic, copy) NSString *CipherMode;
@property (nonatomic, copy) NSString *CompressionAlgorithm;
@property (nonatomic, copy) NSString *CryptAlgorithm;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSString *EncodingMode;
@property (nonatomic) BOOL FirstChunk;
@property (nonatomic, copy) NSString *HashAlgorithm;
@property (nonatomic, copy) NSNumber *HavalRounds;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic) BOOL IncludeCertChain;
@property (nonatomic, copy) NSNumber *InitialCount;
@property (nonatomic, copy) NSNumber *IterationCount;
@property (nonatomic, copy) NSData *IV;
@property (nonatomic, copy) NSNumber *KeyLength;
@property (nonatomic) BOOL LastChunk;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSString *MacAlgorithm;
@property (nonatomic, readonly, copy) NSNumber *NumSignerCerts;
@property (nonatomic, copy) NSString *OaepHash;
@property (nonatomic, copy) NSString *OaepMgfHash;
@property (nonatomic) BOOL OaepPadding;
@property (nonatomic, copy) NSNumber *PaddingScheme;
@property (nonatomic, copy) NSString *PbesAlgorithm;
@property (nonatomic, copy) NSString *PbesPassword;
@property (nonatomic, copy) NSString *Pkcs7CryptAlg;
@property (nonatomic, copy) NSNumber *Rc2EffectiveKeyLength;
@property (nonatomic, copy) NSData *Salt;
@property (nonatomic, copy) NSData *SecretKey;
@property (nonatomic, copy) NSString *SigningAlg;
@property (nonatomic, copy) NSString *SigningAttributes;
@property (nonatomic, copy) NSString *UuFilename;
@property (nonatomic, copy) NSString *UuMode;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddEncryptCert
- (void)AddEncryptCert: (CkoCert *)cert;
// method: AddPfxSourceData
- (BOOL)AddPfxSourceData: (NSData *)pfxData 
	password: (NSString *)password;
// method: AddPfxSourceFile
- (BOOL)AddPfxSourceFile: (NSString *)pfxFilePath 
	password: (NSString *)password;
// method: AesKeyUnwrap
- (NSString *)AesKeyUnwrap: (NSString *)kek 
	wrappedKeyData: (NSString *)wrappedKeyData 
	encoding: (NSString *)encoding;
// method: AesKeyWrap
- (NSString *)AesKeyWrap: (NSString *)kek 
	keyData: (NSString *)keyData 
	encoding: (NSString *)encoding;
// method: BCryptHash
- (NSString *)BCryptHash: (NSString *)password;
// method: BCryptVerify
- (BOOL)BCryptVerify: (NSString *)password 
	bcryptHash: (NSString *)bcryptHash;
// method: BytesToString
- (NSString *)BytesToString: (NSData *)inData 
	charset: (NSString *)charset;
// method: ByteSwap4321
- (NSData *)ByteSwap4321: (NSData *)data;
// method: CkDecryptFile
- (BOOL)CkDecryptFile: (NSString *)srcFile 
	destFile: (NSString *)destFile;
// method: CkDecryptFileAsync
- (CkoTask *)CkDecryptFileAsync: (NSString *)srcFile 
	destFile: (NSString *)destFile;
// method: CkEncryptFile
- (BOOL)CkEncryptFile: (NSString *)srcFile 
	destFile: (NSString *)destFile;
// method: CkEncryptFileAsync
- (CkoTask *)CkEncryptFileAsync: (NSString *)srcFile 
	destFile: (NSString *)destFile;
// method: ClearEncryptCerts
- (void)ClearEncryptCerts;
// method: CompressBytes
- (NSData *)CompressBytes: (NSData *)bData;
// method: CompressBytesENC
- (NSString *)CompressBytesENC: (NSData *)bData;
// method: CompressString
- (NSData *)CompressString: (NSString *)str;
// method: CompressStringENC
- (NSString *)CompressStringENC: (NSString *)str;
// method: CrcBytes
- (NSNumber *)CrcBytes: (NSString *)crcAlg 
	byteData: (NSData *)byteData;
// method: CrcFile
- (NSNumber *)CrcFile: (NSString *)crcAlg 
	path: (NSString *)path;
// method: CrcFileAsync
- (CkoTask *)CrcFileAsync: (NSString *)crcAlg 
	path: (NSString *)path;
// method: CreateDetachedSignature
- (BOOL)CreateDetachedSignature: (NSString *)inFile 
	sigFile: (NSString *)sigFile;
// method: CreateP7M
- (BOOL)CreateP7M: (NSString *)inPath 
	p7mPath: (NSString *)p7mPath;
// method: CreateP7S
- (BOOL)CreateP7S: (NSString *)inPath 
	p7sPath: (NSString *)p7sPath;
// method: Decode
- (NSData *)Decode: (NSString *)str 
	encoding: (NSString *)encoding;
// method: DecodeString
- (NSString *)DecodeString: (NSString *)inStr 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;
// method: DecryptBd
- (BOOL)DecryptBd: (CkoBinData *)bd;
// method: DecryptBytes
- (NSData *)DecryptBytes: (NSData *)bData;
// method: DecryptBytesENC
- (NSData *)DecryptBytesENC: (NSString *)str;
// method: DecryptEncoded
- (NSString *)DecryptEncoded: (NSString *)str;
// method: DecryptSb
- (BOOL)DecryptSb: (CkoBinData *)bdIn 
	sbOut: (CkoStringBuilder *)sbOut;
// method: DecryptSecureENC
- (BOOL)DecryptSecureENC: (NSString *)cipherText 
	secureStr: (CkoSecureString *)secureStr;
// method: DecryptStream
- (BOOL)DecryptStream: (CkoStream *)strm;
// method: DecryptStreamAsync
- (CkoTask *)DecryptStreamAsync: (CkoStream *)strm;
// method: DecryptString
- (NSString *)DecryptString: (NSData *)bData;
// method: DecryptStringENC
- (NSString *)DecryptStringENC: (NSString *)str;
// method: Encode
- (NSString *)Encode: (NSData *)bData 
	encoding: (NSString *)encoding;
// method: EncodeBytes
- (NSString *)EncodeBytes: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData 
	encoding: (NSString *)encoding;
// method: EncodeString
- (NSString *)EncodeString: (NSString *)inStr 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;
// method: EncryptBd
- (BOOL)EncryptBd: (CkoBinData *)bd;
// method: EncryptBytes
- (NSData *)EncryptBytes: (NSData *)bData;
// method: EncryptBytesENC
- (NSString *)EncryptBytesENC: (NSData *)bData;
// method: EncryptEncoded
- (NSString *)EncryptEncoded: (NSString *)str;
// method: EncryptSb
- (BOOL)EncryptSb: (CkoStringBuilder *)sbIn 
	bdOut: (CkoBinData *)bdOut;
// method: EncryptSecureENC
- (NSString *)EncryptSecureENC: (CkoSecureString *)secureStr;
// method: EncryptStream
- (BOOL)EncryptStream: (CkoStream *)strm;
// method: EncryptStreamAsync
- (CkoTask *)EncryptStreamAsync: (CkoStream *)strm;
// method: EncryptString
- (NSData *)EncryptString: (NSString *)str;
// method: EncryptStringENC
- (NSString *)EncryptStringENC: (NSString *)str;
// method: GenEncodedSecretKey
- (NSString *)GenEncodedSecretKey: (NSString *)password 
	encoding: (NSString *)encoding;
// method: GenerateSecretKey
- (NSData *)GenerateSecretKey: (NSString *)password;
// method: GenerateUuid
- (NSString *)GenerateUuid;
// method: GenRandomBytesENC
- (NSString *)GenRandomBytesENC: (NSNumber *)numBytes;
// method: GetDecryptCert
- (CkoCert *)GetDecryptCert;
// method: GetEncodedAad
- (NSString *)GetEncodedAad: (NSString *)encoding;
// method: GetEncodedAuthTag
- (NSString *)GetEncodedAuthTag: (NSString *)encoding;
// method: GetEncodedIV
- (NSString *)GetEncodedIV: (NSString *)encoding;
// method: GetEncodedKey
- (NSString *)GetEncodedKey: (NSString *)encoding;
// method: GetEncodedSalt
- (NSString *)GetEncodedSalt: (NSString *)encoding;
// method: GetLastCert
- (CkoCert *)GetLastCert;
// method: GetSignatureSigningTime
- (NSDate *)GetSignatureSigningTime: (NSNumber *)index;
// method: GetSignatureSigningTimeStr
- (NSString *)GetSignatureSigningTimeStr: (NSNumber *)index;
// method: GetSignedAttributes
- (BOOL)GetSignedAttributes: (NSNumber *)signerIndex 
	pkcs7Der: (CkoBinData *)pkcs7Der 
	sbJson: (CkoStringBuilder *)sbJson;
// method: GetSignerCert
- (CkoCert *)GetSignerCert: (NSNumber *)index;
// method: GetSignerCertChain
- (CkoCertChain *)GetSignerCertChain: (NSNumber *)index;
// method: HashBdENC
- (NSString *)HashBdENC: (CkoBinData *)bd;
// method: HashBeginBytes
- (BOOL)HashBeginBytes: (NSData *)data;
// method: HashBeginString
- (BOOL)HashBeginString: (NSString *)strData;
// method: HashBytes
- (NSData *)HashBytes: (NSData *)bData;
// method: HashBytesENC
- (NSString *)HashBytesENC: (NSData *)bData;
// method: HashFile
- (NSData *)HashFile: (NSString *)path;
// method: HashFileAsync
- (CkoTask *)HashFileAsync: (NSString *)path;
// method: HashFileENC
- (NSString *)HashFileENC: (NSString *)path;
// method: HashFileENCAsync
- (CkoTask *)HashFileENCAsync: (NSString *)path;
// method: HashFinal
- (NSData *)HashFinal;
// method: HashFinalENC
- (NSString *)HashFinalENC;
// method: HashMoreBytes
- (BOOL)HashMoreBytes: (NSData *)data;
// method: HashMoreString
- (BOOL)HashMoreString: (NSString *)strData;
// method: HashString
- (NSData *)HashString: (NSString *)str;
// method: HashStringENC
- (NSString *)HashStringENC: (NSString *)str;
// method: HasSignatureSigningTime
- (BOOL)HasSignatureSigningTime: (NSNumber *)index;
// method: HmacBytes
- (NSData *)HmacBytes: (NSData *)inBytes;
// method: HmacBytesENC
- (NSString *)HmacBytesENC: (NSData *)inBytes;
// method: HmacString
- (NSData *)HmacString: (NSString *)inText;
// method: HmacStringENC
- (NSString *)HmacStringENC: (NSString *)inText;
// method: InflateBytes
- (NSData *)InflateBytes: (NSData *)bData;
// method: InflateBytesENC
- (NSData *)InflateBytesENC: (NSString *)str;
// method: InflateString
- (NSString *)InflateString: (NSData *)bData;
// method: InflateStringENC
- (NSString *)InflateStringENC: (NSString *)str;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: LastJsonData
- (CkoJsonObject *)LastJsonData;
// method: MacBdENC
- (NSString *)MacBdENC: (CkoBinData *)bd;
// method: MacBytes
- (NSData *)MacBytes: (NSData *)inBytes;
// method: MacBytesENC
- (NSString *)MacBytesENC: (NSData *)inBytes;
// method: MacString
- (NSData *)MacString: (NSString *)inText;
// method: MacStringENC
- (NSString *)MacStringENC: (NSString *)inText;
// method: MySqlAesDecrypt
- (NSString *)MySqlAesDecrypt: (NSString *)strEncrypted 
	strKey: (NSString *)strKey;
// method: MySqlAesEncrypt
- (NSString *)MySqlAesEncrypt: (NSString *)strData 
	strKey: (NSString *)strKey;
// method: OpaqueSignBd
- (BOOL)OpaqueSignBd: (CkoBinData *)bd;
// method: OpaqueSignBytes
- (NSData *)OpaqueSignBytes: (NSData *)bData;
// method: OpaqueSignBytesENC
- (NSString *)OpaqueSignBytesENC: (NSData *)bData;
// method: OpaqueSignString
- (NSData *)OpaqueSignString: (NSString *)str;
// method: OpaqueSignStringENC
- (NSString *)OpaqueSignStringENC: (NSString *)str;
// method: OpaqueVerifyBd
- (BOOL)OpaqueVerifyBd: (CkoBinData *)bd;
// method: OpaqueVerifyBytes
- (NSData *)OpaqueVerifyBytes: (NSData *)p7s;
// method: OpaqueVerifyBytesENC
- (NSData *)OpaqueVerifyBytesENC: (NSString *)p7s;
// method: OpaqueVerifyString
- (NSString *)OpaqueVerifyString: (NSData *)p7s;
// method: OpaqueVerifyStringENC
- (NSString *)OpaqueVerifyStringENC: (NSString *)p7s;
// method: Pbkdf1
- (NSString *)Pbkdf1: (NSString *)password 
	charset: (NSString *)charset 
	hashAlg: (NSString *)hashAlg 
	salt: (NSString *)salt 
	iterationCount: (NSNumber *)iterationCount 
	outputKeyBitLen: (NSNumber *)outputKeyBitLen 
	encoding: (NSString *)encoding;
// method: Pbkdf2
- (NSString *)Pbkdf2: (NSString *)password 
	charset: (NSString *)charset 
	hashAlg: (NSString *)hashAlg 
	salt: (NSString *)salt 
	iterationCount: (NSNumber *)iterationCount 
	outputKeyBitLen: (NSNumber *)outputKeyBitLen 
	encoding: (NSString *)encoding;
// method: Pkcs7ExtractDigest
- (NSString *)Pkcs7ExtractDigest: (NSNumber *)signerIndex 
	pkcs7: (NSString *)pkcs7;
// method: RandomizeIV
- (void)RandomizeIV;
// method: RandomizeKey
- (void)RandomizeKey;
// method: ReadFile
- (NSData *)ReadFile: (NSString *)path;
// method: ReEncode
- (NSString *)ReEncode: (NSString *)data 
	fromEncoding: (NSString *)fromEncoding 
	toEncoding: (NSString *)toEncoding;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetDecryptCert
- (BOOL)SetDecryptCert: (CkoCert *)cert;
// method: SetDecryptCert2
- (BOOL)SetDecryptCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;
// method: SetEncodedAad
- (BOOL)SetEncodedAad: (NSString *)aadStr 
	encoding: (NSString *)encoding;
// method: SetEncodedAuthTag
- (BOOL)SetEncodedAuthTag: (NSString *)authTagStr 
	encoding: (NSString *)encoding;
// method: SetEncodedIV
- (void)SetEncodedIV: (NSString *)ivStr 
	encoding: (NSString *)encoding;
// method: SetEncodedKey
- (void)SetEncodedKey: (NSString *)keyStr 
	encoding: (NSString *)encoding;
// method: SetEncodedSalt
- (void)SetEncodedSalt: (NSString *)saltStr 
	encoding: (NSString *)encoding;
// method: SetEncryptCert
- (BOOL)SetEncryptCert: (CkoCert *)cert;
// method: SetHmacKeyBytes
- (void)SetHmacKeyBytes: (NSData *)keyBytes;
// method: SetHmacKeyEncoded
- (void)SetHmacKeyEncoded: (NSString *)key 
	encoding: (NSString *)encoding;
// method: SetHmacKeyString
- (void)SetHmacKeyString: (NSString *)key;
// method: SetMacKeyBytes
- (BOOL)SetMacKeyBytes: (NSData *)keyBytes;
// method: SetMacKeyEncoded
- (BOOL)SetMacKeyEncoded: (NSString *)key 
	encoding: (NSString *)encoding;
// method: SetMacKeyString
- (BOOL)SetMacKeyString: (NSString *)key;
// method: SetSecretKeyViaPassword
- (void)SetSecretKeyViaPassword: (NSString *)password;
// method: SetSigningCert
- (BOOL)SetSigningCert: (CkoCert *)cert;
// method: SetSigningCert2
- (BOOL)SetSigningCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;
// method: SetVerifyCert
- (BOOL)SetVerifyCert: (CkoCert *)cert;
// method: SignBdENC
- (NSString *)SignBdENC: (CkoBinData *)dataToSign;
// method: SignBytes
- (NSData *)SignBytes: (NSData *)bData;
// method: SignBytesENC
- (NSString *)SignBytesENC: (NSData *)bData;
// method: SignSbENC
- (NSString *)SignSbENC: (CkoStringBuilder *)sb;
// method: SignString
- (NSData *)SignString: (NSString *)str;
// method: SignStringENC
- (NSString *)SignStringENC: (NSString *)str;
// method: StringToBytes
- (NSData *)StringToBytes: (NSString *)inStr 
	charset: (NSString *)charset;
// method: TrimEndingWith
- (NSString *)TrimEndingWith: (NSString *)inStr 
	ending: (NSString *)ending;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UseCertVault
- (BOOL)UseCertVault: (CkoXmlCertVault *)vault;
// method: VerifyBdENC
- (BOOL)VerifyBdENC: (CkoBinData *)data 
	encodedSig: (NSString *)encodedSig;
// method: VerifyBytes
- (BOOL)VerifyBytes: (NSData *)bData1 
	sigData: (NSData *)sigData;
// method: VerifyBytesENC
- (BOOL)VerifyBytesENC: (NSData *)bData 
	encodedSig: (NSString *)encodedSig;
// method: VerifyDetachedSignature
- (BOOL)VerifyDetachedSignature: (NSString *)inFile 
	sigFile: (NSString *)sigFile;
// method: VerifyP7M
- (BOOL)VerifyP7M: (NSString *)p7mPath 
	destPath: (NSString *)destPath;
// method: VerifyP7S
- (BOOL)VerifyP7S: (NSString *)inPath 
	p7sPath: (NSString *)p7sPath;
// method: VerifySbENC
- (BOOL)VerifySbENC: (CkoStringBuilder *)sb 
	encodedSig: (NSString *)encodedSig;
// method: VerifyString
- (BOOL)VerifyString: (NSString *)str 
	sigData: (NSData *)sigData;
// method: VerifyStringENC
- (BOOL)VerifyStringENC: (NSString *)str 
	encodedSig: (NSString *)encodedSig;
// method: WriteFile
- (BOOL)WriteFile: (NSString *)path 
	fileData: (NSData *)fileData;

@end
