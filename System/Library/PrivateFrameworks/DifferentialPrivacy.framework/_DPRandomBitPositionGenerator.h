/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPRandomBitPositionGenerator : NSObject {

	unsigned long long _m;

}

@property (m,nonatomic,readonly) unsigned long long m;              //@synthesize m=_m - In the implementation block
+(id)generatorWithDimensionality:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)m;
-(id)initWithDimensionality:(unsigned long long)arg1 ;
-(unsigned long long)sample;
@end

