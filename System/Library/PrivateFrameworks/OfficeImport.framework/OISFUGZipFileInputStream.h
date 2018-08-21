/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/SFUInputStream.h>

@class NSString;

@interface OISFUGZipFileInputStream : NSObject <SFUInputStream> {

	int _fd;
	gzFile_s* _file;
	BOOL _isCachingDisabled;
	long long _offset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)canSeek;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
@end

