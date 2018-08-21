/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTSyncOperation.h>

@class NSString;

@interface MTSyncStateOperation : NSObject <MTSyncOperation> {

	BOOL _isFromSync;
	long long _type;
	NSString* _uuid;
	long long _dataClasses;

}

@property (nonatomic,copy) NSString * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long dataClasses;                 //@synthesize dataClasses=_dataClasses - In the implementation block
@property (assign,nonatomic) BOOL isFromSync;                       //@synthesize isFromSync=_isFromSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long priority; 
+(BOOL)supportsSecureCoding;
+(id)operationWithType:(long long)arg1 dataClasses:(long long)arg2 ;
+(id)operationWithType:(long long)arg1 dataClasses:(long long)arg2 fromSync:(BOOL)arg3 ;
+(id)_stringForType:(long long)arg1 ;
+(id)_stringForDataClasses:(long long)arg1 ;
+(id)operationFromMetaData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)priority;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)isFromSync;
-(id)initWithType:(long long)arg1 dataClasses:(long long)arg2 fromSync:(BOOL)arg3 ;
-(id)initWithUUID:(id)arg1 fromSync:(BOOL)arg2 type:(long long)arg3 dataClasses:(long long)arg4 ;
-(long long)dataClasses;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(BOOL)isEquivalentToOperation:(id)arg1 ;
-(id)responseOperation;
-(id)operationMetaData;
-(id)initWithType:(long long)arg1 dataClasses:(long long)arg2 ;
-(BOOL)sendsEntireState;
-(void)setDataClasses:(long long)arg1 ;
-(void)setIsFromSync:(BOOL)arg1 ;
-(BOOL)shouldRetry;
@end

