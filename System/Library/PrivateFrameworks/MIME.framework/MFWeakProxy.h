/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {

	Class _objectClass;
	MFWeakReferenceHolder* _weakRef;
	unsigned long long _hash;

}
+(id)weakProxyForObject:(id)arg1 ;
-(Class)class;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)self;
-(BOOL)isProxy;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(Class)superclass;
-(id)description;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end

