// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Http
// Wrapped Chilkat C++ class name =  CkHttp

@class CkoHttpResponse;
@class CkoTask;
@class CkoJsonObject;
@class CkoBinData;
@class CkoStringBuilder;
@class CkoCert;
@class CkoHashtable;
@class CkoHttpRequest;
@class CkoStringArray;
@class CkoDateTime;
@class CkoPrivateKey;
@class CkoSecureString;


@class CkoHttpProgress;

@interface CkoHttp : NSObject {

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
- (void)setEventCallbackObject: (CkoHttpProgress *)eventObj;

@property (nonatomic) BOOL AbortCurrent;
@property (nonatomic, copy) NSString *Accept;
@property (nonatomic, copy) NSString *AcceptCharset;
@property (nonatomic, copy) NSString *AcceptLanguage;
@property (nonatomic) BOOL AllowGzip;
@property (nonatomic) BOOL AllowHeaderFolding;
@property (nonatomic, copy) NSString *AuthToken;
@property (nonatomic) BOOL AutoAddHostHeader;
@property (nonatomic, copy) NSString *AwsAccessKey;
@property (nonatomic, copy) NSString *AwsEndpoint;
@property (nonatomic, copy) NSString *AwsRegion;
@property (nonatomic, copy) NSString *AwsSecretKey;
@property (nonatomic, copy) NSNumber *AwsSignatureVersion;
@property (nonatomic, copy) NSString *AwsSubResources;
@property (nonatomic, copy) NSNumber *BandwidthThrottleDown;
@property (nonatomic, copy) NSNumber *BandwidthThrottleUp;
@property (nonatomic) BOOL BasicAuth;
@property (nonatomic, readonly, copy) NSString *BgLastErrorText;
@property (nonatomic, readonly, copy) NSNumber *BgPercentDone;
@property (nonatomic, readonly, copy) NSData *BgResultData;
@property (nonatomic, readonly, copy) NSNumber *BgResultInt;
@property (nonatomic, readonly, copy) NSString *BgResultString;
@property (nonatomic, readonly) BOOL BgTaskFinished;
@property (nonatomic, readonly) BOOL BgTaskRunning;
@property (nonatomic, readonly) BOOL BgTaskSuccess;
@property (nonatomic, copy) NSString *ClientIpAddress;
@property (nonatomic, readonly, copy) NSNumber *ConnectFailReason;
@property (nonatomic, copy) NSString *Connection;
@property (nonatomic, copy) NSNumber *ConnectTimeout;
@property (nonatomic, copy) NSString *CookieDir;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSNumber *DefaultFreshPeriod;
@property (nonatomic) BOOL DigestAuth;
@property (nonatomic, readonly, copy) NSNumber *EventLogCount;
@property (nonatomic) BOOL FetchFromCache;
@property (nonatomic, readonly, copy) NSString *FinalRedirectUrl;
@property (nonatomic) BOOL FollowRedirects;
@property (nonatomic, copy) NSNumber *FreshnessAlgorithm;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic) BOOL IgnoreMustRevalidate;
@property (nonatomic) BOOL IgnoreNoCache;
@property (nonatomic) BOOL KeepEventLog;
@property (nonatomic) BOOL KeepResponseBody;
@property (nonatomic, readonly, copy) NSString *LastContentType;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSString *LastHeader;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSString *LastModDate;
@property (nonatomic, readonly, copy) NSString *LastResponseBody;
@property (nonatomic, readonly, copy) NSString *LastResponseHeader;
@property (nonatomic, readonly, copy) NSNumber *LastStatus;
@property (nonatomic, readonly, copy) NSString *LastStatusText;
@property (nonatomic, copy) NSNumber *LMFactor;
@property (nonatomic, copy) NSString *Login;
@property (nonatomic, copy) NSString *LoginDomain;
@property (nonatomic, copy) NSNumber *MaxConnections;
@property (nonatomic, copy) NSNumber *MaxFreshPeriod;
@property (nonatomic, copy) NSNumber *MaxResponseSize;
@property (nonatomic, copy) NSNumber *MaxUrlLen;
@property (nonatomic) BOOL MimicFireFox;
@property (nonatomic) BOOL MimicIE;
@property (nonatomic, copy) NSNumber *MinFreshPeriod;
@property (nonatomic) BOOL NegotiateAuth;
@property (nonatomic) BOOL NtlmAuth;
@property (nonatomic, copy) NSNumber *NumCacheLevels;
@property (nonatomic, readonly, copy) NSNumber *NumCacheRoots;
@property (nonatomic) BOOL OAuth1;
@property (nonatomic, copy) NSString *OAuthCallback;
@property (nonatomic, copy) NSString *OAuthConsumerKey;
@property (nonatomic, copy) NSString *OAuthConsumerSecret;
@property (nonatomic, copy) NSString *OAuthRealm;
@property (nonatomic, copy) NSString *OAuthSigMethod;
@property (nonatomic, copy) NSString *OAuthToken;
@property (nonatomic, copy) NSString *OAuthTokenSecret;
@property (nonatomic, copy) NSString *OAuthVerifier;
@property (nonatomic, copy) NSString *Password;
@property (nonatomic, copy) NSNumber *PercentDoneScale;
@property (nonatomic) BOOL PreferIpv6;
@property (nonatomic, copy) NSString *ProxyAuthMethod;
@property (nonatomic, copy) NSString *ProxyDomain;
@property (nonatomic, copy) NSString *ProxyLogin;
@property (nonatomic, copy) NSString *ProxyLoginDomain;
@property (nonatomic, copy) NSString *ProxyPassword;
@property (nonatomic, copy) NSNumber *ProxyPort;
@property (nonatomic, copy) NSNumber *ReadTimeout;
@property (nonatomic, copy) NSString *RedirectVerb;
@property (nonatomic, copy) NSString *Referer;
@property (nonatomic, copy) NSString *RequiredContentType;
@property (nonatomic) BOOL RequireSslCertVerify;
@property (nonatomic) BOOL S3Ssl;
@property (nonatomic) BOOL SaveCookies;
@property (nonatomic, copy) NSNumber *SendBufferSize;
@property (nonatomic) BOOL SendCookies;
@property (nonatomic, copy) NSString *SessionLogFilename;
@property (nonatomic, copy) NSString *SocksHostname;
@property (nonatomic, copy) NSString *SocksPassword;
@property (nonatomic, copy) NSNumber *SocksPort;
@property (nonatomic, copy) NSString *SocksUsername;
@property (nonatomic, copy) NSNumber *SocksVersion;
@property (nonatomic, copy) NSNumber *SoRcvBuf;
@property (nonatomic, copy) NSNumber *SoSndBuf;
@property (nonatomic, copy) NSString *SslAllowedCiphers;
@property (nonatomic, copy) NSString *SslProtocol;
@property (nonatomic, copy) NSString *StreamResponseBodyPath;
@property (nonatomic, readonly, copy) NSString *TlsCipherSuite;
@property (nonatomic, copy) NSString *TlsPinSet;
@property (nonatomic, readonly, copy) NSString *TlsVersion;
@property (nonatomic) BOOL UpdateCache;
@property (nonatomic) BOOL UseBgThread;
@property (nonatomic) BOOL UseIEProxy;
@property (nonatomic, copy) NSString *UserAgent;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, readonly) BOOL WasRedirected;
// method: AddCacheRoot
- (void)AddCacheRoot: (NSString *)dir;
// method: AddQuickHeader
- (BOOL)AddQuickHeader: (NSString *)name 
	value: (NSString *)value;
