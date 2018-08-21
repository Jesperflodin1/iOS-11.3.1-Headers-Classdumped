/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@class NSMutableArray, CNObservableContractEnforcement, NSString;

@interface CNPublishingSubject : CNObservable <CNObserver> {

	NSMutableArray* _observers;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;              //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeObserver:(id)arg1 ;
-(CNObservableContractEnforcement *)enforcement;
-(id)init;
-(void)observerDidComplete;
-(void)_addObserver:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)_allObservers;
@end

