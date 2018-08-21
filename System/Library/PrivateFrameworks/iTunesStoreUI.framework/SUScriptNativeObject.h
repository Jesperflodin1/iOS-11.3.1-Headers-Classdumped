/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, SUScriptObject;

@interface SUScriptNativeObject : NSObject {

	NSLock* _lock;
	id _nativeObject;
	SUScriptObject* _scriptObject;
	BOOL _weak;

}

@property (assign,nonatomic) id object; 
@property (assign) SUScriptObject * scriptObject; 
+(void)clearWeakReferencesToObject:(id)arg1 ;
+(void)makeReferencesToObjectWeak:(id)arg1 ;
+(id)objectWithNativeObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)object;
-(void)lock;
-(void)unlock;
-(void)setObject:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(SUScriptObject *)scriptObject;
-(void)setScriptObject:(SUScriptObject *)arg1 ;
-(void)_nativeObjectBecameWeakNotification:(id)arg1 ;
@end