// method: BgResponseObject
- (CkoHttpResponse *)BgResponseObject;
// method: BgTaskAbort
- (void)BgTaskAbort;
// method: ClearBgEventLog
- (void)ClearBgEventLog;
// method: ClearInMemoryCookies
- (void)ClearInMemoryCookies;
// method: ClearUrlVars
- (void)ClearUrlVars;
// method: CloseAllConnections
- (BOOL)CloseAllConnections;
// method: CloseAllConnectionsAsync
- (CkoTask *)CloseAllConnectionsAsync;
// method: CreateOcspRequest
- (BOOL)CreateOcspRequest: (CkoJsonObject *)requestDetails 
	ocspRequest: (CkoBinData *)ocspRequest;
// method: CreateTimestampRequest
- (BOOL)CreateTimestampRequest: (NSString *)hashAlg 
	hashVal: (NSString *)hashVal 
	reqPolicyOid: (NSString *)reqPolicyOid 
	addNonce: (BOOL)addNonce 
	reqTsaCert: (BOOL)reqTsaCert 
	tmestampToken: (CkoBinData *)tmestampToken;
// method: DnsCacheClear
- (void)DnsCacheClear;
// method: Download
- (BOOL)Download: (NSString *)url 
	saveToPath: (NSString *)saveToPath;
