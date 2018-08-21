/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, AVAudioFormat;

@interface AVAudioFile : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) long long length; 
@property (assign,nonatomic) long long framePosition; 
-(id)initForReading:(id)arg1 commonFormat:(unsigned long long)arg2 interleaved:(BOOL)arg3 error:(id*)arg4 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned long long)arg3 interleaved:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)readIntoBuffer:(id)arg1 frameCount:(unsigned)arg2 error:(id*)arg3 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeFromBuffer:(id)arg1 error:(id*)arg2 ;
-(long long)framePosition;
-(void)setFramePosition:(long long)arg1 ;
-(void)dealloc;
-(long long)length;
-(NSURL *)url;
-(id)initForReading:(id)arg1 error:(id*)arg2 ;
-(AVAudioFormat *)processingFormat;
-(BOOL)readIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(AVAudioFormat *)fileFormat;
@end

