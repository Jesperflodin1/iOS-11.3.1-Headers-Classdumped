/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface _UILazyMapTable : NSObject {

	/*^block*/id _mappingBlock;
	NSMapTable* _keysToClientTables;
	NSMapTable* _keysToValues;
	NSMapTable* _valuesToKeys;

}
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)description;
-(id)initWithMappingBlock:(/*^block*/id)arg1 ;
-(id)cachedObjectEnumerable;
-(void)registerClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(BOOL)hasCachedObjectForKey:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(id)cachedObjects;
-(id)keys;
-(id)keyEnumerable;
@end