// method: DownloadAsync
- (CkoTask *)DownloadAsync: (NSString *)url 
	saveToPath: (NSString *)saveToPath;
// method: DownloadAppend
- (BOOL)DownloadAppend: (NSString *)url 
	appendToPath: (NSString *)appendToPath;
// method: DownloadAppendAsync
- (CkoTask *)DownloadAppendAsync: (NSString *)url 
	appendToPath: (NSString *)appendToPath;
// method: DownloadBd
- (BOOL)DownloadBd: (NSString *)url 
	binData: (CkoBinData *)binData;
// method: DownloadBdAsync
- (CkoTask *)DownloadBdAsync: (NSString *)url 
	binData: (CkoBinData *)binData;
// method: DownloadHash
- (NSString *)DownloadHash: (NSString *)url 
	hashAlgorithm: (NSString *)hashAlgorithm 
	encoding: (NSString *)encoding;
// method: DownloadHashAsync
- (CkoTask *)DownloadHashAsync: (NSString *)url 
	hashAlgorithm: (NSString *)hashAlgorithm 
	encoding: (NSString *)encoding;
// method: DownloadSb
- (BOOL)DownloadSb: (NSString *)url 
	charset: (NSString *)charset 
	sb: (CkoStringBuilder *)sb;
// method: DownloadSbAsync
- (CkoTask *)DownloadSbAsync: (NSString *)url 
	charset: (NSString *)charset 
	sb: (CkoStringBuilder *)sb;
// method: EventLogName
- (NSString *)EventLogName: (NSNumber *)index;
// method: EventLogValue
- (NSString *)EventLogValue: (NSNumber *)index;
// method: ExtractMetaRefreshUrl
- (NSString *)ExtractMetaRefreshUrl: (NSString *)html;
// method: G_SvcOauthAccessToken
- (NSString *)G_SvcOauthAccessToken: (NSString *)iss 
	scope: (NSString *)scope 
	subEmail: (NSString *)subEmail 
	numSec: (NSNumber *)numSec 
	cert: (CkoCert *)cert;
// method: G_SvcOauthAccessTokenAsync
- (CkoTask *)G_SvcOauthAccessTokenAsync: (NSString *)iss 
	scope: (NSString *)scope 
	subEmail: (NSString *)subEmail 
	numSec: (NSNumber *)numSec 
	cert: (CkoCert *)cert;
// method: G_SvcOauthAccessToken2
- (NSString *)G_SvcOauthAccessToken2: (CkoHashtable *)claimParams 
	numSec: (NSNumber *)numSec 
	cert: (CkoCert *)cert;
// method: G_SvcOauthAccessToken2Async
- (CkoTask *)G_SvcOauthAccessToken2Async: (CkoHashtable *)claimParams 
	numSec: (NSNumber *)numSec 
	cert: (CkoCert *)cert;
// method: GenTimeStamp
- (NSString *)GenTimeStamp;
// method: GetCacheRoot
- (NSString *)GetCacheRoot: (NSNumber *)index;
// method: GetCookieXml
- (NSString *)GetCookieXml: (NSString *)domain;
// method: GetDomain
- (NSString *)GetDomain: (NSString *)url;
// method: GetHead
- (CkoHttpResponse *)GetHead: (NSString *)url;
// method: GetHeadAsync
- (CkoTask *)GetHeadAsync: (NSString *)url;
// method: GetRequestHeader
- (NSString *)GetRequestHeader: (NSString *)name;
// method: GetServerSslCert
- (CkoCert *)GetServerSslCert: (NSString *)domain 
	port: (NSNumber *)port;
// method: GetServerSslCertAsync
- (CkoTask *)GetServerSslCertAsync: (NSString *)domain 
	port: (NSNumber *)port;
// method: GetUrlPath
- (NSString *)GetUrlPath: (NSString *)url;
// method: HasRequestHeader
- (BOOL)HasRequestHeader: (NSString *)name;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: ParseOcspReply
- (NSNumber *)ParseOcspReply: (CkoBinData *)ocspReply 
	replyData: (CkoJsonObject *)replyData;
// method: PBinary
- (CkoHttpResponse *)PBinary: (NSString *)verb 
	url: (NSString *)url 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PBinaryAsync
- (CkoTask *)PBinaryAsync: (NSString *)verb 
	url: (NSString *)url 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PBinaryBd
- (CkoHttpResponse *)PBinaryBd: (NSString *)verb 
	url: (NSString *)url 
	data: (CkoBinData *)data 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PBinaryBdAsync
