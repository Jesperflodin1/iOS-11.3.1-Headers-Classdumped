/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPBiasedCoin : NSObject {

	double _bias;

}

@property (nonatomic,readonly) double bias;              //@synthesize bias=_bias - In the implementation block
+(id)coinWithBias:(double)arg1 ;
+(double)sanitizedProbability:(double)arg1 ;
-(BOOL)flip;
-(id)init;
-(id)description;
-(double)bias;
-(unsigned char)generateByte;
-(id)initWithBias:(double)arg1 ;
@end
