// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  WebSocket
// Wrapped Chilkat C++ class name =  CkWebSocket

@class CkoBinData;
@class CkoStringBuilder;
@class CkoTask;
@class CkoRest;


@class CkoBaseProgress;

@interface CkoWebSocket : NSObject {

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

@property (nonatomic) BOOL CloseAutoRespond;
@property (nonatomic, readonly, copy) NSString *CloseReason;
@property (nonatomic, readonly) BOOL CloseReceived;
@property (nonatomic, readonly, copy) NSNumber *CloseStatusCode;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly) BOOL FinalFrame;
@property (nonatomic, readonly, copy) NSNumber *FrameDataLen;
@property (nonatomic, readonly, copy) NSString *FrameOpcode;
@property (nonatomic, readonly, copy) NSNumber *FrameOpcodeInt;
@property (nonatomic, copy) NSNumber *IdleTimeoutMs;
@property (nonatomic, readonly) BOOL IsConnected;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly) BOOL NeedSendPong;
@property (nonatomic) BOOL PingAutoRespond;
@property (nonatomic) BOOL PongAutoConsume;
@property (nonatomic, readonly) BOOL PongConsumed;
@property (nonatomic, readonly, copy) NSNumber *ReadFrameFailReason;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddClientHeaders
- (BOOL)AddClientHeaders;
// method: CloseConnection
- (BOOL)CloseConnection;
// method: GetFrameData
- (NSString *)GetFrameData;
// method: GetFrameDataBd
- (BOOL)GetFrameDataBd: (CkoBinData *)binData;
// method: GetFrameDataSb
- (BOOL)GetFrameDataSb: (CkoStringBuilder *)sb;
// method: PollDataAvailable
- (BOOL)PollDataAvailable;
// method: ReadFrame
- (BOOL)ReadFrame;
// method: ReadFrameAsync
- (CkoTask *)ReadFrameAsync;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SendClose
- (BOOL)SendClose: (BOOL)includeStatus 
	statusCode: (NSNumber *)statusCode 
	reason: (NSString *)reason;
// method: SendCloseAsync
- (CkoTask *)SendCloseAsync: (BOOL)includeStatus 
	statusCode: (NSNumber *)statusCode 
	reason: (NSString *)reason;
// method: SendFrame
- (BOOL)SendFrame: (NSString *)stringToSend 
	finalFrame: (BOOL)finalFrame;
// method: SendFrameAsync
- (CkoTask *)SendFrameAsync: (NSString *)stringToSend 
	finalFrame: (BOOL)finalFrame;
// method: SendFrameBd
- (BOOL)SendFrameBd: (CkoBinData *)bdToSend 
	finalFrame: (BOOL)finalFrame;
// method: SendFrameBdAsync
- (CkoTask *)SendFrameBdAsync: (CkoBinData *)bdToSend 
	finalFrame: (BOOL)finalFrame;
// method: SendFrameSb
- (BOOL)SendFrameSb: (CkoStringBuilder *)sbToSend 
	finalFrame: (BOOL)finalFrame;
// method: SendFrameSbAsync
- (CkoTask *)SendFrameSbAsync: (CkoStringBuilder *)sbToSend 
	finalFrame: (BOOL)finalFrame;
// method: SendPing
- (BOOL)SendPing: (NSString *)pingData;
// method: SendPingAsync
- (CkoTask *)SendPingAsync: (NSString *)pingData;
// method: SendPong
- (BOOL)SendPong;
// method: SendPongAsync
- (CkoTask *)SendPongAsync;
// method: UseConnection
- (BOOL)UseConnection: (CkoRest *)connection;
// method: ValidateServerHandshake
- (BOOL)ValidateServerHandshake;

@end
