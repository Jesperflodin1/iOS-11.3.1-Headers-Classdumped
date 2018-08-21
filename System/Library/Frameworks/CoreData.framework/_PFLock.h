/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _PFLock : NSObject <NSLocking> {

	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	unsigned long long _count;

}
+(void)initialize;
-(BOOL)tryLock;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end
