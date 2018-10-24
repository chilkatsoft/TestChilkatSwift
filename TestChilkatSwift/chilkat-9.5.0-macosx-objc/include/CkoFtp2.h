// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Ftp2
// Wrapped Chilkat C++ class name =  CkFtp2

@class CkoTask;
@class CkoDateTime;
@class CkoBinData;
@class CkoStringBuilder;
@class CkoStream;
@class CkoCert;
@class CkoSecureString;


@class CkoFtp2Progress;

@interface CkoFtp2 : NSObject {

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
- (void)setEventCallbackObject: (CkoFtp2Progress *)eventObj;

@property (nonatomic) BOOL AbortCurrent;
@property (nonatomic, copy) NSString *Account;
@property (nonatomic, copy) NSNumber *ActivePortRangeEnd;
@property (nonatomic, copy) NSNumber *ActivePortRangeStart;
@property (nonatomic, copy) NSNumber *AllocateSize;
@property (nonatomic) BOOL AllowMlsd;
@property (nonatomic, readonly, copy) NSNumber *AsyncBytesReceived;
@property (nonatomic, readonly, copy) NSNumber *AsyncBytesReceived64;
@property (nonatomic, readonly, copy) NSString *AsyncBytesReceivedStr;
@property (nonatomic, readonly, copy) NSNumber *AsyncBytesSent;
@property (nonatomic, readonly, copy) NSNumber *AsyncBytesSent64;
@property (nonatomic, readonly, copy) NSString *AsyncBytesSentStr;
@property (nonatomic, readonly) BOOL AsyncFinished;
@property (nonatomic, readonly, copy) NSString *AsyncLog;
@property (nonatomic, readonly, copy) NSNumber *AsyncPercentDone;
@property (nonatomic, readonly) BOOL AsyncSuccess;
@property (nonatomic) BOOL AuthSsl;
@property (nonatomic) BOOL AuthTls;
@property (nonatomic) BOOL AutoFeat;
@property (nonatomic) BOOL AutoFix;
@property (nonatomic) BOOL AutoGetSizeForProgress;
@property (nonatomic) BOOL AutoOptsUtf8;
@property (nonatomic) BOOL AutoSetUseEpsv;
@property (nonatomic) BOOL AutoSyst;
@property (nonatomic) BOOL AutoXcrc;
@property (nonatomic, copy) NSNumber *BandwidthThrottleDown;
@property (nonatomic, copy) NSNumber *BandwidthThrottleUp;
@property (nonatomic, copy) NSString *ClientIpAddress;
@property (nonatomic, copy) NSString *CommandCharset;
@property (nonatomic, readonly, copy) NSNumber *ConnectFailReason;
@property (nonatomic, copy) NSNumber *ConnectTimeout;
@property (nonatomic, readonly) BOOL ConnectVerified;
@property (nonatomic, copy) NSNumber *CrlfMode;
@property (nonatomic, copy) NSString *DataProtection;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSString *DirListingCharset;
@property (nonatomic, readonly, copy) NSNumber *DownloadTransferRate;
@property (nonatomic, copy) NSString *ForcePortIpAddress;
@property (nonatomic, readonly, copy) NSString *Greeting;
@property (nonatomic, readonly) BOOL HasModeZ;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, copy) NSString *Hostname;
@property (nonatomic, copy) NSString *HttpProxyAuthMethod;
@property (nonatomic, copy) NSString *HttpProxyDomain;
@property (nonatomic, copy) NSString *HttpProxyHostname;
@property (nonatomic, copy) NSString *HttpProxyPassword;
@property (nonatomic, copy) NSNumber *HttpProxyPort;
@property (nonatomic, copy) NSString *HttpProxyUsername;
@property (nonatomic, copy) NSNumber *IdleTimeoutMs;
@property (nonatomic, readonly) BOOL IsConnected;
@property (nonatomic) BOOL KeepSessionLog;
@property (nonatomic) BOOL LargeFileMeasures;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSString *LastReply;
@property (nonatomic, copy) NSString *ListPattern;
@property (nonatomic, readonly) BOOL LoginVerified;
@property (nonatomic, readonly, copy) NSNumber *NumFilesAndDirs;
@property (nonatomic, readonly) BOOL PartialTransfer;
@property (nonatomic) BOOL Passive;
@property (nonatomic) BOOL PassiveUseHostAddr;
@property (nonatomic, copy) NSString *Password;
@property (nonatomic, copy) NSNumber *PercentDoneScale;
@property (nonatomic, copy) NSNumber *Port;
@property (nonatomic) BOOL PreferIpv6;
@property (nonatomic) BOOL PreferNlst;
@property (nonatomic, copy) NSNumber *ProgressMonSize;
@property (nonatomic, copy) NSNumber *ProgressMonSize64;
@property (nonatomic, copy) NSString *ProxyHostname;
@property (nonatomic, copy) NSNumber *ProxyMethod;
@property (nonatomic, copy) NSString *ProxyPassword;
@property (nonatomic, copy) NSNumber *ProxyPort;
@property (nonatomic, copy) NSString *ProxyUsername;
@property (nonatomic, copy) NSNumber *ReadTimeout;
@property (nonatomic) BOOL RequireSslCertVerify;
@property (nonatomic) BOOL RestartNext;
@property (nonatomic, copy) NSNumber *SendBufferSize;
@property (nonatomic, readonly, copy) NSString *SessionLog;
@property (nonatomic) BOOL SkipFinalReply;
@property (nonatomic, copy) NSString *SocksHostname;
@property (nonatomic, copy) NSString *SocksPassword;
@property (nonatomic, copy) NSNumber *SocksPort;
@property (nonatomic, copy) NSString *SocksUsername;
@property (nonatomic, copy) NSNumber *SocksVersion;
@property (nonatomic, copy) NSNumber *SoRcvBuf;
@property (nonatomic, copy) NSNumber *SoSndBuf;
@property (nonatomic) BOOL Ssl;
@property (nonatomic, copy) NSString *SslAllowedCiphers;
@property (nonatomic, copy) NSString *SslProtocol;
@property (nonatomic, readonly) BOOL SslServerCertVerified;
@property (nonatomic, copy) NSString *SyncedFiles;
@property (nonatomic, copy) NSString *SyncMustMatch;
@property (nonatomic, copy) NSString *SyncMustNotMatch;
@property (nonatomic, readonly, copy) NSString *SyncPreview;
@property (nonatomic, readonly, copy) NSString *TlsCipherSuite;
@property (nonatomic, copy) NSString *TlsPinSet;
@property (nonatomic, readonly, copy) NSString *TlsVersion;
@property (nonatomic, readonly, copy) NSNumber *UploadTransferRate;
@property (nonatomic) BOOL UseEpsv;
@property (nonatomic, copy) NSString *Username;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AppendFile
- (BOOL)AppendFile: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: AppendFileAsync
- (CkoTask *)AppendFileAsync: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: AppendFileFromBinaryData
- (BOOL)AppendFileFromBinaryData: (NSString *)remoteFilename 
	binaryData: (NSData *)binaryData;
