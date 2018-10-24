// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Socket
// Wrapped Chilkat C++ class name =  CkSocket

@class CkoTask;
@class CkoCert;
@class CkoBinData;
@class CkoStringBuilder;
@class CkoSshKey;
@class CkoSsh;


@class CkoBaseProgress;

@interface CkoSocket : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *AcceptFailReason;
@property (nonatomic, readonly) BOOL AsyncAcceptFinished;
@property (nonatomic, readonly, copy) NSString *AsyncAcceptLog;
@property (nonatomic, readonly) BOOL AsyncAcceptSuccess;
@property (nonatomic, readonly) BOOL AsyncConnectFinished;
@property (nonatomic, readonly, copy) NSString *AsyncConnectLog;
@property (nonatomic, readonly) BOOL AsyncConnectSuccess;
@property (nonatomic, readonly) BOOL AsyncDnsFinished;
@property (nonatomic, readonly, copy) NSString *AsyncDnsLog;
@property (nonatomic, readonly, copy) NSString *AsyncDnsResult;
@property (nonatomic, readonly) BOOL AsyncDnsSuccess;
@property (nonatomic, readonly, copy) NSData *AsyncReceivedBytes;
@property (nonatomic, readonly, copy) NSString *AsyncReceivedString;
@property (nonatomic, readonly) BOOL AsyncReceiveFinished;
@property (nonatomic, readonly, copy) NSString *AsyncReceiveLog;
@property (nonatomic, readonly) BOOL AsyncReceiveSuccess;
@property (nonatomic, readonly) BOOL AsyncSendFinished;
@property (nonatomic, readonly, copy) NSString *AsyncSendLog;
@property (nonatomic, readonly) BOOL AsyncSendSuccess;
@property (nonatomic, copy) NSNumber *BandwidthThrottleDown;
@property (nonatomic, copy) NSNumber *BandwidthThrottleUp;
@property (nonatomic) BOOL BigEndian;
@property (nonatomic, copy) NSString *ClientIpAddress;
@property (nonatomic, copy) NSNumber *ClientPort;
@property (nonatomic, readonly, copy) NSNumber *ConnectFailReason;
@property (nonatomic, copy) NSNumber *DebugConnectDelayMs;
@property (nonatomic, copy) NSNumber *DebugDnsDelayMs;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSNumber *ElapsedSeconds;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, copy) NSString *HttpProxyAuthMethod;
@property (nonatomic, copy) NSString *HttpProxyDomain;
@property (nonatomic) BOOL HttpProxyForHttp;
@property (nonatomic, copy) NSString *HttpProxyHostname;
@property (nonatomic, copy) NSString *HttpProxyPassword;
@property (nonatomic, copy) NSNumber *HttpProxyPort;
@property (nonatomic, copy) NSString *HttpProxyUsername;
@property (nonatomic, readonly) BOOL IsConnected;
@property (nonatomic) BOOL KeepAlive;
@property (nonatomic) BOOL KeepSessionLog;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly) BOOL LastMethodFailed;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL ListenIpv6;
@property (nonatomic, readonly, copy) NSNumber *ListenPort;
@property (nonatomic, readonly, copy) NSString *LocalIpAddress;
@property (nonatomic, readonly, copy) NSNumber *LocalPort;
@property (nonatomic, copy) NSNumber *MaxReadIdleMs;
@property (nonatomic, copy) NSNumber *MaxSendIdleMs;
@property (nonatomic, readonly, copy) NSString *MyIpAddress;
@property (nonatomic, readonly, copy) NSNumber *NumReceivedClientCerts;
@property (nonatomic, readonly, copy) NSNumber *NumSocketsInSet;
@property (nonatomic, readonly, copy) NSNumber *NumSslAcceptableClientCAs;
@property (nonatomic, readonly, copy) NSNumber *ObjectId;
@property (nonatomic, copy) NSNumber *PercentDoneScale;
@property (nonatomic) BOOL PreferIpv6;
@property (nonatomic, copy) NSNumber *ReceivedCount;
@property (nonatomic, copy) NSNumber *ReceivedInt;
@property (nonatomic, readonly, copy) NSNumber *ReceiveFailReason;
@property (nonatomic, copy) NSNumber *ReceivePacketSize;
@property (nonatomic, readonly, copy) NSString *RemoteIpAddress;
@property (nonatomic, readonly, copy) NSNumber *RemotePort;
@property (nonatomic) BOOL RequireSslCertVerify;
@property (nonatomic, copy) NSNumber *SelectorIndex;
@property (nonatomic, copy) NSNumber *SelectorReadIndex;
@property (nonatomic, copy) NSNumber *SelectorWriteIndex;
@property (nonatomic, readonly, copy) NSNumber *SendFailReason;
@property (nonatomic, copy) NSNumber *SendPacketSize;
@property (nonatomic, readonly, copy) NSString *SessionLog;
@property (nonatomic, copy) NSString *SessionLogEncoding;
@property (nonatomic, copy) NSString *SocksHostname;
@property (nonatomic, copy) NSString *SocksPassword;
@property (nonatomic, copy) NSNumber *SocksPort;
@property (nonatomic, copy) NSString *SocksUsername;
@property (nonatomic, copy) NSNumber *SocksVersion;
@property (nonatomic, copy) NSNumber *SoRcvBuf;
@property (nonatomic) BOOL SoReuseAddr;
@property (nonatomic, copy) NSNumber *SoSndBuf;
@property (nonatomic) BOOL Ssl;
@property (nonatomic, copy) NSString *SslAllowedCiphers;
@property (nonatomic, copy) NSString *SslProtocol;
@property (nonatomic, copy) NSString *StringCharset;
@property (nonatomic) BOOL TcpNoDelay;
@property (nonatomic, readonly, copy) NSString *TlsCipherSuite;
@property (nonatomic, copy) NSString *TlsPinSet;
@property (nonatomic, readonly, copy) NSString *TlsVersion;
@property (nonatomic, copy) NSString *UserData;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AcceptNextConnection
- (CkoSocket *)AcceptNextConnection: (NSNumber *)maxWaitMs;
// method: AcceptNextConnectionAsync
- (CkoTask *)AcceptNextConnectionAsync: (NSNumber *)maxWaitMs;
// method: AddSslAcceptableClientCaDn
- (BOOL)AddSslAcceptableClientCaDn: (NSString *)certAuthDN;
// method: AsyncAcceptAbort
- (void)AsyncAcceptAbort;
// method: AsyncAcceptSocket
- (CkoSocket *)AsyncAcceptSocket;
// method: AsyncAcceptStart
- (BOOL)AsyncAcceptStart: (NSNumber *)maxWaitMs;
// method: AsyncConnectAbort
- (void)AsyncConnectAbort;
// method: AsyncConnectStart
- (BOOL)AsyncConnectStart: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: AsyncDnsAbort
- (void)AsyncDnsAbort;
// method: AsyncDnsStart
- (BOOL)AsyncDnsStart: (NSString *)hostname 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: AsyncReceiveAbort
- (void)AsyncReceiveAbort;
// method: AsyncReceiveBytes
- (BOOL)AsyncReceiveBytes;
// method: AsyncReceiveBytesN
- (BOOL)AsyncReceiveBytesN: (NSNumber *)numBytes;
// method: AsyncReceiveString
- (BOOL)AsyncReceiveString;
// method: AsyncReceiveToCRLF
- (BOOL)AsyncReceiveToCRLF;
// method: AsyncReceiveUntilMatch
- (BOOL)AsyncReceiveUntilMatch: (NSString *)matchStr;
// method: AsyncSendAbort
- (void)AsyncSendAbort;
// method: AsyncSendByteData
- (BOOL)AsyncSendByteData: (NSData *)data;
// method: AsyncSendBytes
- (BOOL)AsyncSendBytes: (NSData *)data;
// method: AsyncSendString
- (BOOL)AsyncSendString: (NSString *)str;
// method: BindAndListen
- (BOOL)BindAndListen: (NSNumber *)port 
	backlog: (NSNumber *)backlog;