- (CkoTask *)PBinaryBdAsync: (NSString *)verb 
	url: (NSString *)url 
	data: (CkoBinData *)data 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PostBinary
- (NSString *)PostBinary: (NSString *)url 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PostBinaryAsync
- (CkoTask *)PostBinaryAsync: (NSString *)url 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PostJson
- (CkoHttpResponse *)PostJson: (NSString *)url 
	jsonText: (NSString *)jsonText;
// method: PostJsonAsync
- (CkoTask *)PostJsonAsync: (NSString *)url 
	jsonText: (NSString *)jsonText;
// method: PostJson2
- (CkoHttpResponse *)PostJson2: (NSString *)url 
	contentType: (NSString *)contentType 
	jsonText: (NSString *)jsonText;
// method: PostJson2Async
- (CkoTask *)PostJson2Async: (NSString *)url 
	contentType: (NSString *)contentType 
	jsonText: (NSString *)jsonText;
// method: PostJson3
- (CkoHttpResponse *)PostJson3: (NSString *)url 
	contentType: (NSString *)contentType 
	json: (CkoJsonObject *)json;
// method: PostJson3Async
- (CkoTask *)PostJson3Async: (NSString *)url 
	contentType: (NSString *)contentType 
	json: (CkoJsonObject *)json;
// method: PostUrlEncoded
- (CkoHttpResponse *)PostUrlEncoded: (NSString *)url 
	req: (CkoHttpRequest *)req;
// method: PostUrlEncodedAsync
- (CkoTask *)PostUrlEncodedAsync: (NSString *)url 
	req: (CkoHttpRequest *)req;
// method: PostXml
- (CkoHttpResponse *)PostXml: (NSString *)url 
	xmlDoc: (NSString *)xmlDoc 
	charset: (NSString *)charset;
// method: PostXmlAsync
- (CkoTask *)PostXmlAsync: (NSString *)url 
	xmlDoc: (NSString *)xmlDoc 
	charset: (NSString *)charset;
// method: PText
- (CkoHttpResponse *)PText: (NSString *)verb 
	url: (NSString *)url 
	textData: (NSString *)textData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PTextAsync
- (CkoTask *)PTextAsync: (NSString *)verb 
	url: (NSString *)url 
	textData: (NSString *)textData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PTextSb
- (CkoHttpResponse *)PTextSb: (NSString *)verb 
	url: (NSString *)url 
	textData: (CkoStringBuilder *)textData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PTextSbAsync
- (CkoTask *)PTextSbAsync: (NSString *)verb 
	url: (NSString *)url 
	textData: (CkoStringBuilder *)textData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PutBinary
- (NSString *)PutBinary: (NSString *)url 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PutBinaryAsync
- (CkoTask *)PutBinaryAsync: (NSString *)url 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PutText
- (NSString *)PutText: (NSString *)url 
	textData: (NSString *)textData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: PutTextAsync
- (CkoTask *)PutTextAsync: (NSString *)url 
	textData: (NSString *)textData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;
// method: QuickDeleteStr
- (NSString *)QuickDeleteStr: (NSString *)url;
// method: QuickDeleteStrAsync
- (CkoTask *)QuickDeleteStrAsync: (NSString *)url;
// method: QuickGet
- (NSData *)QuickGet: (NSString *)url;
// method: QuickGetAsync
- (CkoTask *)QuickGetAsync: (NSString *)url;
// method: QuickGetBd
- (BOOL)QuickGetBd: (NSString *)url 
	binData: (CkoBinData *)binData;
// method: QuickGetBdAsync
- (CkoTask *)QuickGetBdAsync: (NSString *)url 
	binData: (CkoBinData *)binData;
// method: QuickGetObj
- (CkoHttpResponse *)QuickGetObj: (NSString *)url;
// method: QuickGetObjAsync
- (CkoTask *)QuickGetObjAsync: (NSString *)url;
// method: QuickGetSb
- (BOOL)QuickGetSb: (NSString *)url 
	sbContent: (CkoStringBuilder *)sbContent;
// method: QuickGetSbAsync
- (CkoTask *)QuickGetSbAsync: (NSString *)url 
	sbContent: (CkoStringBuilder *)sbContent;
