/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray;

@interface ATXIntentResponse : NSObject <NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _abGroup;
	NSArray* _intentsInIntentUI;
	NSArray* _intentsInLockScreen;
	unsigned long long _feedbackSource;
	unsigned long long _engagementType;
	NSString* _engagedIntentId;
	NSArray* _data;

}

@property (nonatomic,readonly) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * abGroup;                             //@synthesize abGroup=_abGroup - In the implementation block
@property (nonatomic,retain) NSArray * intentsInIntentUI;                      //@synthesize intentsInIntentUI=_intentsInIntentUI - In the implementation block
@property (nonatomic,retain) NSArray * intentsInLockScreen;                    //@synthesize intentsInLockScreen=_intentsInLockScreen - In the implementation block
@property (nonatomic,readonly) unsigned long long feedbackSource;              //@synthesize feedbackSource=_feedbackSource - In the implementation block
@property (nonatomic,readonly) unsigned long long engagementType;              //@synthesize engagementType=_engagementType - In the implementation block
@property (nonatomic,readonly) NSString * engagedIntentId;                     //@synthesize engagedIntentId=_engagedIntentId - In the implementation block
@property (nonatomic,readonly) NSArray * data;                                 //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)sessionId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)data;
-(NSUUID *)uuid;
-(id)initWithAbGroup:(id)arg1 intentsInIntentUI:(id)arg2 intentsInLockScreen:(id)arg3 data:(id)arg4 ;
-(void)updateFeedbackSource:(unsigned long long)arg1 engagementType:(unsigned long long)arg2 engagedIntentId:(id)arg3 ;
-(id)jsonDescription;
-(NSString *)abGroup;
-(NSArray *)intentsInIntentUI;
-(void)setIntentsInIntentUI:(NSArray *)arg1 ;
-(NSArray *)intentsInLockScreen;
-(void)setIntentsInLockScreen:(NSArray *)arg1 ;
-(unsigned long long)feedbackSource;
-(NSString *)engagedIntentId;
-(id)jsonData;
-(id)json;
-(unsigned long long)engagementType;
@end

