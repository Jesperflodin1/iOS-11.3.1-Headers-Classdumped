/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecord;

@interface HDCloudSyncRecord : NSObject {

	CKRecord* _record;

}

@property (nonatomic,retain) CKRecord * record;              //@synthesize record=_record - In the implementation block
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)_valueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(BOOL)arg4 error:(id*)arg5 ;
-(CKRecord *)record;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
-(void)setRecord:(CKRecord *)arg1 ;
@end

