/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class CRKEventLog, NSDate, NSString;

@interface CRKFetchLogEventsResultObject : CATTaskResultObject {

	CRKEventLog* _eventLog;
	NSDate* _currentDate;
	NSString* _sessionToken;

}

@property (nonatomic,retain) CRKEventLog * eventLog;              //@synthesize eventLog=_eventLog - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;               //@synthesize sessionToken=_sessionToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(CRKEventLog *)eventLog;
-(void)setEventLog:(CRKEventLog *)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(NSDate *)currentDate;
@end