// method: BindAndListenAsync
- (CkoTask *)BindAndListenAsync: (NSNumber *)port 
	backlog: (NSNumber *)backlog;
// method: BindAndListenPortRange
- (NSNumber *)BindAndListenPortRange: (NSNumber *)beginPort 
	endPort: (NSNumber *)endPort 
	backLog: (NSNumber *)backLog;
// method: BindAndListenPortRangeAsync
- (CkoTask *)BindAndListenPortRangeAsync: (NSNumber *)beginPort 
	endPort: (NSNumber *)endPort 
	backLog: (NSNumber *)backLog;
// method: BuildHttpGetRequest
- (NSString *)BuildHttpGetRequest: (NSString *)url;
// method: CheckWriteable
- (NSNumber *)CheckWriteable: (NSNumber *)maxWaitMs;
// method: CheckWriteableAsync
- (CkoTask *)CheckWriteableAsync: (NSNumber *)maxWaitMs;
// method: ClearSessionLog
- (void)ClearSessionLog;
// method: CloneSocket
- (CkoSocket *)CloneSocket;
// method: Close
- (BOOL)Close: (NSNumber *)maxWaitMs;
// method: CloseAsync
- (CkoTask *)CloseAsync: (NSNumber *)maxWaitMs;
// method: Connect
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: ConnectAsync
- (CkoTask *)ConnectAsync: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: ConvertFromSsl
- (BOOL)ConvertFromSsl;
// method: ConvertFromSslAsync
- (CkoTask *)ConvertFromSslAsync;
// method: ConvertToSsl
- (BOOL)ConvertToSsl;
// method: ConvertToSslAsync
- (CkoTask *)ConvertToSslAsync;
// method: DnsCacheClear
- (void)DnsCacheClear;
// method: DnsLookup
- (NSString *)DnsLookup: (NSString *)hostname 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: DnsLookupAsync
- (CkoTask *)DnsLookupAsync: (NSString *)hostname 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: GetMyCert
- (CkoCert *)GetMyCert;
// method: GetReceivedClientCert
- (CkoCert *)GetReceivedClientCert: (NSNumber *)index;
// method: GetSslAcceptableClientCaDn
- (NSString *)GetSslAcceptableClientCaDn: (NSNumber *)index;
// method: GetSslServerCert
- (CkoCert *)GetSslServerCert;
// method: InitSslServer
- (BOOL)InitSslServer: (CkoCert *)cert;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: LoadTaskResult
- (BOOL)LoadTaskResult: (CkoTask *)task;
// method: PollDataAvailable
- (BOOL)PollDataAvailable;
// method: PollDataAvailableAsync
- (CkoTask *)PollDataAvailableAsync;
// method: ReceiveBd
- (BOOL)ReceiveBd: (CkoBinData *)binData;
// method: ReceiveBdAsync
- (CkoTask *)ReceiveBdAsync: (CkoBinData *)binData;
// method: ReceiveBdN
- (BOOL)ReceiveBdN: (NSNumber *)numBytes 
	binData: (CkoBinData *)binData;
