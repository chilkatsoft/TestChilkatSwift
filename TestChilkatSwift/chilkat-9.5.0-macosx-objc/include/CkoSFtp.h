// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  SFtp
// Wrapped Chilkat C++ class name =  CkSFtp

@class CkoTask;
@class CkoSshKey;
@class CkoSecureString;
@class CkoSsh;
@class CkoBinData;
@class CkoStringBuilder;
@class CkoDateTime;
@class CkoSFtpDir;


@class CkoSFtpProgress;

@interface CkoSFtp : NSObject {

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
- (void)setEventCallbackObject: (CkoSFtpProgress *)eventObj;

@property (nonatomic) BOOL AbortCurrent;
@property (nonatomic, readonly, copy) NSData *AccumulateBuffer;
@property (nonatomic, readonly, copy) NSNumber *AuthFailReason;
@property (nonatomic, copy) NSNumber *BandwidthThrottleDown;
@property (nonatomic, copy) NSNumber *BandwidthThrottleUp;
@property (nonatomic, copy) NSString *ClientIdentifier;
@property (nonatomic, copy) NSString *ClientIpAddress;
@property (nonatomic, copy) NSNumber *ConnectTimeoutMs;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSNumber *DisconnectCode;
@property (nonatomic, readonly, copy) NSString *DisconnectReason;
@property (nonatomic) BOOL EnableCache;
@property (nonatomic) BOOL EnableCompression;
@property (nonatomic, copy) NSString *FilenameCharset;
@property (nonatomic, copy) NSString *ForceCipher;
@property (nonatomic) BOOL ForceV3;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, copy) NSString *HostKeyAlg;
@property (nonatomic, readonly, copy) NSString *HostKeyFingerprint;
@property (nonatomic, copy) NSString *HttpProxyAuthMethod;
@property (nonatomic, copy) NSString *HttpProxyDomain;
@property (nonatomic, copy) NSString *HttpProxyHostname;
@property (nonatomic, copy) NSString *HttpProxyPassword;
@property (nonatomic, copy) NSNumber *HttpProxyPort;
@property (nonatomic, copy) NSString *HttpProxyUsername;
@property (nonatomic, copy) NSNumber *IdleTimeoutMs;
@property (nonatomic) BOOL IncludeDotDirs;
@property (nonatomic, readonly, copy) NSNumber *InitializeFailCode;
@property (nonatomic, readonly, copy) NSString *InitializeFailReason;
@property (nonatomic, readonly) BOOL IsConnected;
@property (nonatomic) BOOL KeepSessionLog;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSNumber *MaxPacketSize;
@property (nonatomic, readonly) BOOL PasswordChangeRequested;
@property (nonatomic, copy) NSNumber *PercentDoneScale;
@property (nonatomic) BOOL PreferIpv6;
@property (nonatomic) BOOL PreserveDate;
@property (nonatomic, readonly, copy) NSNumber *ProtocolVersion;
@property (nonatomic, copy) NSString *ReadDirMustMatch;
@property (nonatomic, copy) NSString *ReadDirMustNotMatch;
@property (nonatomic, readonly, copy) NSString *ServerIdentifier;
@property (nonatomic, readonly, copy) NSString *SessionLog;
@property (nonatomic, copy) NSString *SocksHostname;
@property (nonatomic, copy) NSString *SocksPassword;
@property (nonatomic, copy) NSNumber *SocksPort;
@property (nonatomic, copy) NSString *SocksUsername;
@property (nonatomic, copy) NSNumber *SocksVersion;
@property (nonatomic, copy) NSNumber *SoRcvBuf;
@property (nonatomic, copy) NSNumber *SoSndBuf;
@property (nonatomic, copy) NSString *SyncDirectives;
@property (nonatomic, copy) NSString *SyncedFiles;
@property (nonatomic, copy) NSString *SyncMustMatch;
@property (nonatomic, copy) NSString *SyncMustNotMatch;
@property (nonatomic) BOOL TcpNoDelay;
@property (nonatomic, copy) NSString *UncommonOptions;
@property (nonatomic, copy) NSNumber *UploadChunkSize;
@property (nonatomic) BOOL UtcMode;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, readonly, copy) NSNumber *XferByteCount;
@property (nonatomic, readonly, copy) NSNumber *XferByteCount64;
// method: AccumulateBytes
- (NSNumber *)AccumulateBytes: (NSString *)sftpHandle 
	maxBytes: (NSNumber *)maxBytes;