// method: AppendFileFromBinaryDataAsync
- (CkoTask *)AppendFileFromBinaryDataAsync: (NSString *)remoteFilename 
	binaryData: (NSData *)binaryData;
// method: AppendFileFromTextData
- (BOOL)AppendFileFromTextData: (NSString *)remoteFilename 
	textData: (NSString *)textData 
	charset: (NSString *)charset;
// method: AppendFileFromTextDataAsync
- (CkoTask *)AppendFileFromTextDataAsync: (NSString *)remoteFilename 
	textData: (NSString *)textData 
	charset: (NSString *)charset;
// method: AsyncAbort
- (void)AsyncAbort;
// method: AsyncAppendFileStart
- (BOOL)AsyncAppendFileStart: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: AsyncGetFileStart
- (BOOL)AsyncGetFileStart: (NSString *)remoteFilename 
	localFilename: (NSString *)localFilename;
// method: AsyncPutFileStart
- (BOOL)AsyncPutFileStart: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: ChangeRemoteDir
- (BOOL)ChangeRemoteDir: (NSString *)relativeDirPath;
// method: ChangeRemoteDirAsync
- (CkoTask *)ChangeRemoteDirAsync: (NSString *)relativeDirPath;
// method: CheckConnection
- (BOOL)CheckConnection;
// method: CheckConnectionAsync
- (CkoTask *)CheckConnectionAsync;
// method: ClearControlChannel
- (BOOL)ClearControlChannel;
// method: ClearControlChannelAsync
- (CkoTask *)ClearControlChannelAsync;
// method: ClearDirCache
- (void)ClearDirCache;
// method: ClearSessionLog
- (void)ClearSessionLog;
// method: Connect
- (BOOL)Connect;
// method: ConnectAsync
- (CkoTask *)ConnectAsync;
// method: ConnectOnly
- (BOOL)ConnectOnly;
// method: ConnectOnlyAsync
- (CkoTask *)ConnectOnlyAsync;
// method: ConvertToTls
- (BOOL)ConvertToTls;
// method: ConvertToTlsAsync
- (CkoTask *)ConvertToTlsAsync;
// method: CreatePlan
- (NSString *)CreatePlan: (NSString *)localDir;
// method: CreatePlanAsync
- (CkoTask *)CreatePlanAsync: (NSString *)localDir;
// method: CreateRemoteDir
- (BOOL)CreateRemoteDir: (NSString *)dir;
// method: CreateRemoteDirAsync
- (CkoTask *)CreateRemoteDirAsync: (NSString *)dir;
// method: DeleteMatching
- (NSNumber *)DeleteMatching: (NSString *)remotePattern;
// method: DeleteMatchingAsync
- (CkoTask *)DeleteMatchingAsync: (NSString *)remotePattern;
// method: DeleteRemoteFile
- (BOOL)DeleteRemoteFile: (NSString *)filename;
// method: DeleteRemoteFileAsync
- (CkoTask *)DeleteRemoteFileAsync: (NSString *)filename;
// method: DeleteTree
- (BOOL)DeleteTree;
// method: DeleteTreeAsync
- (CkoTask *)DeleteTreeAsync;
// method: DetermineProxyMethod
- (NSNumber *)DetermineProxyMethod;
// method: DetermineProxyMethodAsync
- (CkoTask *)DetermineProxyMethodAsync;
// method: DetermineSettings
- (NSString *)DetermineSettings;
// method: DetermineSettingsAsync
- (CkoTask *)DetermineSettingsAsync;
// method: DirTreeXml
- (NSString *)DirTreeXml;
// method: DirTreeXmlAsync
- (CkoTask *)DirTreeXmlAsync;
// method: Disconnect
- (BOOL)Disconnect;
// method: DisconnectAsync
- (CkoTask *)DisconnectAsync;
// method: DownloadTree
- (BOOL)DownloadTree: (NSString *)localRoot;
// method: DownloadTreeAsync
- (CkoTask *)DownloadTreeAsync: (NSString *)localRoot;
// method: Feat
- (NSString *)Feat;
// method: FeatAsync
- (CkoTask *)FeatAsync;
// method: GetCreateDt
- (CkoDateTime *)GetCreateDt: (NSNumber *)index;
// method: GetCreateDtAsync
- (CkoTask *)GetCreateDtAsync: (NSNumber *)index;
// method: GetCreateDtByName
- (CkoDateTime *)GetCreateDtByName: (NSString *)filename;
// method: GetCreateDtByNameAsync
- (CkoTask *)GetCreateDtByNameAsync: (NSString *)filename;
// method: GetCreateTime
- (NSDate *)GetCreateTime: (NSNumber *)index;
// method: GetCreateTimeByName
- (NSDate *)GetCreateTimeByName: (NSString *)filename;
// method: GetCreateTimeByNameStr
- (NSString *)GetCreateTimeByNameStr: (NSString *)filename;
// method: GetCreateTimeByNameStrAsync
- (CkoTask *)GetCreateTimeByNameStrAsync: (NSString *)filename;
// method: GetCreateTimeStr
- (NSString *)GetCreateTimeStr: (NSNumber *)index;
// method: GetCreateTimeStrAsync
- (CkoTask *)GetCreateTimeStrAsync: (NSNumber *)index;
// method: GetCurrentRemoteDir
- (NSString *)GetCurrentRemoteDir;
// method: GetCurrentRemoteDirAsync
- (CkoTask *)GetCurrentRemoteDirAsync;
// method: GetDirCount
- (NSNumber *)GetDirCount;
// method: GetDirCountAsync
- (CkoTask *)GetDirCountAsync;
// method: GetFile
- (BOOL)GetFile: (NSString *)remoteFilename 
	localPath: (NSString *)localPath;
