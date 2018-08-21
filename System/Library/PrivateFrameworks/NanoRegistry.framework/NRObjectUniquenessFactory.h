/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRObjectUniquenessFactory : NSObject {

	NSMutableDictionary* _uniqueObjects;
	NSObject*<OS_dispatch_queue> _uniqueObjectsQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)getUniqueObject:(id)arg1 ;
-(void)deallocObject:(id)arg1 ;
@end