// method: AccumulateBytesAsync
- (CkoTask *)AccumulateBytesAsync: (NSString *)sftpHandle 
	maxBytes: (NSNumber *)maxBytes;
// method: Add64
- (NSString *)Add64: (NSString *)n1 
	n2: (NSString *)n2;
// method: AuthenticatePk
- (BOOL)AuthenticatePk: (NSString *)username 
	privateKey: (CkoSshKey *)privateKey;
// method: AuthenticatePkAsync
- (CkoTask *)AuthenticatePkAsync: (NSString *)username 
	privateKey: (CkoSshKey *)privateKey;
// method: AuthenticatePw
- (BOOL)AuthenticatePw: (NSString *)login 
	password: (NSString *)password;
// method: AuthenticatePwAsync
- (CkoTask *)AuthenticatePwAsync: (NSString *)login 
	password: (NSString *)password;
// method: AuthenticatePwPk
- (BOOL)AuthenticatePwPk: (NSString *)username 
	password: (NSString *)password 
	privateKey: (CkoSshKey *)privateKey;
// method: AuthenticatePwPkAsync
- (CkoTask *)AuthenticatePwPkAsync: (NSString *)username 
	password: (NSString *)password 
	privateKey: (CkoSshKey *)privateKey;
// method: AuthenticateSecPw
- (BOOL)AuthenticateSecPw: (CkoSecureString *)login 
	password: (CkoSecureString *)password;
// method: AuthenticateSecPwAsync
- (CkoTask *)AuthenticateSecPwAsync: (CkoSecureString *)login 
	password: (CkoSecureString *)password;
// method: AuthenticateSecPwPk
- (BOOL)AuthenticateSecPwPk: (CkoSecureString *)username 
	password: (CkoSecureString *)password 
	privateKey: (CkoSshKey *)privateKey;
// method: AuthenticateSecPwPkAsync
- (CkoTask *)AuthenticateSecPwPkAsync: (CkoSecureString *)username 
	password: (CkoSecureString *)password 
	privateKey: (CkoSshKey *)privateKey;
// method: ClearAccumulateBuffer
- (void)ClearAccumulateBuffer;
// method: ClearCache
- (void)ClearCache;
// method: ClearSessionLog
- (void)ClearSessionLog;
// method: CloseHandle
- (BOOL)CloseHandle: (NSString *)sftpHandle;
// method: CloseHandleAsync
- (CkoTask *)CloseHandleAsync: (NSString *)sftpHandle;
// method: Connect
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port;
// method: ConnectAsync
- (CkoTask *)ConnectAsync: (NSString *)hostname 
	port: (NSNumber *)port;
// method: ConnectThroughSsh
- (BOOL)ConnectThroughSsh: (CkoSsh *)sshConn 
	hostname: (NSString *)hostname 
	port: (NSNumber *)port;
// method: ConnectThroughSshAsync
- (CkoTask *)ConnectThroughSshAsync: (CkoSsh *)sshConn 
	hostname: (NSString *)hostname 
	port: (NSNumber *)port;
// method: CopyFileAttr
- (BOOL)CopyFileAttr: (NSString *)localFilePath 
	remotePathOrHandle: (NSString *)remotePathOrHandle 
	bIsHandle: (BOOL)bIsHandle;
// method: CopyFileAttrAsync
- (CkoTask *)CopyFileAttrAsync: (NSString *)localFilePath 
	remotePathOrHandle: (NSString *)remotePathOrHandle 
	bIsHandle: (BOOL)bIsHandle;
// method: CreateDir
- (BOOL)CreateDir: (NSString *)path;
// method: CreateDirAsync
- (CkoTask *)CreateDirAsync: (NSString *)path;
// method: Disconnect
- (void)Disconnect;
// method: DownloadBd
- (BOOL)DownloadBd: (NSString *)remoteFilePath 
	binData: (CkoBinData *)binData;
// method: DownloadBdAsync
- (CkoTask *)DownloadBdAsync: (NSString *)remoteFilePath 
	binData: (CkoBinData *)binData;