// method: GetFileAsync
- (CkoTask *)GetFileAsync: (NSString *)remoteFilename 
	localPath: (NSString *)localPath;
// method: GetFileBd
- (BOOL)GetFileBd: (NSString *)remoteFilePath 
	binData: (CkoBinData *)binData;
// method: GetFileBdAsync
- (CkoTask *)GetFileBdAsync: (NSString *)remoteFilePath 
	binData: (CkoBinData *)binData;
// method: GetFilename
- (NSString *)GetFilename: (NSNumber *)index;
// method: GetFilenameAsync
- (CkoTask *)GetFilenameAsync: (NSNumber *)index;
// method: GetFileSb
- (BOOL)GetFileSb: (NSString *)remoteFilePath 
	charset: (NSString *)charset 
	sb: (CkoStringBuilder *)sb;
// method: GetFileSbAsync
- (CkoTask *)GetFileSbAsync: (NSString *)remoteFilePath 
	charset: (NSString *)charset 
	sb: (CkoStringBuilder *)sb;
// method: GetFileToStream
- (BOOL)GetFileToStream: (NSString *)remoteFilePath 
	toStream: (CkoStream *)toStream;
// method: GetFileToStreamAsync
- (CkoTask *)GetFileToStreamAsync: (NSString *)remoteFilePath 
	toStream: (CkoStream *)toStream;
