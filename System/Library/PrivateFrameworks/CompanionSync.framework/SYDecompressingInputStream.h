/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>
#import <libobjc.A.dylib/_SYStreamRunLoopSourceHandler.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/SYCompressionBufferOptimization.h>
#import <libobjc.A.dylib/SYStreamEventHandlerBlocks.h>
#import <libobjc.A.dylib/SYStreamThroughputCounter.h>
#import <libobjc.A.dylib/SYStreamProgress.h>

@class _SYStreamGuts, NSProgress, NSInputStream, _SYZlibStreamInternal, NSString;

@interface SYDecompressingInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress> {

	NSInputStream* _stream;
	_SYZlibStreamInternal* _internal;
	/*^block*/id _onOpenComplete;
	/*^block*/id _onBytesAvailable;
	/*^block*/id _onSpaceAvailable;
	/*^block*/id _onEndOfFile;
	/*^block*/id _onError;
	/*^block*/id _onClose;
	NSProgress* _progress;
	unsigned long long _byteCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_internal,nonatomic,readonly) _SYStreamGuts * internal; 
@property (assign,nonatomic) unsigned long long inputBufferSize; 
@property (assign,nonatomic) unsigned long long outputBufferSize; 
@property (nonatomic,copy) id onOpenComplete;                                          //@synthesize onOpenComplete=_onOpenComplete - In the implementation block
@property (nonatomic,copy) id onBytesAvailable;                                        //@synthesize onBytesAvailable=_onBytesAvailable - In the implementation block
@property (nonatomic,copy) id onSpaceAvailable;                                        //@synthesize onSpaceAvailable=_onSpaceAvailable - In the implementation block
@property (nonatomic,copy) id onEndOfFile;                                             //@synthesize onEndOfFile=_onEndOfFile - In the implementation block
@property (nonatomic,copy) id onError;                                                 //@synthesize onError=_onError - In the implementation block
@property (nonatomic,copy) id onClose;                                                 //@synthesize onClose=_onClose - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesThroughput;                     //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)_internal;
-(id)streamError;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)close;
-(void)open;
-(NSProgress *)progress;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)_SY_notifyOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithCompressedDataStream:(id)arg1 ;
-(void)_dispatchMyEvent:(unsigned long long)arg1 ;
-(void)_handlePendingInput;
-(void)_postEventToDelegate:(unsigned long long)arg1 ;
-(unsigned long long)inputBufferSize;
-(void)setInputBufferSize:(unsigned long long)arg1 ;
-(unsigned long long)outputBufferSize;
-(void)setOutputBufferSize:(unsigned long long)arg1 ;
-(id)onOpenComplete;
-(void)setOnOpenComplete:(id)arg1 ;
-(id)onBytesAvailable;
-(void)setOnBytesAvailable:(id)arg1 ;
-(id)onSpaceAvailable;
-(void)setOnSpaceAvailable:(id)arg1 ;
-(id)onEndOfFile;
-(void)setOnEndOfFile:(id)arg1 ;
-(id)onError;
-(void)setOnError:(id)arg1 ;
-(id)onClose;
-(void)setOnClose:(id)arg1 ;
-(unsigned long long)bytesThroughput;
-(id)initWithFileAtPath:(id)arg1 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
@end

