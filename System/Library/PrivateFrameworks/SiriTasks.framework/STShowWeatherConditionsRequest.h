/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherAttributes, STCity;

@interface STShowWeatherConditionsRequest : AFSiriRequest {

	STWeatherAttributes* _attributes;
	STCity* _city;

}
+(BOOL)supportsSecureCoding;
-(id)city;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributes;
-(id)createResponse;
-(id)_initWithAttributes:(id)arg1 city:(id)arg2 ;
@end

