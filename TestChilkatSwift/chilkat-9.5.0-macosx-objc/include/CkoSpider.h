// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Spider
// Wrapped Chilkat C++ class name =  CkSpider

@class CkoTask;


@class CkoBaseProgress;

@interface CkoSpider : NSObject {

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
@property (nonatomic) BOOL AvoidHttps;
@property (nonatomic, copy) NSString *CacheDir;
@property (nonatomic) BOOL ChopAtQuery;
@property (nonatomic, copy) NSNumber *ConnectTimeout;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *Domain;
@property (nonatomic) BOOL FetchFromCache;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly) BOOL LastFromCache;
@property (nonatomic, readonly, copy) NSString *LastHtml;
@property (nonatomic, readonly, copy) NSString *LastHtmlDescription;
@property (nonatomic, readonly, copy) NSString *LastHtmlKeywords;
@property (nonatomic, readonly, copy) NSString *LastHtmlTitle;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSDate *LastModDate;
@property (nonatomic, readonly, copy) NSString *LastModDateStr;
@property (nonatomic, readonly, copy) NSString *LastUrl;
@property (nonatomic, copy) NSNumber *MaxResponseSize;
@property (nonatomic, copy) NSNumber *MaxUrlLen;
@property (nonatomic, readonly, copy) NSNumber *NumAvoidPatterns;
@property (nonatomic, readonly, copy) NSNumber *NumFailed;
@property (nonatomic, readonly, copy) NSNumber *NumOutboundLinks;
@property (nonatomic, readonly, copy) NSNumber *NumSpidered;
@property (nonatomic, readonly, copy) NSNumber *NumUnspidered;
@property (nonatomic) BOOL PreferIpv6;
@property (nonatomic, copy) NSString *ProxyDomain;
@property (nonatomic, copy) NSString *ProxyLogin;
@property (nonatomic, copy) NSString *ProxyPassword;
@property (nonatomic, copy) NSNumber *ProxyPort;
@property (nonatomic, copy) NSNumber *ReadTimeout;
@property (nonatomic) BOOL UpdateCache;
@property (nonatomic, copy) NSString *UserAgent;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, copy) NSNumber *WindDownCount;
// method: AddAvoidOutboundLinkPattern
- (void)AddAvoidOutboundLinkPattern: (NSString *)pattern;
// method: AddAvoidPattern
- (void)AddAvoidPattern: (NSString *)pattern;
// method: AddMustMatchPattern
- (void)AddMustMatchPattern: (NSString *)pattern;
// method: AddUnspidered
- (void)AddUnspidered: (NSString *)url;
// method: CanonicalizeUrl
- (NSString *)CanonicalizeUrl: (NSString *)url;
// method: ClearFailedUrls
- (void)ClearFailedUrls;
// method: ClearOutboundLinks
- (void)ClearOutboundLinks;
// method: ClearSpideredUrls
- (void)ClearSpideredUrls;
// method: CrawlNext
- (BOOL)CrawlNext;
// method: CrawlNextAsync
- (CkoTask *)CrawlNextAsync;
// method: FetchRobotsText
- (NSString *)FetchRobotsText;
// method: FetchRobotsTextAsync
- (CkoTask *)FetchRobotsTextAsync;
// method: GetAvoidPattern
- (NSString *)GetAvoidPattern: (NSNumber *)index;
// method: GetBaseDomain
- (NSString *)GetBaseDomain: (NSString *)domain;
// method: GetFailedUrl
- (NSString *)GetFailedUrl: (NSNumber *)index;
// method: GetOutboundLink
- (NSString *)GetOutboundLink: (NSNumber *)index;
// method: GetSpideredUrl
- (NSString *)GetSpideredUrl: (NSNumber *)index;
// method: GetUnspideredUrl
- (NSString *)GetUnspideredUrl: (NSNumber *)index;
// method: GetUrlDomain
- (NSString *)GetUrlDomain: (NSString *)url;
// method: Initialize
- (void)Initialize: (NSString *)domain;
// method: RecrawlLast
- (BOOL)RecrawlLast;
// method: RecrawlLastAsync
- (CkoTask *)RecrawlLastAsync;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SkipUnspidered
- (void)SkipUnspidered: (NSNumber *)index;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;

@end
