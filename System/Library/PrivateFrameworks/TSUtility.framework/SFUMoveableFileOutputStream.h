/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSString;

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream> {

	int mFd;
	NSString* mPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)flush;
-(id)path;
-(long long)offset;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)canSeek;
-(id)inputStream;
-(id)closeLocalStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithTemporaryFile:(id)arg1 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(void)truncateToLength:(long long)arg1 ;
-(BOOL)moveToPath:(id)arg1 ;
-(BOOL)canCreateInputStream;
@end

