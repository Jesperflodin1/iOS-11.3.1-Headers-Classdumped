/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFDeleteAlarmRequest : AFSiriRequest {

	NSArray* _alarmIdentifiers;

}

@property (nonatomic,copy) NSArray * alarmIdentifiers;              //@synthesize alarmIdentifiers=_alarmIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(void)setAlarmIdentifiers:(NSArray *)arg1 ;
-(NSArray *)alarmIdentifiers;
@end

