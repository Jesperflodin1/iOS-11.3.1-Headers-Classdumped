/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFActivityBitmap : NSObject {

	unsigned long long _startTime;
	unsigned long long _part1;
	unsigned long long _part2;

}

@property (assign) unsigned long long startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long part1;                  //@synthesize part1=_part1 - In the implementation block
@property (assign) unsigned long long part2;                  //@synthesize part2=_part2 - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setStartTime:(unsigned long long)arg1 ;
-(unsigned long long)startTime;
-(long long)compareStartTime:(id)arg1 ;
-(unsigned long long)part1;
-(unsigned long long)part2;
-(id)initWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part2:(unsigned long long)arg3 ;
-(void)setPart1:(unsigned long long)arg1 ;
-(void)setPart2:(unsigned long long)arg1 ;
@end
