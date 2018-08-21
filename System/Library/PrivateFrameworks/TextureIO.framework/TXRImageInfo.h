/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TXRBuffer;
@class NSError;

@interface TXRImageInfo : NSObject {

	unsigned long long _offset;
	id<TXRBuffer> _buffer;
	unsigned long long _bytesPerRow;
	unsigned long long _bytesPerImage;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long offset;                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<TXRBuffer> buffer;                          //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRow;                //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerImage;              //@synthesize bytesPerImage=_bytesPerImage - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerImage;
-(void)setBytesPerImage:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerRow;
-(void)setBuffer:(id<TXRBuffer>)arg1 ;
-(id<TXRBuffer>)buffer;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

