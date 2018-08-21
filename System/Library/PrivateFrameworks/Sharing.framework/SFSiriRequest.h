/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSSpeechRequest;

@interface SFSiriRequest : NSObject {

	BOOL _synthesizing;
	unsigned _flags;
	double _delaySecs;
	id _owner;
	/*^block*/id _speechCompletion;
	VSSpeechRequest* _speechRequest;
	/*^block*/id _speechStartHandler;
	unsigned long long _startTicks;

}

@property (assign,nonatomic) double delaySecs;                             //@synthesize delaySecs=_delaySecs - In the implementation block
@property (assign,nonatomic) unsigned flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) id owner;                                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy) id speechCompletion;                            //@synthesize speechCompletion=_speechCompletion - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
@property (nonatomic,copy) id speechStartHandler;                          //@synthesize speechStartHandler=_speechStartHandler - In the implementation block
@property (assign,nonatomic) unsigned long long startTicks;                //@synthesize startTicks=_startTicks - In the implementation block
@property (assign,nonatomic) BOOL synthesizing;                            //@synthesize synthesizing=_synthesizing - In the implementation block
-(unsigned)flags;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(double)delaySecs;
-(void)setDelaySecs:(double)arg1 ;
-(id)speechCompletion;
-(void)setSpeechCompletion:(id)arg1 ;
-(id)speechStartHandler;
-(void)setSpeechStartHandler:(id)arg1 ;
-(unsigned long long)startTicks;
-(void)setStartTicks:(unsigned long long)arg1 ;
-(BOOL)synthesizing;
-(void)setSynthesizing:(BOOL)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
@end

