/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSData, NSString, NSDate;

@interface STShowMapPointRequest : AFSiriRequest {

	NSData* _placeData;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;
	BOOL _isCurrentLocation;

}

@property (assign,nonatomic) BOOL isCurrentLocation;              //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)isCurrentLocation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)createResponse;
-(id)_initWithPlaceData:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3 ;
-(id)mapPointData;
@end

