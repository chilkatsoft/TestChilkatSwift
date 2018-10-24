// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  CkDateTime
// Wrapped Chilkat C++ class name =  CkDateTime

@class CkoDtObj;
@class CkoTask;


@interface CkoDateTime : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *IsDst;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *UtcOffset;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddDays
- (BOOL)AddDays: (NSNumber *)numDays;
// method: AddSeconds
- (BOOL)AddSeconds: (NSNumber *)numSeconds;
// method: DeSerialize
- (void)DeSerialize: (NSString *)serializedDateTime;
// method: DiffSeconds
- (NSNumber *)DiffSeconds: (CkoDateTime *)dateTimeArg;
// method: ExpiresWithin
- (BOOL)ExpiresWithin: (NSNumber *)n 
	units: (NSString *)units;
// method: GetAsDateTime
- (NSDate *)GetAsDateTime: (BOOL)bLocal;
// method: GetAsDateTimeTicks
- (NSNumber *)GetAsDateTimeTicks: (BOOL)bLocal;
// method: GetAsDosDate
- (NSNumber *)GetAsDosDate: (BOOL)bLocal;
// method: GetAsIso8601
- (NSString *)GetAsIso8601: (NSString *)formatStr 
	bLocal: (BOOL)bLocal;
// method: GetAsOleDate
- (NSNumber *)GetAsOleDate: (BOOL)bLocal;
// method: GetAsRfc822
- (NSString *)GetAsRfc822: (BOOL)bLocal;
// method: GetAsTimestamp
- (NSString *)GetAsTimestamp: (BOOL)bLocal;
// method: GetAsUnixTime
- (NSNumber *)GetAsUnixTime: (BOOL)bLocal;
// method: GetAsUnixTime64
- (NSNumber *)GetAsUnixTime64: (BOOL)bLocal;
// method: GetAsUnixTimeDbl
- (NSNumber *)GetAsUnixTimeDbl: (BOOL)bLocal;
// method: GetAsUnixTimeStr
- (NSString *)GetAsUnixTimeStr: (BOOL)bLocal;
// method: GetDtObj
- (CkoDtObj *)GetDtObj: (BOOL)bLocal;
// method: LoadTaskResult
- (BOOL)LoadTaskResult: (CkoTask *)task;
// method: OlderThan
- (BOOL)OlderThan: (NSNumber *)n 
	units: (NSString *)units;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: Serialize
- (NSString *)Serialize;
// method: SetFromCurrentSystemTime
- (BOOL)SetFromCurrentSystemTime;
// method: SetFromDateTimeTicks
- (BOOL)SetFromDateTimeTicks: (BOOL)bLocal 
	n: (NSNumber *)n;
// method: SetFromDosDate
- (BOOL)SetFromDosDate: (BOOL)bLocal 
	t: (NSNumber *)t;
// method: SetFromDtObj
- (BOOL)SetFromDtObj: (CkoDtObj *)dt;
// method: SetFromNtpTime
- (BOOL)SetFromNtpTime: (NSNumber *)ntpSeconds;
// method: SetFromOleDate
- (BOOL)SetFromOleDate: (BOOL)bLocal 
	dt: (NSNumber *)dt;
// method: SetFromRfc822
- (BOOL)SetFromRfc822: (NSString *)rfc822Str;
// method: SetFromSystemTime
- (BOOL)SetFromSystemTime: (BOOL)bLocal 
	sysTime: (NSDate *)sysTime;
// method: SetFromTimestamp
- (BOOL)SetFromTimestamp: (NSString *)timestamp;
// method: SetFromUnixTime
- (BOOL)SetFromUnixTime: (BOOL)bLocal 
	t: (NSNumber *)t;
// method: SetFromUnixTime64
- (BOOL)SetFromUnixTime64: (BOOL)bLocal 
	t: (NSNumber *)t;
// method: SetFromUnixTimeDbl
- (BOOL)SetFromUnixTimeDbl: (BOOL)bLocal 
	t: (NSNumber *)t;

@end
