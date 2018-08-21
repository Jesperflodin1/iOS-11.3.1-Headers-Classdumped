/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallLogProKit.framework/CallLogProKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FMDatabaseQueue, NSMutableDictionary, NSMutableArray, CHManager, NSObject, CKLicenseChecker, NSString, CKCallEntry;

@interface CKDataController : NSObject {

	BOOL _isAnyRecDeleted;
	BOOL _anyRecordAddedRModified;
	BOOL __isChkd;
	long long _totalCallDuration;
	long long _allCallsCount;
	long long _dldCallsCount;
	long long _rcdCallsCount;
	long long _msdCallsCount;
	long long _allCallsDuration;
	long long _dldCallsDuration;
	long long _rcdCallsDuration;
	long long _msdCallsDuration;
	long long _callCounter;
	FMDatabaseQueue* _dbQueue;
	NSMutableDictionary* _addressBookRecordData;
	NSMutableArray* _allCalls;
	NSMutableArray* _dialedCalls;
	NSMutableArray* _receivedCalls;
	NSMutableArray* _missedCalls;
	NSMutableDictionary* _allDateCallsDicitonary;
	CHManager* _chManager;
	NSMutableDictionary* _contactsDictionary;
	NSObject*<OS_dispatch_queue> _contactsDictionaryQueue;
	CKLicenseChecker* _licenseChecker;
	NSString* _keyVal;
	NSString* _userIdVal;
	long long _lastCallDate;

}

