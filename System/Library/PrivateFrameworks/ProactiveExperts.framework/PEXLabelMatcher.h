/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveExperts/ProactiveExperts-Structs.h>
@class NSDictionary;

@interface PEXLabelMatcher : NSObject {

	NSDictionary* _map;

}

@property (nonatomic,readonly) NSDictionary * map;              //@synthesize map=_map - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)map;
-(id)init;
-(unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2 ;
-(NSDictionary*)_generateMap;
@end

