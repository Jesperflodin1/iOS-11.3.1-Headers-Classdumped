/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _CDEventStreams : NSObject {

	NSDictionary* _allKBEventStreams;
	NSDictionary* _allEventStreams;

}

@property (nonatomic,readonly) NSDictionary * allEventStreams;              //@synthesize allEventStreams=_allEventStreams - In the implementation block
+(id)sharedInstance;
+(id)eventStreamForName:(id)arg1 ;
+(id)eventStreamPropertiesForName:(id)arg1 ;
+(id)eventStreamPropertiesForKBName:(id)arg1 ;
+(id)ephemeralitySchedule;
+(id)rateLimitPolicy;
+(id)privacyPolicy;
-(NSDictionary *)allEventStreams;
@end

