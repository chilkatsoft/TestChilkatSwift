// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Hashtable
// Wrapped Chilkat C++ class name =  CkHashtable

@class CkoStringBuilder;
@class CkoStringTable;


@interface CkoHashtable : NSObject {

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

@property (nonatomic) BOOL LastMethodSuccess;
// method: AddFromXmlSb
- (BOOL)AddFromXmlSb: (CkoStringBuilder *)sbXml;
// method: AddInt
- (BOOL)AddInt: (NSString *)key 
	value: (NSNumber *)value;
// method: AddQueryParams
- (BOOL)AddQueryParams: (NSString *)queryParams;
// method: AddStr
- (BOOL)AddStr: (NSString *)key 
	value: (NSString *)value;
// method: Clear
- (void)Clear;
// method: ClearWithNewCapacity
- (BOOL)ClearWithNewCapacity: (NSNumber *)capacity;
// method: Contains
- (BOOL)Contains: (NSString *)key;
// method: ContainsIntKey
- (BOOL)ContainsIntKey: (NSNumber *)key;
// method: GetKeys
- (BOOL)GetKeys: (CkoStringTable *)strTable;
// method: LookupInt
- (NSNumber *)LookupInt: (NSString *)key;
// method: LookupStr
- (NSString *)LookupStr: (NSString *)key;
// method: Remove
- (BOOL)Remove: (NSString *)key;
// method: ToXmlSb
- (BOOL)ToXmlSb: (CkoStringBuilder *)sbXml;

@end