// method: DownloadFile
- (BOOL)DownloadFile: (NSString *)sftpHandle 
	toFilePath: (NSString *)toFilePath;
// method: DownloadFileAsync
- (CkoTask *)DownloadFileAsync: (NSString *)sftpHandle 
	toFilePath: (NSString *)toFilePath;
// method: DownloadFileByName
- (BOOL)DownloadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: DownloadFileByNameAsync
- (CkoTask *)DownloadFileByNameAsync: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: DownloadSb
- (BOOL)DownloadSb: (NSString *)remoteFilePath 
	charset: (NSString *)charset 
	sb: (CkoStringBuilder *)sb;
// method: DownloadSbAsync
- (CkoTask *)DownloadSbAsync: (NSString *)remoteFilePath 
	charset: (NSString *)charset 
	sb: (CkoStringBuilder *)sb;
// method: Eof
- (BOOL)Eof: (NSString *)sftpHandle;
// method: FileExists
- (NSNumber *)FileExists: (NSString *)remotePath 
	followLinks: (BOOL)followLinks;
// method: FileExistsAsync
- (CkoTask *)FileExistsAsync: (NSString *)remotePath 
	followLinks: (BOOL)followLinks;
// method: Fsync
- (BOOL)Fsync: (NSString *)handle;
// method: FsyncAsync
- (CkoTask *)FsyncAsync: (NSString *)handle;
// method: GetFileCreateDt
- (CkoDateTime *)GetFileCreateDt: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileCreateDtAsync
- (CkoTask *)GetFileCreateDtAsync: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileCreateTime
- (NSDate *)GetFileCreateTime: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileCreateTimeStr
- (NSString *)GetFileCreateTimeStr: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileCreateTimeStrAsync
- (CkoTask *)GetFileCreateTimeStrAsync: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileGroup
- (NSString *)GetFileGroup: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileGroupAsync
- (CkoTask *)GetFileGroupAsync: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastAccess
- (NSDate *)GetFileLastAccess: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastAccessDt
- (CkoDateTime *)GetFileLastAccessDt: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastAccessDtAsync
- (CkoTask *)GetFileLastAccessDtAsync: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastAccessStr
- (NSString *)GetFileLastAccessStr: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastAccessStrAsync
- (CkoTask *)GetFileLastAccessStrAsync: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastModified
- (NSDate *)GetFileLastModified: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastModifiedDt
- (CkoDateTime *)GetFileLastModifiedDt: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastModifiedDtAsync
- (CkoTask *)GetFileLastModifiedDtAsync: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastModifiedStr
- (NSString *)GetFileLastModifiedStr: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastModifiedStrAsync
- (CkoTask *)GetFileLastModifiedStrAsync: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileOwner
- (NSString *)GetFileOwner: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileOwnerAsync
- (CkoTask *)GetFileOwnerAsync: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFilePermissions
- (NSNumber *)GetFilePermissions: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFilePermissionsAsync
- (CkoTask *)GetFilePermissionsAsync: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileSize64
- (NSNumber *)GetFileSize64: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: HardLink
- (BOOL)HardLink: (NSString *)oldPath 
	newPath: (NSString *)newPath;
// method: HardLinkAsync
- (CkoTask *)HardLinkAsync: (NSString *)oldPath 
	newPath: (NSString *)newPath;
// method: InitializeSftp
- (BOOL)InitializeSftp;
// method: InitializeSftpAsync
- (CkoTask *)InitializeSftpAsync;
// method: LastReadFailed
- (BOOL)LastReadFailed: (NSString *)sftpHandle;
// method: LastReadNumBytes
- (NSNumber *)LastReadNumBytes: (NSString *)sftpHandle;
// method: OpenDir
- (NSString *)OpenDir: (NSString *)path;
// method: OpenDirAsync
- (CkoTask *)OpenDirAsync: (NSString *)path;
// method: OpenFile
- (NSString *)OpenFile: (NSString *)filename 
	access: (NSString *)access 
	createDisp: (NSString *)createDisp;
// method: OpenFileAsync
- (CkoTask *)OpenFileAsync: (NSString *)filename 
	access: (NSString *)access 
	createDisp: (NSString *)createDisp;