// method: ReceiveBdNAsync
- (CkoTask *)ReceiveBdNAsync: (NSNumber *)numBytes 
	binData: (CkoBinData *)binData;
// method: ReceiveByte
- (BOOL)ReceiveByte: (BOOL)bUnsigned;
// method: ReceiveByteAsync
- (CkoTask *)ReceiveByteAsync: (BOOL)bUnsigned;
// method: ReceiveBytes
- (NSData *)ReceiveBytes;
// method: ReceiveBytesAsync
- (CkoTask *)ReceiveBytesAsync;
// method: ReceiveBytesENC
- (NSString *)ReceiveBytesENC: (NSString *)encodingAlg;
// method: ReceiveBytesENCAsync
- (CkoTask *)ReceiveBytesENCAsync: (NSString *)encodingAlg;
// method: ReceiveBytesN
- (NSData *)ReceiveBytesN: (NSNumber *)numBytes;
// method: ReceiveBytesNAsync
- (CkoTask *)ReceiveBytesNAsync: (NSNumber *)numBytes;
// method: ReceiveBytesToFile
- (BOOL)ReceiveBytesToFile: (NSString *)appendPath;
// method: ReceiveBytesToFileAsync
- (CkoTask *)ReceiveBytesToFileAsync: (NSString *)appendPath;
// method: ReceiveCount
- (NSNumber *)ReceiveCount;
// method: ReceiveCountAsync
- (CkoTask *)ReceiveCountAsync;
// method: ReceiveInt16
- (BOOL)ReceiveInt16: (BOOL)bigEndian 
	bUnsigned: (BOOL)bUnsigned;
