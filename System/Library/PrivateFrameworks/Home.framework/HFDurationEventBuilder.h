/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFEventBuilder.h>

@interface HFDurationEventBuilder : HFEventBuilder {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(id)buildNewEventFromCurrentState;
@end