// method: ReadDir
- (CkoSFtpDir *)ReadDir: (NSString *)sftpHandle;
// method: ReadDirAsync
- (CkoTask *)ReadDirAsync: (NSString *)sftpHandle;
// method: ReadFileBytes
- (NSData *)ReadFileBytes: (NSString *)sftpHandle 
	numBytes: (NSNumber *)numBytes;
// method: ReadFileBytesAsync
- (CkoTask *)ReadFileBytesAsync: (NSString *)sftpHandle 
	numBytes: (NSNumber *)numBytes;
// method: ReadFileBytes64
- (NSData *)ReadFileBytes64: (NSString *)sftpHandle 
	offset64: (NSNumber *)offset64 
	numBytes: (NSNumber *)numBytes;
// method: ReadFileText
- (NSString *)ReadFileText: (NSString *)sftpHandle 
	numBytes: (NSNumber *)numBytes 
	charset: (NSString *)charset;
// method: ReadFileTextAsync
- (CkoTask *)ReadFileTextAsync: (NSString *)sftpHandle 
	numBytes: (NSNumber *)numBytes 
	charset: (NSString *)charset;
// method: ReadFileText64
- (NSString *)ReadFileText64: (NSString *)sftpHandle 
	offset64: (NSNumber *)offset64 
	numBytes: (NSNumber *)numBytes 
	charset: (NSString *)charset;
// method: ReadLink
- (NSString *)ReadLink: (NSString *)path;
// method: ReadLinkAsync
- (CkoTask *)ReadLinkAsync: (NSString *)path;
// method: RealPath
- (NSString *)RealPath: (NSString *)originalPath 
	composePath: (NSString *)composePath;
// method: RealPathAsync
- (CkoTask *)RealPathAsync: (NSString *)originalPath 
	composePath: (NSString *)composePath;
// method: RemoveDir
- (BOOL)RemoveDir: (NSString *)path;
// method: RemoveDirAsync
- (CkoTask *)RemoveDirAsync: (NSString *)path;
// method: RemoveFile
- (BOOL)RemoveFile: (NSString *)filePath;
// method: RemoveFileAsync
- (CkoTask *)RemoveFileAsync: (NSString *)filePath;
// method: RenameFileOrDir
- (BOOL)RenameFileOrDir: (NSString *)oldPath 
	newPath: (NSString *)newPath;
// method: RenameFileOrDirAsync
- (CkoTask *)RenameFileOrDirAsync: (NSString *)oldPath 
	newPath: (NSString *)newPath;
// method: ResumeDownloadFileByName
- (BOOL)ResumeDownloadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: ResumeDownloadFileByNameAsync
- (CkoTask *)ResumeDownloadFileByNameAsync: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: ResumeUploadFileByName
- (BOOL)ResumeUploadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: ResumeUploadFileByNameAsync
- (CkoTask *)ResumeUploadFileByNameAsync: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SendIgnore
- (BOOL)SendIgnore;
// method: SendIgnoreAsync
- (CkoTask *)SendIgnoreAsync;
// method: SetCreateDt
- (BOOL)SetCreateDt: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetCreateDtAsync
- (CkoTask *)SetCreateDtAsync: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetCreateTime
- (BOOL)SetCreateTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (NSDate *)createTime;
// method: SetCreateTimeStr
- (BOOL)SetCreateTimeStr: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetCreateTimeStrAsync
- (CkoTask *)SetCreateTimeStrAsync: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetLastAccessDt
- (BOOL)SetLastAccessDt: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetLastAccessDtAsync
- (CkoTask *)SetLastAccessDtAsync: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetLastAccessTime
- (BOOL)SetLastAccessTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	lastAccessTime: (NSDate *)lastAccessTime;
// method: SetLastAccessTimeStr
- (BOOL)SetLastAccessTimeStr: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetLastAccessTimeStrAsync
- (CkoTask *)SetLastAccessTimeStrAsync: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetLastModifiedDt
- (BOOL)SetLastModifiedDt: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetLastModifiedDtAsync
- (CkoTask *)SetLastModifiedDtAsync: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetLastModifiedTime
- (BOOL)SetLastModifiedTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	lastModTime: (NSDate *)lastModTime;
// method: SetLastModifiedTimeStr
- (BOOL)SetLastModifiedTimeStr: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetLastModifiedTimeStrAsync
- (CkoTask *)SetLastModifiedTimeStrAsync: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetOwnerAndGroup
- (BOOL)SetOwnerAndGroup: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	owner: (NSString *)owner 
	group: (NSString *)group;
