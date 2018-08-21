/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString;

@interface SBSAnalyticsState : NSObject <BSDescriptionProviding> {

	double _timestamp;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withTimestamp:(double)arg1 payload:(id)arg2 ;
+(id)withTimestamp:(double)arg1 ;
-(id)initWithTimestamp:(double)arg1 payload:(id)arg2 ;
-(id)coreAnalyticsRepresentation;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(double)timestamp;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

