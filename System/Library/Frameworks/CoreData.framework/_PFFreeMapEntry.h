/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _PFFreeMapEntry : NSObject {

	int _retainCount;
	NSMutableSet* _owners;

}
-(void)addOwner:(id)arg1 ;
-(void)removeOwner:(id)arg1 ;
-(void)removeAllOwners;
-(id)init;
-(void)dealloc;
-(BOOL)decrement;
@end

