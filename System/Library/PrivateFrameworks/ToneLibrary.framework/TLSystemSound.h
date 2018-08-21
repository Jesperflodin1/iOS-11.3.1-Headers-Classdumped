/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TLSystemSound : NSObject {

	unsigned _soundID;
	BOOL _shouldDisposeOfSoundID;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;              //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) unsigned soundID; 
-(void)dealloc;
-(id)description;
-(id)initWithSoundFileURL:(id)arg1 soundID:(unsigned)arg2 ;
-(NSURL *)soundFileURL;
-(unsigned)soundID;
@end