// method: QuickGetStr
- (NSString *)QuickGetStr: (NSString *)url;
// method: QuickGetStrAsync
- (CkoTask *)QuickGetStrAsync: (NSString *)url;
// method: QuickPutStr
- (NSString *)QuickPutStr: (NSString *)url;
// method: QuickPutStrAsync
- (CkoTask *)QuickPutStrAsync: (NSString *)url;
// method: RemoveQuickHeader
- (BOOL)RemoveQuickHeader: (NSString *)name;
// method: RemoveRequestHeader
- (void)RemoveRequestHeader: (NSString *)name;
// method: RenderGet
- (NSString *)RenderGet: (NSString *)url;
// method: ResumeDownload
- (BOOL)ResumeDownload: (NSString *)url 
	appendToPath: (NSString *)appendToPath;
// method: ResumeDownloadAsync
- (CkoTask *)ResumeDownloadAsync: (NSString *)url 
	appendToPath: (NSString *)appendToPath;
// method: ResumeDownloadBd
- (BOOL)ResumeDownloadBd: (NSString *)url 
	binData: (CkoBinData *)binData;
// method: ResumeDownloadBdAsync
- (CkoTask *)ResumeDownloadBdAsync: (NSString *)url 
	binData: (CkoBinData *)binData;
// method: S3_CreateBucket
- (BOOL)S3_CreateBucket: (NSString *)bucketName;
// method: S3_CreateBucketAsync
- (CkoTask *)S3_CreateBucketAsync: (NSString *)bucketName;
// method: S3_DeleteBucket
- (BOOL)S3_DeleteBucket: (NSString *)bucketName;
// method: S3_DeleteBucketAsync
- (CkoTask *)S3_DeleteBucketAsync: (NSString *)bucketName;
// method: S3_DeleteMultipleObjects
- (CkoHttpResponse *)S3_DeleteMultipleObjects: (NSString *)bucketName 
	objectNames: (CkoStringArray *)objectNames;
// method: S3_DeleteMultipleObjectsAsync
- (CkoTask *)S3_DeleteMultipleObjectsAsync: (NSString *)bucketName 
	objectNames: (CkoStringArray *)objectNames;
// method: S3_DeleteObject
- (BOOL)S3_DeleteObject: (NSString *)bucketName 
	objectName: (NSString *)objectName;
// method: S3_DeleteObjectAsync
- (CkoTask *)S3_DeleteObjectAsync: (NSString *)bucketName 
	objectName: (NSString *)objectName;
// method: S3_DownloadBytes
- (NSData *)S3_DownloadBytes: (NSString *)bucketName 
	objectName: (NSString *)objectName;
// method: S3_DownloadBytesAsync
- (CkoTask *)S3_DownloadBytesAsync: (NSString *)bucketName 
	objectName: (NSString *)objectName;
// method: S3_DownloadFile
- (BOOL)S3_DownloadFile: (NSString *)bucketName 
	objectName: (NSString *)objectName 
	localFilePath: (NSString *)localFilePath;
// method: S3_DownloadFileAsync
- (CkoTask *)S3_DownloadFileAsync: (NSString *)bucketName 
	objectName: (NSString *)objectName 
	localFilePath: (NSString *)localFilePath;
// method: S3_DownloadString
- (NSString *)S3_DownloadString: (NSString *)bucketName 
	objectName: (NSString *)objectName 
	charset: (NSString *)charset;
// method: S3_DownloadStringAsync
- (CkoTask *)S3_DownloadStringAsync: (NSString *)bucketName 
	objectName: (NSString *)objectName 
	charset: (NSString *)charset;
// method: S3_FileExists
- (NSNumber *)S3_FileExists: (NSString *)bucketName 
	objectName: (NSString *)objectName;
// method: S3_FileExistsAsync
- (CkoTask *)S3_FileExistsAsync: (NSString *)bucketName 
	objectName: (NSString *)objectName;
// method: S3_GenerateUrl
- (NSString *)S3_GenerateUrl: (NSString *)bucket 
	path: (NSString *)path 
	expire: (CkoDateTime *)expire;
// method: S3_GenerateUrlV4
- (NSString *)S3_GenerateUrlV4: (BOOL)useHttps 
	bucketName: (NSString *)bucketName 
	path: (NSString *)path 
	numSecondsValid: (NSNumber *)numSecondsValid 
	awsService: (NSString *)awsService;
