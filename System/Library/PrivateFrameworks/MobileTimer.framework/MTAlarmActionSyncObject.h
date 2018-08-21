/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTSyncObject.h>

@class MTSyncActionOperation;

@interface MTAlarmActionSyncObject : MTSyncObject {

	MTSyncActionOperation* _operation;

}

@property (nonatomic,retain) MTSyncActionOperation * operation;              //@synthesize operation=_operation - In the implementation block
+(id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2 ;
+(id)alarmActionWithOperation:(id)arg1 ;
-(id)objectIdentifier;
-(id)description;
-(MTSyncActionOperation *)operation;
-(void)setOperation:(MTSyncActionOperation *)arg1 ;
-(id)lastModifiedDate;
-(id)createProtobufWithOptions:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
@end

