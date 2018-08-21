/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/SFUOutputStream.h>

@protocol SFUOutputStream;
@class SFUCryptor, NSString;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mBaseStream;
	SFUCryptor* mCryptor;
	BOOL mIsClosed;
	BOOL mComputeCrc32;
	unsigned mCrc32;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2 ;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(BOOL)canSeek;
-(id)inputStream;
-(id)closeLocalStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3 ;
-(unsigned)crc32;
-(BOOL)canCreateInputStream;
@end

