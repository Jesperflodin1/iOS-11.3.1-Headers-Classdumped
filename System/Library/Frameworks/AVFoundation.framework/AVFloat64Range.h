/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVFloat64Range : NSObject <NSCopying> {

	double _minimum;
	double _maximum;

}

@property (nonatomic,readonly) double minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) double maximum;              //@synthesize maximum=_maximum - In the implementation block
+(id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2 ;
+(id)float64RangeWithAudioValueRange:(AudioValueRange)arg1 ;
-(id)initWithMinimum:(double)arg1 maximum:(double)arg2 ;
-(id)initWithAudioValueRange:(AudioValueRange)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)minimum;
-(double)maximum;
@end