// method: GetGroup
- (NSString *)GetGroup: (NSNumber *)index;
// method: GetGroupAsync
- (CkoTask *)GetGroupAsync: (NSNumber *)index;
// method: GetIsDirectory
- (BOOL)GetIsDirectory: (NSNumber *)index;
// method: GetIsDirectoryAsync
- (CkoTask *)GetIsDirectoryAsync: (NSNumber *)index;
// method: GetIsSymbolicLink
- (BOOL)GetIsSymbolicLink: (NSNumber *)index;
// method: GetIsSymbolicLinkAsync
- (CkoTask *)GetIsSymbolicLinkAsync: (NSNumber *)index;
// method: GetLastAccessDt
- (CkoDateTime *)GetLastAccessDt: (NSNumber *)index;
// method: GetLastAccessDtAsync
- (CkoTask *)GetLastAccessDtAsync: (NSNumber *)index;
// method: GetLastAccessDtByName
- (CkoDateTime *)GetLastAccessDtByName: (NSString *)filename;
// method: GetLastAccessDtByNameAsync
- (CkoTask *)GetLastAccessDtByNameAsync: (NSString *)filename;
// method: GetLastAccessTime
- (NSDate *)GetLastAccessTime: (NSNumber *)index;
// method: GetLastAccessTimeByName
- (NSDate *)GetLastAccessTimeByName: (NSString *)filename;
// method: GetLastAccessTimeByNameStr
- (NSString *)GetLastAccessTimeByNameStr: (NSString *)filename;
// method: GetLastAccessTimeByNameStrAsync
- (CkoTask *)GetLastAccessTimeByNameStrAsync: (NSString *)filename;
// method: GetLastAccessTimeStr
- (NSString *)GetLastAccessTimeStr: (NSNumber *)index;
// method: GetLastAccessTimeStrAsync
- (CkoTask *)GetLastAccessTimeStrAsync: (NSNumber *)index;
// method: GetLastModDt
- (CkoDateTime *)GetLastModDt: (NSNumber *)index;
// method: GetLastModDtAsync
- (CkoTask *)GetLastModDtAsync: (NSNumber *)index;
// method: GetLastModDtByName
- (CkoDateTime *)GetLastModDtByName: (NSString *)filename;
// method: GetLastModDtByNameAsync
- (CkoTask *)GetLastModDtByNameAsync: (NSString *)filename;
// method: GetLastModifiedTime
- (NSDate *)GetLastModifiedTime: (NSNumber *)index;
// method: GetLastModifiedTimeByName
- (NSDate *)GetLastModifiedTimeByName: (NSString *)filename;
// method: GetLastModifiedTimeByNameStr
- (NSString *)GetLastModifiedTimeByNameStr: (NSString *)filename;
// method: GetLastModifiedTimeByNameStrAsync
- (CkoTask *)GetLastModifiedTimeByNameStrAsync: (NSString *)filename;
// method: GetLastModifiedTimeStr
- (NSString *)GetLastModifiedTimeStr: (NSNumber *)index;
// method: GetLastModifiedTimeStrAsync
- (CkoTask *)GetLastModifiedTimeStrAsync: (NSNumber *)index;
// method: GetOwner
- (NSString *)GetOwner: (NSNumber *)index;
// method: GetOwnerAsync
- (CkoTask *)GetOwnerAsync: (NSNumber *)index;
// method: GetPermissions
- (NSString *)GetPermissions: (NSNumber *)index;
// method: GetPermissionsAsync
- (CkoTask *)GetPermissionsAsync: (NSNumber *)index;
// method: GetPermType
- (NSString *)GetPermType: (NSNumber *)index;
// method: GetPermTypeAsync
- (CkoTask *)GetPermTypeAsync: (NSNumber *)index;
// method: GetRemoteFileBinaryData
- (NSData *)GetRemoteFileBinaryData: (NSString *)remoteFilename;
// method: GetRemoteFileBinaryDataAsync
- (CkoTask *)GetRemoteFileBinaryDataAsync: (NSString *)remoteFilename;
// method: GetRemoteFileTextC
- (NSString *)GetRemoteFileTextC: (NSString *)remoteFilename 
	charset: (NSString *)charset;