// method: ReceiveInt16Async
- (CkoTask *)ReceiveInt16Async: (BOOL)bigEndian 
	bUnsigned: (BOOL)bUnsigned;
// method: ReceiveInt32
- (BOOL)ReceiveInt32: (BOOL)bigEndian;
// method: ReceiveInt32Async
- (CkoTask *)ReceiveInt32Async: (BOOL)bigEndian;
// method: ReceiveNBytesENC
- (NSString *)ReceiveNBytesENC: (NSNumber *)numBytes 
	encodingAlg: (NSString *)encodingAlg;
// method: ReceiveNBytesENCAsync
- (CkoTask *)ReceiveNBytesENCAsync: (NSNumber *)numBytes 
	encodingAlg: (NSString *)encodingAlg;
// method: ReceiveSb
- (BOOL)ReceiveSb: (CkoStringBuilder *)sb;
// method: ReceiveSbAsync
- (CkoTask *)ReceiveSbAsync: (CkoStringBuilder *)sb;
// method: ReceiveString
- (NSString *)ReceiveString;
// method: ReceiveStringAsync
- (CkoTask *)ReceiveStringAsync;
// method: ReceiveStringMaxN
- (NSString *)ReceiveStringMaxN: (NSNumber *)maxBytes;
// method: ReceiveStringMaxNAsync
- (CkoTask *)ReceiveStringMaxNAsync: (NSNumber *)maxBytes;
// method: ReceiveStringUntilByte
- (NSString *)ReceiveStringUntilByte: (NSNumber *)byteValue;
// method: ReceiveStringUntilByteAsync
- (CkoTask *)ReceiveStringUntilByteAsync: (NSNumber *)byteValue;
// method: ReceiveToCRLF
- (NSString *)ReceiveToCRLF;
// method: ReceiveToCRLFAsync
- (CkoTask *)ReceiveToCRLFAsync;
// method: ReceiveUntilByte
- (NSData *)ReceiveUntilByte: (NSNumber *)byteValue;
// method: ReceiveUntilByteAsync
- (CkoTask *)ReceiveUntilByteAsync: (NSNumber *)byteValue;
// method: ReceiveUntilMatch
- (NSString *)ReceiveUntilMatch: (NSString *)matchStr;
// method: ReceiveUntilMatchAsync
- (CkoTask *)ReceiveUntilMatchAsync: (NSString *)matchStr;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SelectForReading
- (NSNumber *)SelectForReading: (NSNumber *)timeoutMs;
// method: SelectForReadingAsync
- (CkoTask *)SelectForReadingAsync: (NSNumber *)timeoutMs;
// method: SelectForWriting
- (NSNumber *)SelectForWriting: (NSNumber *)timeoutMs;
// method: SelectForWritingAsync
- (CkoTask *)SelectForWritingAsync: (NSNumber *)timeoutMs;
// method: SendBd
- (BOOL)SendBd: (CkoBinData *)binData 
	offset: (NSNumber *)offset 
	numBytes: (NSNumber *)numBytes;
// method: SendBdAsync
- (CkoTask *)SendBdAsync: (CkoBinData *)binData 
	offset: (NSNumber *)offset 
	numBytes: (NSNumber *)numBytes;