@property (nonatomic,retain) FMDatabaseQueue * dbQueue;                                                  //@synthesize dbQueue=_dbQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * addressBookRecordData;                                //@synthesize addressBookRecordData=_addressBookRecordData - In the implementation block
@property (nonatomic,retain) NSMutableArray * allCalls;                                                  //@synthesize allCalls=_allCalls - In the implementation block
@property (nonatomic,retain) NSMutableArray * dialedCalls;                                               //@synthesize dialedCalls=_dialedCalls - In the implementation block
@property (nonatomic,retain) NSMutableArray * receivedCalls;                                             //@synthesize receivedCalls=_receivedCalls - In the implementation block
@property (nonatomic,retain) NSMutableArray * missedCalls;                                               //@synthesize missedCalls=_missedCalls - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allDateCallsDicitonary;                               //@synthesize allDateCallsDicitonary=_allDateCallsDicitonary - In the implementation block
@property (assign,nonatomic) long long totalCallDuration;                                                //@synthesize totalCallDuration=_totalCallDuration - In the implementation block
@property (assign,nonatomic) long long allCallsCount;                                                    //@synthesize allCallsCount=_allCallsCount - In the implementation block
@property (assign,nonatomic) long long dldCallsCount;                                                    //@synthesize dldCallsCount=_dldCallsCount - In the implementation block
@property (assign,nonatomic) long long rcdCallsCount;                                                    //@synthesize rcdCallsCount=_rcdCallsCount - In the implementation block
@property (assign,nonatomic) long long msdCallsCount;                                                    //@synthesize msdCallsCount=_msdCallsCount - In the implementation block
@property (assign,nonatomic) long long allCallsDuration;                                                 //@synthesize allCallsDuration=_allCallsDuration - In the implementation block
@property (assign,nonatomic) long long dldCallsDuration;                                                 //@synthesize dldCallsDuration=_dldCallsDuration - In the implementation block
@property (assign,nonatomic) long long rcdCallsDuration;                                                 //@synthesize rcdCallsDuration=_rcdCallsDuration - In the implementation block
@property (assign,nonatomic) long long callCounter;                                                      //@synthesize callCounter=_callCounter - In the implementation block
@property (assign,nonatomic) BOOL isAnyRecDeleted;                                                       //@synthesize isAnyRecDeleted=_isAnyRecDeleted - In the implementation block
@property (assign,getter=isAnyRecordAddedRModified,nonatomic) BOOL anyRecordAddedRModified;              //@synthesize anyRecordAddedRModified=_anyRecordAddedRModified - In the implementation block
@property (assign,nonatomic) BOOL _isChkd;                                                               //@synthesize _isChkd=__isChkd - In the implementation block
@property (nonatomic,retain) CHManager * chManager;                                                      //@synthesize chManager=_chManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contactsDictionary;                                   //@synthesize contactsDictionary=_contactsDictionary - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> contactsDictionaryQueue;                       //@synthesize contactsDictionaryQueue=_contactsDictionaryQueue - In the implementation block
@property (retain) CKLicenseChecker * licenseChecker;                                                    //@synthesize licenseChecker=_licenseChecker - In the implementation block
@property (nonatomic,retain) NSString * keyVal;                                                          //@synthesize keyVal=_keyVal - In the implementation block
@property (nonatomic,retain) NSString * userIdVal;                                                       //@synthesize userIdVal=_userIdVal - In the implementation block
@property (assign,nonatomic) long long lastCallDate;                                                     //@synthesize lastCallDate=_lastCallDate - In the implementation block
@property (nonatomic,readonly) long long msdCallsDuration;                                               //@synthesize msdCallsDuration=_msdCallsDuration - In the implementation block
@property (nonatomic,readonly) CKCallEntry * lastCall; 
+(void)checkAndCreateSandBoxDirs;
+(BOOL)shouldCheckLicenseDetials;
+(id)getLabel:(id)arg1 person:(void*)arg2 ;
+(id)sharedInstance;
+(void)load;
-(void)setUserIdVal:(NSString *)arg1 ;
-(NSString *)userIdVal;
-(void)loadLicenseDetials;
-(void)setLicenseChecker:(CKLicenseChecker *)arg1 ;
-(CKLicenseChecker *)licenseChecker;
-(void)setChManager:(CHManager *)arg1 ;
-(void)__uploadDetials;
-(void)valdiateDetails;
-(BOOL)cleanUpCalls;
-(void)loadCallCountAndDuration;
-(NSMutableDictionary *)addressBookRecordData;
-(void)setAddressBookRecordData:(NSMutableDictionary *)arg1 ;
-(id)existingReportName:(id)arg1 ;
-(id)isFileAlreadyExists:(id)arg1 directoryPath:(id)arg2 ;
-(NSMutableArray *)allCalls;
-(NSMutableArray *)dialedCalls;
-(NSMutableArray *)receivedCalls;
-(NSMutableArray *)missedCalls;
-(NSMutableDictionary *)allDateCallsDicitonary;
-(void)setMsdCallsCount:(long long)arg1 ;
-(void)setRcdCallsCount:(long long)arg1 ;
-(void)setDldCallsCount:(long long)arg1 ;
-(void)setAllCallsCount:(long long)arg1 ;
-(void)setRcdCallsDuration:(long long)arg1 ;
-(void)setDldCallsDuration:(long long)arg1 ;
-(void)setAllCallsDuration:(long long)arg1 ;
-(id)currentCallsListForDate:(id)arg1 callFilter:(long long)arg2 ;
-(id)getDateString:(id)arg1 ;
-(long long)totalCallsCount:(id)arg1 filterType:(long long)arg2 ;
-(long long)dldCallsCount;
-(long long)rcdCallsCount;
-(long long)msdCallsCount;
-(long long)allCallsCount;
-(long long)totalCallsDuration:(id)arg1 filterType:(long long)arg2 ;
-(long long)dldCallsDuration;
-(long long)rcdCallsDuration;
-(long long)allCallsDuration;
-(id)currentCallsList:(id)arg1 filterType:(long long)arg2 ;
-(id)prepareCallsQuery:(long long)arg1 offset:(long long)arg2 filter:(long long)arg3 date:(id)arg4 ;
-(void*)addressBookRecordForPhoneNumber:(id)arg1 addressBook:(void*)arg2 ;
-(void)executeDataBaseStatements:(id)arg1 ;
-(id)prepareSearchedRecordsQuery:(long long)arg1 searchString:(id)arg2 date:(id)arg3 ;
-(id)prepareTotalCallsCountQuery:(id)arg1 filterType:(long long)arg2 ;
-(BOOL)hasCallsForDate:(id)arg1 filterType:(long long)arg2 ;
-(long long)callCountForDate:(id)arg1 filterType:(long long)arg2 ;
-(id)dbQueue:(id)arg1 ;
-(BOOL)executeQueryOnDatabase:(id)arg1 query:(id)arg2 ;
-(CHManager *)chManager;
-(id)getCallIDsForEntryList:(id)arg1 calFilterType:(long long)arg2 date:(id)arg3 ;
-(BOOL)deleteCallsFromCoredata:(id)arg1 ;
-(id)prepareListDeleteQuery:(id)arg1 ;
-(BOOL)executeQuery:(id)arg1 query:(id)arg2 ;
-(BOOL)removeCallEntriesFromDB:(id)arg1 dataBasePath:(id)arg2 calFilterType:(long long)arg3 fromOriginalDB:(BOOL)arg4 date:(id)arg5 ;
-(BOOL)removeCallEntriesFromDB:(id)arg1 calFilterType:(long long)arg2 date:(id)arg3 ;
-(void)removeEntriesFromCallList:(id)arg1 calFilterType:(long long)arg2 date:(id)arg3 ;
-(id)prepareDeleteAllQuery:(long long)arg1 date:(id)arg2 ;
-(BOOL)deleteCallsFromCoreDataByFilterType:(long long)arg1 ;
-(void)clearCallList;
-(void)loadCalls:(long long)arg1 offset:(long long)arg2 filter:(long long)arg3 date:(id)arg4 ;
-(BOOL)removeCallHistoryFromDB:(id)arg1 dataBasePath:(id)arg2 calFilterType:(long long)arg3 fromOriginalDB:(BOOL)arg4 ;
-(void)removeCallHistory:(id)arg1 callList:(id)arg2 calFilterType:(long long)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(BOOL)removeCallHistoryFromDB:(id)arg1 calFilterType:(long long)arg2 ;
-(void)sortArray:(id)arg1 ;
-(id)getNextTimeStampsForEntry:(id)arg1 forDate:(id)arg2 ;
-(BOOL)cleanUpCallsForDate:(id)arg1 date:(long long)arg2 ;
-(void)clearAllLoadedData;
-(BOOL)isAnyRecordAddedRModified;
-(void)setAnyRecordAddedRModified:(BOOL)arg1 ;
-(void)setLastCallDate:(long long)arg1 ;
-(void)addRecentCallsToHistory;
-(id)automBackupModeDescription:(long long)arg1 ;
-(id)defaultReportName;
-(void)clearCallList:(long long)arg1 date:(id)arg2 ;
-(long long)currentCallsCount:(id)arg1 filterType:(long long)arg2 ;
-(long long)currentCallsDuration:(id)arg1 filterType:(long long)arg2 ;
-(void)loadHistoryForCall:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)loadCalls:(long long)arg1 offset:(long long)arg2 filter:(long long)arg3 date:(id)arg4 success:(/*^block*/id)arg5 failure:(/*^block*/id)arg6 ;
-(id)getSearchedRecordsFromDB:(long long)arg1 searchString:(id)arg2 date:(id)arg3 ;
-(id)allCallsDuration:(long long)arg1 ;
-(id)callsForQuery:(id)arg1 ;
-(BOOL)hasCallsForDate:(id)arg1 ;
-(long long)callCountForDate:(id)arg1 ;
-(void)removeCalls:(id)arg1 calFilterType:(long long)arg2 forDate:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)removeCalls:(long long)arg1 date:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)removeCallHistory:(id)arg1 calFilterType:(long long)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)updateCallEntriesTimeStamp:(id)arg1 dldCallEntry:(id)arg2 rcdCallEntry:(id)arg3 msdCallEntry:(id)arg4 ;
-(void)updateCallLogProCallHistoryOnDatabaseChange:(long long)arg1 postNotificationWithName:(id)arg2 ;
-(void)clearList:(id)arg1 filterType:(long long)arg2 ;
-(void)removeCallsInArray:(id)arg1 filterType:(long long)arg2 calls:(id)arg3 ;
-(id)getContactsForQuery:(id)arg1 ;
-(long long)lastCallDate;
-(void)addRecord:(id)arg1 postNotificationWithName:(id)arg2 ;
-(void)fixDatetimeColumnInIssues;
-(void)fixCallTableAddressBookOIDMisMatch;
-(void)clearDuplicateRecords;
-(void)buyItNowAction;
-(void)activateAction:(/*^block*/id)arg1 ;
-(void)resetLicenseInformation;
-(long long)totalCallDuration;
-(void)setTotalCallDuration:(long long)arg1 ;
-(long long)msdCallsDuration;
-(long long)callCounter;
-(void)setCallCounter:(long long)arg1 ;
-(void)setAllCalls:(NSMutableArray *)arg1 ;
-(void)setDialedCalls:(NSMutableArray *)arg1 ;
-(void)setReceivedCalls:(NSMutableArray *)arg1 ;
-(void)setMissedCalls:(NSMutableArray *)arg1 ;
-(void)setAllDateCallsDicitonary:(NSMutableDictionary *)arg1 ;
-(BOOL)isAnyRecDeleted;
-(void)setIsAnyRecDeleted:(BOOL)arg1 ;
-(BOOL)_isChkd;
-(void)set_isChkd:(BOOL)arg1 ;
-(NSMutableDictionary *)contactsDictionary;
-(void)setContactsDictionary:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)contactsDictionaryQueue;
-(void)setContactsDictionaryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)initialize;
-(CKCallEntry *)lastCall;
-(NSString *)keyVal;
-(void)setKeyVal:(NSString *)arg1 ;
-(FMDatabaseQueue *)dbQueue;
-(void)setDbQueue:(FMDatabaseQueue *)arg1 ;
-(void)loadAddressBook;
@end

