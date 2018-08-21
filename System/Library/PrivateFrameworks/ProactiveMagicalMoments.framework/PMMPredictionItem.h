/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PMMPredictionItem : NSObject {

	NSString* _bundleId;
	unsigned long long _predictionSource;
	long long _reason;
	NSDictionary* _reasonMetadata;
	double _confidence;

}

@property (nonatomic,readonly) NSString * bundleId;                              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionSource;              //@synthesize predictionSource=_predictionSource - In the implementation block
@property (nonatomic,readonly) long long reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * reasonMetadata;                    //@synthesize reasonMetadata=_reasonMetadata - In the implementation block
@property (nonatomic,readonly) double confidence;                                //@synthesize confidence=_confidence - In the implementation block
-(id)init;
-(id)description;
-(long long)reason;
-(NSString *)bundleId;
-(double)confidence;
-(id)initWithBundleId:(id)arg1 predictionSource:(unsigned long long)arg2 reason:(long long)arg3 reasonMetadata:(id)arg4 confidence:(double)arg5 ;
-(BOOL)isEqualToPredictionItem:(id)arg1 ;
-(unsigned long long)predictionSource;
-(NSDictionary *)reasonMetadata;
@end

