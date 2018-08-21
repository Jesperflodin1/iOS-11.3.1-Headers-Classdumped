/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class CKRecordID, NSString, CKRecord, NSError, NSObject;

@interface CKDRecordFetchInfo : NSObject {

	BOOL _ignoreErrors;
	double _startDate;
	unsigned long long _fetchOrder;
	CKRecordID* _recordID;
	NSString* _etag;
	unsigned long long _state;
	CKRecord* _record;
	NSError* _error;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_source> _recordReadySource;

}

@property (assign,nonatomic) unsigned long long fetchOrder;                                //@synthesize fetchOrder=_fetchOrder - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                        //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                                              //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) double startDate;                                           //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CKRecord * record;                                            //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> recordReadySource;              //@synthesize recordReadySource=_recordReadySource - In the implementation block
@property (assign,nonatomic) BOOL ignoreErrors;                                            //@synthesize ignoreErrors=_ignoreErrors - In the implementation block
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CKRecordID *)recordID;
-(double)startDate;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithAggregator:(id)arg1 ;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)CKPropertiesDescription;
-(NSObject*<OS_dispatch_source>)recordReadySource;
-(BOOL)ignoreErrors;
-(unsigned long long)fetchOrder;
-(void)performCallback;
-(void)setFetchOrder:(unsigned long long)arg1 ;
-(void)setRecordReadySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setIgnoreErrors:(BOOL)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end
