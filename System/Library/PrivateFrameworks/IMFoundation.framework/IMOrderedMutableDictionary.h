/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IMDoubleLinkedList;

@interface IMOrderedMutableDictionary : NSObject {

	NSMutableDictionary* _dictionary;
	IMDoubleLinkedList* _linkedList;

}
-(BOOL)containsKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setOrderedObject:(id)arg1 forKey:(id)arg2 ;
-(id)orderedObjectForKey:(id)arg1 ;
-(void)removeOrderedObjectForKey:(id)arg1 ;
-(id)orderedObjects;
-(BOOL)containsOrderedObject:(id)arg1 ;
@end