// method: GetRemoteFileTextCAsync
- (CkoTask *)GetRemoteFileTextCAsync: (NSString *)remoteFilename 
	charset: (NSString *)charset;
// method: GetRemoteFileTextData
- (NSString *)GetRemoteFileTextData: (NSString *)remoteFilename;
// method: GetRemoteFileTextDataAsync
- (CkoTask *)GetRemoteFileTextDataAsync: (NSString *)remoteFilename;
// method: GetSize
- (NSNumber *)GetSize: (NSNumber *)index;
// method: GetSizeAsync
- (CkoTask *)GetSizeAsync: (NSNumber *)index;
// method: GetSize64
- (NSNumber *)GetSize64: (NSNumber *)index;
// method: GetSizeByName
- (NSNumber *)GetSizeByName: (NSString *)filname;
// method: GetSizeByNameAsync
- (CkoTask *)GetSizeByNameAsync: (NSString *)filname;
// method: GetSizeByName64
- (NSNumber *)GetSizeByName64: (NSString *)filename;
// method: GetSizeStr
- (NSString *)GetSizeStr: (NSNumber *)index;
// method: GetSizeStrAsync
- (CkoTask *)GetSizeStrAsync: (NSNumber *)index;
// method: GetSizeStrByName
- (NSString *)GetSizeStrByName: (NSString *)filename;
// method: GetSizeStrByNameAsync
- (CkoTask *)GetSizeStrByNameAsync: (NSString *)filename;
// method: GetSslServerCert
- (CkoCert *)GetSslServerCert;
// method: GetTextDirListing
- (NSString *)GetTextDirListing: (NSString *)pattern;
// method: GetTextDirListingAsync
- (CkoTask *)GetTextDirListingAsync: (NSString *)pattern;
// method: GetXmlDirListing
- (NSString *)GetXmlDirListing: (NSString *)pattern;
// method: GetXmlDirListingAsync
- (CkoTask *)GetXmlDirListingAsync: (NSString *)pattern;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: LargeFileUpload
- (BOOL)LargeFileUpload: (NSString *)localPath 
	remotePath: (NSString *)remotePath 
	chunkSize: (NSNumber *)chunkSize;
// method: LargeFileUploadAsync
- (CkoTask *)LargeFileUploadAsync: (NSString *)localPath 
	remotePath: (NSString *)remotePath 
	chunkSize: (NSNumber *)chunkSize;
