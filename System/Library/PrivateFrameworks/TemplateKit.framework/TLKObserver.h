/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSArray, NSObject;

@interface TLKObserver : NSObject {

	BOOL _disable;
	BOOL _shouldNotRecurse;
	id _observer;
	/*^block*/id _callback;
	NSArray* _propertiesToObserve;
	NSObject*<OS_dispatch_group> _observerGroup;

}

@property (assign) id observer;                                             //@synthesize observer=_observer - In the implementation block
@property (copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
@property (assign) BOOL shouldNotRecurse;                                   //@synthesize shouldNotRecurse=_shouldNotRecurse - In the implementation block
@property (retain) NSArray * propertiesToObserve;                           //@synthesize propertiesToObserve=_propertiesToObserve - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> observerGroup;              //@synthesize observerGroup=_observerGroup - In the implementation block
@property (assign,nonatomic) BOOL disable;                                  //@synthesize disable=_disable - In the implementation block
+(id)observerForObservable:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
+(id)observerForObject:(id)arg1 properties:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
+(void)addBlock:(/*^block*/id)arg1 async:(BOOL)arg2 group:(id)arg3 ;
+(BOOL)objectsAreHomogenousForArray:(id)arg1 ;
+(id)observerForObject:(id)arg1 properties:(id)arg2 changeHandler:(/*^block*/id)arg3 shouldNotRecurse:(BOOL)arg4 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(void)setDisable:(BOOL)arg1 ;
-(BOOL)disable;
-(BOOL)shouldNotRecurse;
-(void)addObservableObject:(id)arg1 add:(BOOL)arg2 async:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_group>)observerGroup;
-(void)addObservableProperties:(id)arg1 onObject:(id)arg2 isAdding:(BOOL)arg3 async:(BOOL)arg4 ;
-(void)setPropertiesToObserve:(NSArray *)arg1 ;
-(void)setShouldNotRecurse:(BOOL)arg1 ;
-(void)setObserverGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSArray *)propertiesToObserve;
-(void)removeAllObservers;
@end

