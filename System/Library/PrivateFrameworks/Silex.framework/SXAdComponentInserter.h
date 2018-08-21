/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentInserter.h>

@protocol SXComponentInsertionConditionEngine, SXAdvertisingSettingsProvider;
@class NSArray, NSString;

@interface SXAdComponentInserter : NSObject <SXComponentInserter> {

	id<SXComponentInsertionConditionEngine> _conditionEngine;
	id<SXAdvertisingSettingsProvider> _advertisingSettingsProvider;
	long long _insertedCount;
	double _lastInsertedYOffset;

}

@property (nonatomic,readonly) id<SXAdvertisingSettingsProvider> advertisingSettingsProvider;              //@synthesize advertisingSettingsProvider=_advertisingSettingsProvider - In the implementation block
@property (assign,nonatomic) long long insertedCount;                                                      //@synthesize insertedCount=_insertedCount - In the implementation block
@property (assign,nonatomic) double lastInsertedYOffset;                                                   //@synthesize lastInsertedYOffset=_lastInsertedYOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * conditions; 
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine;                    //@synthesize conditionEngine=_conditionEngine - In the implementation block
-(NSArray *)conditions;
-(id<SXAdvertisingSettingsProvider>)advertisingSettingsProvider;
-(long long)insertedCount;
-(double)lastInsertedYOffset;
-(unsigned long long)adTypeFromBannerType:(unsigned long long)arg1 ;
-(void)setLastInsertedYOffset:(double)arg1 ;
-(void)setInsertedCount:(long long)arg1 ;
-(unsigned long long)componentTraits;
-(BOOL)validateMarker:(id)arg1 remainingMarkerCount:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(id)componentInsertForMarker:(id)arg1 layoutProvider:(id)arg2 ;
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(id)initWithConditionEngine:(id)arg1 advertisingSettingsProvider:(id)arg2 ;
@end

