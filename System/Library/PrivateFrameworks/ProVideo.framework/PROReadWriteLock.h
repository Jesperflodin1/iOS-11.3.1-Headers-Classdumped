/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface PROReadWriteLock : NSObject <NSLocking> {

	opaque_pthread_rwlock_t lock;

}
-(void)lockForReading;
-(void)lockForWriting;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
@end
