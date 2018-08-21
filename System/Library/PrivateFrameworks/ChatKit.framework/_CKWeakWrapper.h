/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class IMWeakReference;

@interface _CKWeakWrapper : NSProxy {

	IMWeakReference* _weakReference;
	Class _targetClass;

}

@property (nonatomic,retain) IMWeakReference * weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
@property (nonatomic,retain) Class targetClass;                            //@synthesize targetClass=_targetClass - In the implementation block
-(Class)class;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(IMWeakReference *)weakReference;
-(Class)targetClass;
-(void)setWeakReference:(IMWeakReference *)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
@end

