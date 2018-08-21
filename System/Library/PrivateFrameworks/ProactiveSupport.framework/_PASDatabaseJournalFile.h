/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _PASDatabaseJournalFile : NSObject {

	NSString* _path;
	unsigned long long _len;
	unsigned long long _readCursor;
	int _fd;
	BOOL _written;
	BOOL _dead;

}

@property (nonatomic,readonly) BOOL isFullyRead; 
@property (nonatomic,readonly) BOOL isAlive; 
@property (nonatomic,readonly) unsigned long long length; 
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)length;
-(id)initWithPath:(id)arg1 ;
-(void)clear;
-(void)destroy;
-(BOOL)isFullyRead;
-(BOOL)isAlive;
-(void)destroyAndUnlinkIfEmpty;
-(void)unlink;
-(void)write:(id)arg1 ;
-(id)read;
@end

