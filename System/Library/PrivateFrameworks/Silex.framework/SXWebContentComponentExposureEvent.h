/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSURL;

@interface SXWebContentComponentExposureEvent : SXAnalyticsEvent {

	NSString* _componentIdentifier;
	NSURL* _URL;
	NSString* _exposureIdentifier;

}

@property (nonatomic,readonly) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * exposureIdentifier;               //@synthesize exposureIdentifier=_exposureIdentifier - In the implementation block
-(NSURL *)URL;
-(NSString *)componentIdentifier;
-(id)initWithComponent:(id)arg1 ;
-(NSString *)exposureIdentifier;
@end

