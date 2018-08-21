/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class MTLIOAccelResource;

@interface MTLIOMemoryInfo : NSObject {

	void* memlist_key;
	MTLIOAccelResource* fResourceListHead;
	os_unfair_lock_s _memoryInfoLock;

}
+(id)initialize;
-(void)addResourceToList:(id)arg1 ;
-(void)removeResourceFromList:(id)arg1 ;
-(CFArrayRef)annotationList;
-(id)init;
-(void)dealloc;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)shutdown;
-(void)removeDataSource:(void*)arg1 ;
@end
