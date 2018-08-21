/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCoreLite/FMCoreLite-Structs.h>
@class NSString;

@interface FMReadWriteLock : NSObject {

	NSString* _lockName;
	opaque_pthread_rwlock_t _lock;

}

@property (nonatomic,retain) NSString * lockName;                       //@synthesize lockName=_lockName - In the implementation block
@property (assign,nonatomic) opaque_pthread_rwlock_t lock;              //@synthesize lock=_lock - In the implementation block
-(id)init;
-(opaque_pthread_rwlock_t)lock;
-(void)performWithReadLock:(/*^block*/id)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
-(id)initWithLockName:(id)arg1 ;
-(NSString *)lockName;
-(void)setLockName:(NSString *)arg1 ;
-(void)setLock:(opaque_pthread_rwlock_t)arg1 ;
@end