// method: SetOwnerAndGroupAsync
- (CkoTask *)SetOwnerAndGroupAsync: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	owner: (NSString *)owner 
	group: (NSString *)group;
// method: SetPermissions
- (BOOL)SetPermissions: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	perm: (NSNumber *)perm;
// method: SetPermissionsAsync
- (CkoTask *)SetPermissionsAsync: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	perm: (NSNumber *)perm;
// method: SymLink
- (BOOL)SymLink: (NSString *)oldPath 
	newPath: (NSString *)newPath;
// method: SymLinkAsync
- (CkoTask *)SymLinkAsync: (NSString *)oldPath 
	newPath: (NSString *)newPath;
// method: SyncTreeDownload
- (BOOL)SyncTreeDownload: (NSString *)remoteRoot 
	localRoot: (NSString *)localRoot 
	mode: (NSNumber *)mode 
	recurse: (BOOL)recurse;
// method: SyncTreeDownloadAsync
- (CkoTask *)SyncTreeDownloadAsync: (NSString *)remoteRoot 
	localRoot: (NSString *)localRoot 
	mode: (NSNumber *)mode 
	recurse: (BOOL)recurse;
// method: SyncTreeUpload
- (BOOL)SyncTreeUpload: (NSString *)localBaseDir 
	remoteBaseDir: (NSString *)remoteBaseDir 
	mode: (NSNumber *)mode 
	bRecurse: (BOOL)bRecurse;
// method: SyncTreeUploadAsync
- (CkoTask *)SyncTreeUploadAsync: (NSString *)localBaseDir 
	remoteBaseDir: (NSString *)remoteBaseDir 
	mode: (NSNumber *)mode 
	bRecurse: (BOOL)bRecurse;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UploadBd
- (BOOL)UploadBd: (CkoBinData *)binData 
	remoteFilePath: (NSString *)remoteFilePath;
// method: UploadBdAsync
- (CkoTask *)UploadBdAsync: (CkoBinData *)binData 
	remoteFilePath: (NSString *)remoteFilePath;
// method: UploadFile
- (BOOL)UploadFile: (NSString *)sftpHandle 
	fromFilePath: (NSString *)fromFilePath;
// method: UploadFileAsync
- (CkoTask *)UploadFileAsync: (NSString *)sftpHandle 
	fromFilePath: (NSString *)fromFilePath;
// method: UploadFileByName
- (BOOL)UploadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: UploadFileByNameAsync
- (CkoTask *)UploadFileByNameAsync: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: UploadSb
- (BOOL)UploadSb: (CkoStringBuilder *)sb 
	remoteFilePath: (NSString *)remoteFilePath 
	charset: (NSString *)charset 
	includeBom: (BOOL)includeBom;
// method: UploadSbAsync
- (CkoTask *)UploadSbAsync: (CkoStringBuilder *)sb 
	remoteFilePath: (NSString *)remoteFilePath 
	charset: (NSString *)charset 
	includeBom: (BOOL)includeBom;
// method: WriteFileBytes
- (BOOL)WriteFileBytes: (NSString *)sftpHandle 
	data: (NSData *)data;
// method: WriteFileBytesAsync
- (CkoTask *)WriteFileBytesAsync: (NSString *)sftpHandle 
	data: (NSData *)data;
// method: WriteFileBytes64
- (BOOL)WriteFileBytes64: (NSString *)sftpHandle 
	offset64: (NSNumber *)offset64 
	data: (NSData *)data;
// method: WriteFileText
- (BOOL)WriteFileText: (NSString *)sftpHandle 
	charset: (NSString *)charset 
	textData: (NSString *)textData;
// method: WriteFileTextAsync
- (CkoTask *)WriteFileTextAsync: (NSString *)sftpHandle 
	charset: (NSString *)charset 
	textData: (NSString *)textData;
// method: WriteFileText64
- (BOOL)WriteFileText64: (NSString *)sftpHandle 
	offset64: (NSNumber *)offset64 
	charset: (NSString *)charset 
	textData: (NSString *)textData;

@end
