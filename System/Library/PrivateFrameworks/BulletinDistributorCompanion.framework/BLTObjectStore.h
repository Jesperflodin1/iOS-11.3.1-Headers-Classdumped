/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTObjectCacheDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface BLTObjectStore : NSObject <BLTObjectCacheDelegate> {

	NSString* _path;
	NSObject*<OS_dispatch_queue> _queue;
	Class _elementClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)objectCache:(id)arg1 keysWithBlock:(/*^block*/id)arg2 ;
-(void)objectCache:(id)arg1 objectForKey:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)objectCache:(id)arg1 storeObject:(id)arg2 withKey:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)objectCache:(id)arg1 removeObjectForKey:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithPath:(id)arg1 elementClass:(Class)arg2 ;
@end