// method: SendByte
- (BOOL)SendByte: (NSNumber *)value;
// method: SendByteAsync
- (CkoTask *)SendByteAsync: (NSNumber *)value;
// method: SendBytes
- (BOOL)SendBytes: (NSData *)data;
// method: SendBytesAsync
- (CkoTask *)SendBytesAsync: (NSData *)data;
// method: SendBytesENC
- (BOOL)SendBytesENC: (NSString *)encodedBytes 
	encodingAlg: (NSString *)encodingAlg;
// method: SendBytesENCAsync
- (CkoTask *)SendBytesENCAsync: (NSString *)encodedBytes 
	encodingAlg: (NSString *)encodingAlg;
// method: SendCount
- (BOOL)SendCount: (NSNumber *)byteCount;
// method: SendCountAsync
- (CkoTask *)SendCountAsync: (NSNumber *)byteCount;
// method: SendInt16
- (BOOL)SendInt16: (NSNumber *)value 
	bigEndian: (BOOL)bigEndian;
// method: SendInt16Async
- (CkoTask *)SendInt16Async: (NSNumber *)value 
	bigEndian: (BOOL)bigEndian;
// method: SendInt32
- (BOOL)SendInt32: (NSNumber *)value 
	bigEndian: (BOOL)bigEndian;
// method: SendInt32Async
- (CkoTask *)SendInt32Async: (NSNumber *)value 
	bigEndian: (BOOL)bigEndian;
// method: SendSb
- (BOOL)SendSb: (CkoStringBuilder *)sb;
// method: SendSbAsync
- (CkoTask *)SendSbAsync: (CkoStringBuilder *)sb;
// method: SendString
- (BOOL)SendString: (NSString *)str;
// method: SendStringAsync
- (CkoTask *)SendStringAsync: (NSString *)str;
// method: SendWakeOnLan
- (BOOL)SendWakeOnLan: (NSString *)macAddress 
	port: (NSNumber *)port 
	ipBroadcastAddr: (NSString *)ipBroadcastAddr;
// method: SetSslClientCert
- (BOOL)SetSslClientCert: (CkoCert *)cert;
// method: SetSslClientCertPem
- (BOOL)SetSslClientCertPem: (NSString *)pemDataOrPath 
	pemPassword: (NSString *)pemPassword;
// method: SetSslClientCertPfx
- (BOOL)SetSslClientCertPfx: (NSString *)pfxPath 
	pfxPassword: (NSString *)pfxPassword;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;
// method: SshAuthenticatePk
- (BOOL)SshAuthenticatePk: (NSString *)sshLogin 
	privateKey: (CkoSshKey *)privateKey;
// method: SshAuthenticatePkAsync
- (CkoTask *)SshAuthenticatePkAsync: (NSString *)sshLogin 
	privateKey: (CkoSshKey *)privateKey;
// method: SshAuthenticatePw
- (BOOL)SshAuthenticatePw: (NSString *)sshLogin 
	sshPassword: (NSString *)sshPassword;
// method: SshAuthenticatePwAsync
- (CkoTask *)SshAuthenticatePwAsync: (NSString *)sshLogin 
	sshPassword: (NSString *)sshPassword;
// method: SshCloseTunnel
- (BOOL)SshCloseTunnel;
// method: SshCloseTunnelAsync
- (CkoTask *)SshCloseTunnelAsync;
// method: SshOpenChannel
- (CkoSocket *)SshOpenChannel: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: SshOpenChannelAsync
- (CkoTask *)SshOpenChannelAsync: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: SshOpenTunnel
- (BOOL)SshOpenTunnel: (NSString *)sshHostname 
	sshPort: (NSNumber *)sshPort;
// method: SshOpenTunnelAsync
- (CkoTask *)SshOpenTunnelAsync: (NSString *)sshHostname 
	sshPort: (NSNumber *)sshPort;
// method: StartTiming
- (void)StartTiming;
// method: TakeSocket
- (BOOL)TakeSocket: (CkoSocket *)sock;
// method: TlsRenegotiate
- (BOOL)TlsRenegotiate;
// method: TlsRenegotiateAsync
- (CkoTask *)TlsRenegotiateAsync;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)code;
// method: UseSsh
- (BOOL)UseSsh: (CkoSsh *)ssh;

@end
