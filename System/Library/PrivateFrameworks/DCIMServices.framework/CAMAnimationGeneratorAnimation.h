/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMAnimationGeneratorAnimation : NSObject {

	double _startTime;
	double _duration;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) id updateHandler;                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(double)duration;
-(id)completionHandler;
-(double)startTime;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 updateHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)updateHandler;
@end

