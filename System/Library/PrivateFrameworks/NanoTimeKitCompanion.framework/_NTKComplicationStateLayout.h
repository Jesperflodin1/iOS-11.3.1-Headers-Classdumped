/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NTKComplicationLayoutRule;

@interface _NTKComplicationStateLayout : NSObject {

	NSMutableDictionary* _overrideRules;
	NTKComplicationLayoutRule* _defaultRule;

}

@property (nonatomic,retain) NTKComplicationLayoutRule * defaultRule;              //@synthesize defaultRule=_defaultRule - In the implementation block
-(void)dealloc;
-(void)setDefaultRule:(NTKComplicationLayoutRule *)arg1 ;
-(void)setRule:(id)arg1 forLayoutOverride:(long long)arg2 ;
-(id)ruleForLayoutOverride:(long long)arg1 ;
-(NTKComplicationLayoutRule *)defaultRule;
@end