// method: S3_ListBucketObjects
- (NSString *)S3_ListBucketObjects: (NSString *)bucketName;
// method: S3_ListBucketObjectsAsync
- (CkoTask *)S3_ListBucketObjectsAsync: (NSString *)bucketName;
// method: S3_ListBuckets
- (NSString *)S3_ListBuckets;
// method: S3_ListBucketsAsync
- (CkoTask *)S3_ListBucketsAsync;
// method: S3_UploadBytes
- (BOOL)S3_UploadBytes: (NSData *)objectContent 
	contentType: (NSString *)contentType 
	bucketName: (NSString *)bucketName 
	objectName: (NSString *)objectName;
// method: S3_UploadBytesAsync
- (CkoTask *)S3_UploadBytesAsync: (NSData *)objectContent 
	contentType: (NSString *)contentType 
	bucketName: (NSString *)bucketName 
	objectName: (NSString *)objectName;
// method: S3_UploadFile
- (BOOL)S3_UploadFile: (NSString *)localFilePath 
	contentType: (NSString *)contentType 
	bucketName: (NSString *)bucketName 
	ObjectName: (NSString *)ObjectName;
// method: S3_UploadFileAsync
- (CkoTask *)S3_UploadFileAsync: (NSString *)localFilePath 
	contentType: (NSString *)contentType 
	bucketName: (NSString *)bucketName 
	ObjectName: (NSString *)ObjectName;
// method: S3_UploadString
- (BOOL)S3_UploadString: (NSString *)objectContent 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	bucketName: (NSString *)bucketName 
	ObjectName: (NSString *)ObjectName;
// method: S3_UploadStringAsync
- (CkoTask *)S3_UploadStringAsync: (NSString *)objectContent 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	bucketName: (NSString *)bucketName 
	ObjectName: (NSString *)ObjectName;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetCookieXml
- (BOOL)SetCookieXml: (NSString *)domain 
	cookieXml: (NSString *)cookieXml;
// method: SetOAuthRsaKey
- (BOOL)SetOAuthRsaKey: (CkoPrivateKey *)privKey;
// method: SetPassword
- (BOOL)SetPassword: (CkoSecureString *)password;
// method: SetRequestHeader
- (void)SetRequestHeader: (NSString *)name 
	value: (NSString *)value;
// method: SetSecurePassword
- (BOOL)SetSecurePassword: (CkoSecureString *)password;
// method: SetSslClientCert
- (BOOL)SetSslClientCert: (CkoCert *)cert;
// method: SetSslClientCertPem
- (BOOL)SetSslClientCertPem: (NSString *)pemDataOrPath 
	pemPassword: (NSString *)pemPassword;
// method: SetSslClientCertPfx
- (BOOL)SetSslClientCertPfx: (NSString *)pfxPath 
	pfxPassword: (NSString *)pfxPassword;
// method: SetUrlVar
- (BOOL)SetUrlVar: (NSString *)name 
	value: (NSString *)value;
// method: SharePointOnlineAuth
- (BOOL)SharePointOnlineAuth: (NSString *)siteUrl 
	username: (NSString *)username 
	password: (CkoSecureString *)password 
	extraInfo: (CkoJsonObject *)extraInfo;
// method: SharePointOnlineAuthAsync
- (CkoTask *)SharePointOnlineAuthAsync: (NSString *)siteUrl 
	username: (NSString *)username 
	password: (CkoSecureString *)password 
	extraInfo: (CkoJsonObject *)extraInfo;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;
// method: SynchronousRequest
- (CkoHttpResponse *)SynchronousRequest: (NSString *)domain 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	req: (CkoHttpRequest *)req;
// method: SynchronousRequestAsync
- (CkoTask *)SynchronousRequestAsync: (NSString *)domain 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	req: (CkoHttpRequest *)req;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UrlDecode
- (NSString *)UrlDecode: (NSString *)str;
// method: UrlEncode
- (NSString *)UrlEncode: (NSString *)str;
// method: VerifyTimestampReply
- (NSNumber *)VerifyTimestampReply: (CkoBinData *)timestampReply 
	tsaCert: (CkoCert *)tsaCert;
// method: XmlRpc
- (NSString *)XmlRpc: (NSString *)urlEndpoint 
	xmlIn: (NSString *)xmlIn;
// method: XmlRpcAsync
- (CkoTask *)XmlRpcAsync: (NSString *)urlEndpoint 
	xmlIn: (NSString *)xmlIn;
// method: XmlRpcPut
- (NSString *)XmlRpcPut: (NSString *)urlEndpoint 
	xmlIn: (NSString *)xmlIn;
// method: XmlRpcPutAsync
- (CkoTask *)XmlRpcPutAsync: (NSString *)urlEndpoint 
	xmlIn: (NSString *)xmlIn;

@end
