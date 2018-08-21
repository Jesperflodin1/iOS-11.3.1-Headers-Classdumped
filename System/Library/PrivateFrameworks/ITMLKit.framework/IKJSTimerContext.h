/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, JSManagedValue, IKJSManagedArray;

@interface IKJSTimerContext : NSObject {

	BOOL _isRepeating;
	NSTimer* _timer;
	id _ownerObject;
	JSManagedValue* _managedCallback;
	IKJSManagedArray* _managedArgs;

}

@property (nonatomic,retain) NSTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain,readonly) id ownerObject;                                //@synthesize ownerObject=_ownerObject - In the implementation block
@property (nonatomic,retain,readonly) JSManagedValue * managedCallback;              //@synthesize managedCallback=_managedCallback - In the implementation block
@property (nonatomic,retain,readonly) IKJSManagedArray * managedArgs;                //@synthesize managedArgs=_managedArgs - In the implementation block
@property (nonatomic,readonly) BOOL isRepeating;                                     //@synthesize isRepeating=_isRepeating - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)isRepeating;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)ownerObject;
-(void)removeManagedReferences;
-(id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(BOOL)arg3 ownerObject:(id)arg4 timer:(id)arg5 ;
-(JSManagedValue *)managedCallback;
-(IKJSManagedArray *)managedArgs;
@end
