/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString, NSFileHandle, TSMTraceController;

@interface TSMTraceBuffer : NSObject {

	NSString* mTag;
	long long mBufferID;
	long long mBufferSize;
	BOOL mSynchronizedAccess;
	NSFileHandle* mFileHandle;
	TSMTraceController* mController;
	long long mCurrentIndex;
	CFDataRef mData;
	BOOL mActive;
	unsigned mFilters[256];
	opaque_pthread_mutex_t mLock;

}

@property (nonatomic,retain) TSMTraceController * controller; 
@property (nonatomic,retain) NSFileHandle * fileHandle; 
@property (nonatomic,readonly) unsigned* filters; 
@property (nonatomic,readonly) NSString * tag; 
@property (nonatomic,readonly) long long bufferID; 
@property (nonatomic,readonly) long long bufferSize; 
@property (assign,nonatomic) BOOL synchronizedAccess; 
@property (nonatomic,readonly) BOOL active; 
+(id)bufferWithTag:(id)arg1 size:(long long)arg2 ;
-(void)dealloc;
-(void)flush;
-(BOOL)active;
-(NSString *)tag;
-(unsigned*)filters;
-(void)stop;
-(void)start;
-(void)setController:(TSMTraceController *)arg1 ;
-(TSMTraceController *)controller;
-(id)initWithTag:(id)arg1 size:(long long)arg2 ;
-(unsigned)filterForModule:(int)arg1 ;
-(void)setFilter:(unsigned)arg1 forModule:(int)arg2 ;
-(void)writeTraceRecord:(TSMTraceRecord_s*)arg1 withFilter:(unsigned)arg2 ;
-(void)setBufferID:(long long)arg1 ;
-(long long)bufferID;
-(BOOL)synchronizedAccess;
-(void)setSynchronizedAccess:(BOOL)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(long long)bufferSize;
@end

