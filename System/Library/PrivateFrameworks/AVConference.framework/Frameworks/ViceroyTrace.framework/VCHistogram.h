/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCHistogram : NSObject {

	unsigned* _buckets;
	const unsigned* _ranges;
	unsigned _bucketCount;

}

@property (readonly) const unsigned* ranges;              //@synthesize ranges=_ranges - In the implementation block
+(const unsigned*)bucketWithType:(int)arg1 count:(unsigned*)arg2 ;
+(id)rangesDescription:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id)array;
-(void)reset;
-(void)addValue:(unsigned)arg1 ;
-(void)addValue:(unsigned)arg1 withIncrement:(unsigned)arg2 ;
-(unsigned)bucketValueAtIndex:(unsigned)arg1 ;
-(id)initWithType:(int)arg1 bucketValues:(id)arg2 ;
-(const unsigned*)ranges;
-(BOOL)merge:(id)arg1 ;
@end