// method: LoginAfterConnectOnly
- (BOOL)LoginAfterConnectOnly;
// method: LoginAfterConnectOnlyAsync
- (CkoTask *)LoginAfterConnectOnlyAsync;
// method: MGetFiles
- (NSNumber *)MGetFiles: (NSString *)remotePattern 
	localDir: (NSString *)localDir;
// method: MGetFilesAsync
- (CkoTask *)MGetFilesAsync: (NSString *)remotePattern 
	localDir: (NSString *)localDir;
// method: MPutFiles
- (NSNumber *)MPutFiles: (NSString *)pattern;
// method: MPutFilesAsync
- (CkoTask *)MPutFilesAsync: (NSString *)pattern;
// method: NlstXml
- (NSString *)NlstXml: (NSString *)pattern;
// method: NlstXmlAsync
- (CkoTask *)NlstXmlAsync: (NSString *)pattern;
// method: Noop
- (BOOL)Noop;
// method: NoopAsync
- (CkoTask *)NoopAsync;
// method: PutFile
- (BOOL)PutFile: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: PutFileAsync
- (CkoTask *)PutFileAsync: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: PutFileBd
- (BOOL)PutFileBd: (CkoBinData *)binData 
	remoteFilePath: (NSString *)remoteFilePath;
// method: PutFileBdAsync
- (CkoTask *)PutFileBdAsync: (CkoBinData *)binData 
	remoteFilePath: (NSString *)remoteFilePath;
// method: PutFileFromBinaryData
- (BOOL)PutFileFromBinaryData: (NSString *)remoteFilename 
	binaryData: (NSData *)binaryData;
// method: PutFileFromBinaryDataAsync
- (CkoTask *)PutFileFromBinaryDataAsync: (NSString *)remoteFilename 
	binaryData: (NSData *)binaryData;
// method: PutFileFromTextData
- (BOOL)PutFileFromTextData: (NSString *)remoteFilename 
	textData: (NSString *)textData 
	charset: (NSString *)charset;
// method: PutFileFromTextDataAsync
- (CkoTask *)PutFileFromTextDataAsync: (NSString *)remoteFilename 
	textData: (NSString *)textData 
	charset: (NSString *)charset;
// method: PutFileSb
- (BOOL)PutFileSb: (CkoStringBuilder *)sb 
	charset: (NSString *)charset 
	includeBom: (BOOL)includeBom 
	remoteFilePath: (NSString *)remoteFilePath;
// method: PutFileSbAsync
- (CkoTask *)PutFileSbAsync: (CkoStringBuilder *)sb 
	charset: (NSString *)charset 
	includeBom: (BOOL)includeBom 
	remoteFilePath: (NSString *)remoteFilePath;
// method: PutPlan
- (BOOL)PutPlan: (NSString *)planUtf8 
	planLogFilePath: (NSString *)planLogFilePath;
// method: PutPlanAsync
- (CkoTask *)PutPlanAsync: (NSString *)planUtf8 
	planLogFilePath: (NSString *)planLogFilePath;
// method: PutTree
- (BOOL)PutTree: (NSString *)localDir;
// method: PutTreeAsync
- (CkoTask *)PutTreeAsync: (NSString *)localDir;
// method: Quote
- (BOOL)Quote: (NSString *)cmd;
// method: QuoteAsync
- (CkoTask *)QuoteAsync: (NSString *)cmd;
// method: RemoveRemoteDir
- (BOOL)RemoveRemoteDir: (NSString *)dir;
// method: RemoveRemoteDirAsync
- (CkoTask *)RemoveRemoteDirAsync: (NSString *)dir;
// method: RenameRemoteFile
- (BOOL)RenameRemoteFile: (NSString *)existingFilename 
	newFilename: (NSString *)newFilename;
// method: RenameRemoteFileAsync
- (CkoTask *)RenameRemoteFileAsync: (NSString *)existingFilename 
	newFilename: (NSString *)newFilename;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SendCommand
