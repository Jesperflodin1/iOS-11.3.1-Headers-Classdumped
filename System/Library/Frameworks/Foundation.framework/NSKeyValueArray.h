/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <libobjc.A.dylib/NSKeyValueProxyCaching.h>

@class NSObject, NSString, NSKeyValueNonmutatingArrayMethodSet;

@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {

	NSObject* _container;
	NSString* _key;
	NSKeyValueNonmutatingArrayMethodSet* _methods;

}
+(SCD_Struct_NS30*)_proxyNonGCPoolPointer;
+(id)_proxyShare;
-(SCD_Struct_NS31)_proxyLocator;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end

