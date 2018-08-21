/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CNContact;

@interface _WBUDynamicMeCard : NSObject {

	NSMutableArray* _blocksPendingMeCard;
	CNContact* _me;
	BOOL _meCardExists;

}

@property (nonatomic,readonly) BOOL meCardExists;              //@synthesize meCardExists=_meCardExists - In the implementation block
+(id)_contactObjectComponentForString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)me;
-(id)valueForProperty:(id)arg1 contact:(id)arg2 ;
-(void)performWhenReady:(/*^block*/id)arg1 ;
-(BOOL)meCardExists;
-(void)_addressBookChanged:(id)arg1 ;
@end