- (NSString *)SendCommand: (NSString *)cmd;
// method: SendCommandAsync
- (CkoTask *)SendCommandAsync: (NSString *)cmd;
// method: SetModeZ
- (BOOL)SetModeZ;
// method: SetModeZAsync
- (CkoTask *)SetModeZAsync;
// method: SetOldestDate
- (void)SetOldestDate: (NSDate *)oldestDateTime;
// method: SetOldestDateStr
- (void)SetOldestDateStr: (NSString *)oldestDateTimeStr;
// method: SetOption
- (BOOL)SetOption: (NSString *)option;
// method: SetPassword
- (BOOL)SetPassword: (CkoSecureString *)password;
// method: SetRemoteFileDateTime
- (BOOL)SetRemoteFileDateTime: (NSDate *)dateTime 
	remoteFilename: (NSString *)remoteFilename;
// method: SetRemoteFileDateTimeStr
- (BOOL)SetRemoteFileDateTimeStr: (NSString *)dateTimeStr 
	remoteFilename: (NSString *)remoteFilename;
// method: SetRemoteFileDateTimeStrAsync
- (CkoTask *)SetRemoteFileDateTimeStrAsync: (NSString *)dateTimeStr 
	remoteFilename: (NSString *)remoteFilename;
// method: SetRemoteFileDt
- (BOOL)SetRemoteFileDt: (CkoDateTime *)dt 
	remoteFilename: (NSString *)remoteFilename;
// method: SetRemoteFileDtAsync
- (CkoTask *)SetRemoteFileDtAsync: (CkoDateTime *)dt 
	remoteFilename: (NSString *)remoteFilename;
// method: SetSecurePassword
- (BOOL)SetSecurePassword: (CkoSecureString *)password;
// method: SetSslCertRequirement
- (void)SetSslCertRequirement: (NSString *)name 
	value: (NSString *)value;
// method: SetSslClientCert
- (BOOL)SetSslClientCert: (CkoCert *)cert;
// method: SetSslClientCertPem
- (BOOL)SetSslClientCertPem: (NSString *)pemDataOrFilename 
	pemPassword: (NSString *)pemPassword;
// method: SetSslClientCertPfx
- (BOOL)SetSslClientCertPfx: (NSString *)pfxPath 
	pfxPassword: (NSString *)pfxPassword;
// method: SetTypeAscii
- (BOOL)SetTypeAscii;
// method: SetTypeAsciiAsync
- (CkoTask *)SetTypeAsciiAsync;
// method: SetTypeBinary
- (BOOL)SetTypeBinary;
// method: SetTypeBinaryAsync
- (CkoTask *)SetTypeBinaryAsync;
// method: Site
- (BOOL)Site: (NSString *)siteCommand;
// method: SiteAsync
- (CkoTask *)SiteAsync: (NSString *)siteCommand;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;
// method: Stat
- (NSString *)Stat;
// method: StatAsync
- (CkoTask *)StatAsync;
// method: SyncDeleteRemote
- (BOOL)SyncDeleteRemote: (NSString *)localRoot;
// method: SyncDeleteRemoteAsync
- (CkoTask *)SyncDeleteRemoteAsync: (NSString *)localRoot;
// method: SyncLocalDir
- (BOOL)SyncLocalDir: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncLocalDirAsync
- (CkoTask *)SyncLocalDirAsync: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncLocalTree
- (BOOL)SyncLocalTree: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncLocalTreeAsync
- (CkoTask *)SyncLocalTreeAsync: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncRemoteTree
- (BOOL)SyncRemoteTree: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncRemoteTreeAsync
- (CkoTask *)SyncRemoteTreeAsync: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncRemoteTree2
- (BOOL)SyncRemoteTree2: (NSString *)localRoot 
	mode: (NSNumber *)mode 
	bDescend: (BOOL)bDescend 
	bPreviewOnly: (BOOL)bPreviewOnly;
// method: SyncRemoteTree2Async
- (CkoTask *)SyncRemoteTree2Async: (NSString *)localRoot 
	mode: (NSNumber *)mode 
	bDescend: (BOOL)bDescend 
	bPreviewOnly: (BOOL)bPreviewOnly;
// method: Syst
- (NSString *)Syst;
// method: SystAsync
- (CkoTask *)SystAsync;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)code;

@end
