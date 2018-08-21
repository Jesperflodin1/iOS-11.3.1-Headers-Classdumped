/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/SFUDataRepresentation.h>

@protocol SFUInputStream;
@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned mFileType;
	BOOL mHasFileAttributes;
	long long mPlaintextDataLength;
	SFUCryptoKey* mCryptoKey;
	id<SFUInputStream> mInputStream;
	BOOL mDeleteFileWhenDone;

}
-(void)dealloc;
-(id)description;
-(id)path;
-(unsigned)fileType;
-(void)setFileType:(unsigned)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isReadable;
-(long long)encodedLength;
-(id)inputStream;
-(long long)dataLength;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3 ;
-(BOOL)isCryptoKeyIdenticalToKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)readFileAttributes;
-(id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)deleteFileWhenDone;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 ;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 ;
@end

