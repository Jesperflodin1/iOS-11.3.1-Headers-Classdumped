/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NTPBSession;

@interface NSSExternalAnalyticsRequestMetadata : NSObject <NSSecureCoding> {

	int _eventType;
	NSString* _eventIdentifier;
	NSString* _externalAnalyticsIdentifier;
	NTPBSession* _session;
	NSString* _contentViewedIdentifier;
	NSString* _publisherIdentifier;

}

@property (nonatomic,copy,readonly) NSString * eventIdentifier;                          //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalAnalyticsIdentifier;              //@synthesize externalAnalyticsIdentifier=_externalAnalyticsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NTPBSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentViewedIdentifier;                  //@synthesize contentViewedIdentifier=_contentViewedIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherIdentifier;                      //@synthesize publisherIdentifier=_publisherIdentifier - In the implementation block
@property (nonatomic,readonly) int eventType;                                            //@synthesize eventType=_eventType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NTPBSession *)session;
-(int)eventType;
-(NSString *)eventIdentifier;
-(NSString *)publisherIdentifier;
-(id)initWithSession:(id)arg1 eventIdentifier:(id)arg2 externalAnalyticsIdentifier:(id)arg3 contentViewedIdentifier:(id)arg4 publisherIdentifier:(id)arg5 eventType:(int)arg6 ;
-(NSString *)externalAnalyticsIdentifier;
-(NSString *)contentViewedIdentifier;
@end
