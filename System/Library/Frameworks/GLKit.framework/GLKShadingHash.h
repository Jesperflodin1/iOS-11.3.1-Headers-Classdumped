/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GLKShadingHash : NSObject {

	NSObject*<OS_dispatch_queue> _vshQueue;
	NSObject*<OS_dispatch_queue> _fshQueue;
	NSMutableDictionary* _compiledVshs;
	NSMutableDictionary* _compiledFshs;

}
-(id)init;
-(void)dealloc;
-(void)purgeAllShaders;
-(id)compiledVshForKey:(id)arg1 ;
-(void)setCompiledVsh:(id)arg1 forKey:(id)arg2 ;
-(id)compiledFshForKey:(id)arg1 ;
-(void)setCompiledFsh:(id)arg1 forKey:(id)arg2 ;
@end

