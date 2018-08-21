/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface IKPlayerStateChangeInfo : NSObject {

	NSDictionary* _jsonValue;
	long long _state;
	long long _oldState;

}

@property (nonatomic,copy) NSDictionary * jsonValue;              //@synthesize jsonValue=_jsonValue - In the implementation block
@property (nonatomic,readonly) long long state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long oldState;                //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,nonatomic) double rate; 
+(id)stateNameForState:(long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)state;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(double)elapsedTime;
-(NSDictionary *)jsonValue;
-(void)setJsonValue:(NSDictionary *)arg1 ;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 ;
-(long long)oldState;
-(void)setElapsedTime:(double)arg1 ;
-(id)initWithState:(long long)arg1 ;
@end

