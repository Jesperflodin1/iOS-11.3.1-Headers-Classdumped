/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, MRProtocolMessage;

@interface MRMessageData : NSObject {

	NSData* _data;
	MRProtocolMessage* _message;
	/*^block*/id _dataBlock;
	long long _readPosition;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) MRProtocolMessage * message; 
@property (assign,nonatomic) long long readPosition;                         //@synthesize readPosition=_readPosition - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) BOOL canPurge; 
-(NSData *)data;
-(MRProtocolMessage *)message;
-(BOOL)isFinished;
-(id)initWithMessage:(id)arg1 createDataBlock:(/*^block*/id)arg2 ;
-(long long)readPosition;
-(void)setReadPosition:(long long)arg1 ;
-(BOOL)canPurge;
@end

